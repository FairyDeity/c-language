#include <stdlib.h>
#include<string.h>
#include<errno.h>
#include<stdio.h>

int main()
{
	//向内存申请10个整形的空间
	int * p = (int*)malloc(10*sizeof(int));
	if(p==NULL)
	{
		//打印错误原因的一个方式
		printf("%s\n",strerror(errno));

	}
	else
	{
		//正常使用空间
		int i = 0;
		for(i=0;i< 10 ;i++)
		{
			*(p+i) = i;
		}
		for(i=0 ; i <10; i++)
		{
			printf("%d ",*(p+i));
		}
	}
	//当动态申请的空间不再使用的时候
	//就应该还给操作系统
	free(p);
	p= NULL;//手动置空

	return 0;
}
//int main()
//{
//	int *p = (int*)malloc(20);
//	if(p==NULL)
//	{
//		printf("%s\n",strerror(errno));
//
//	}
//	else
//	{
//		int i = 0;
//		for(i = 0; i < 5; i++)
//		{
//			*(p+i) = i;
//		}
//
//	}
//	//就是在使用malloc开辟的20个字节的空间
//	//假设在这里，20个字节不够满足我们的使用了
//	//希望我们有40个字节的空间，这里就可以使用realloc来调整动态内存的开辟
//	
//	
//	//realloc使用的注意事项
//	/*1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//		2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域开辟一块
//		满足需求的空间并且把原来内存中的数据拷贝回来，释放旧的内存空间
//		最后返回新开辟的内存空间地址
//		3.得用一个新的变量来接受realloc函数的返回值
//*/
//	int *ptr = (int*)realloc(p,40);
//	
//	if(ptr!=NULL)
//	{
//		p = ptr;
//	}
//
//     int i = 0;
//	for(i = 5; i <10 ; i++)
//	{
//		*(p+i) = i;
//	}
//	for(i = 0;i <10;i++)
//	{
//		printf("%d",*(p+i));
//	}
//	return 0;
//}