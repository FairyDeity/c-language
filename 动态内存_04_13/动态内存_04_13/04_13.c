//�״�

//1.�������
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
//���д���������ֱ��������󣬳�������ڴ�й©������
//str�Դ�ֵ����ʽ��p,p��GetMemory�������β�
//ֻ�ں����ڲ���Ч����GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷ�
//�����޷��ҵ����ᵼ���ڴ�й©

//����(1)��
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

//������2����

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


//2.�������
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

//����ջ�ռ�ĵ�ַ����,�Ƿ������ڴ棬�ó����ֵ

//int* test()
//{
//	int a = 10;//ջ��
//	return &a;
//}
//int main()
//{
//	int *p = test();
//	*p = 20;
//	return 0;
//
//}

//����

//int* test()
//{
//	static int a = 10;//ջ��
//	return &a;
//}
//int main()
//{
//	int *p = test();
//	*p = 20;
//	return 0;
//
//}

//����
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
//	//�˴�����free(str)������ȷ
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
//��Ȼ��������world�����Ǵ��������ش���