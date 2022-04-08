//#include <stdlib.h>
//#include<string.h>
//#include<errno.h>
//#include<stdio.h>
//
//int main()
//{
//	//向内存申请10个整形的空间
//	int*p = (int*)malloc(10*sizeof(int));
//	if(p==NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		//正常使用的空间
//		int i =0;
//		for( i = 0; i< 10; i++)
//		{
//			*( p + i )= i;
//		}
//		for( i=0 ;i < 10; i++)
//		{
//			printf("%d ",*(p+i));
//		}
//	}
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统
//	free(p);
//	return 0;
//}



//创建动态数组
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define N  50

int *readline(void);

void main(void)
{
	int *string = readline();
	printf("%d\n",*string);
	free(string);
}
/*
为一列整数动态分配空间
输入：一列整数值
处理：动态分配合适大小的堆空间，并将这一系列存入
返回：指向堆空间的指针
*/
int*readline()
{
	int*array = NULL;
	int size;

	size = N;//堆空间的初始大小
	array = (int*)malloc((size+1)*sizeof(int));
	if(NULL == array)
	{
		//分配空间失败
		printf("malloc faild\n");
		exit(-1);
	}
    int value ;
	int count = 0;
	printf("\n>>");
	while(scanf("%d",&value)==1)
	{
		count++;
		if(count > size)
		{
			size+= N;
			array=realloc(array,(size+1)*sizeof(int));
			if(NULL == array)
			{
				//修改空间失败
				printf("realloc faild\n");
				exit(-1);
			}
		}
		if(count<size)
		{
			array=realloc(array,(count+1)*sizeof(int));
			if(NULL == array)
			{
				//修改空间失败
				printf("realloc faild\n");
				exit(-1);
			}
		}
		array[count]= value;
		printf("\n>>");

	}
	array[0] = count;
	return array;

}