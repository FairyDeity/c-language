//易错

//1.错误代码
//#include <stdio.h>
//#include<string.h>
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//void Test(void)
//{
//	
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str,"hello world");
//	printf(str);
//	
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//运行代码程序会出现崩溃的现象，程序存在内存泄漏的问题
//str以传值的形式给p,p是GetMemory函数的形参
//只在函数内部有效，等GetMemory函数返回之后，动态开辟内存尚未释放
//并且无法找到，会导致内存泄漏

//改正(1)：
//#include <stdio.h>
//#include<string.h>
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//void Test(void)
//{
//	
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str,"hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//	
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改正（2）：

//#include <stdio.h>
//#include<string.h>
//char* GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	
//	char *str = NULL;
//	str = GetMemory(str);
//	strcpy(str,"hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//	
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//2.错误代码
//#include <stdio.h>
//#include<string.h>
//char *GetMemory(void)
//{
//	char p[]="hello world";
//	return p ;
//}
//void Test(void)
//{
//	
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);	
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//返回栈空间的地址问题,非法访问内存，得出随机值

//int* test()
//{
//	int a = 10;//栈区
//	return &a;
//}
//int main()
//{
//	int *p = test();
//	*p = 20;
//	return 0;
//
//}

//改正

//int* test()
//{
//	static int a = 10;//栈区
//	return &a;
//}
//int main()
//{
//	int *p = test();
//	*p = 20;
//	return 0;
//
//}

//堆区
//int* test()
//{
//	int *ptr = malloc(100);
//	return ptr;
//}
//int main()
//{
//	int *p = test();
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//void Test(void)
//{
//	char *str = (char*)malloc(100);
//	strcpy(str,"hello");
//	//此处加上free(str)代码正确
//	if(str!=NULL)
//	{
//		strcpy(str,"world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}
//虽然输出结果是world，但是代码有严重错误