//#include <stdlib.h>
//#include<string.h>
//#include<errno.h>
//#include<stdio.h>
//
//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int*p = (int*)malloc(10*sizeof(int));
//	if(p==NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		//����ʹ�õĿռ�
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
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	free(p);
//	return 0;
//}



//������̬����
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
Ϊһ��������̬����ռ�
���룺һ������ֵ
������̬������ʴ�С�Ķѿռ䣬������һϵ�д���
���أ�ָ��ѿռ��ָ��
*/
int*readline()
{
	int*array = NULL;
	int size;

	size = N;//�ѿռ�ĳ�ʼ��С
	array = (int*)malloc((size+1)*sizeof(int));
	if(NULL == array)
	{
		//����ռ�ʧ��
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
				//�޸Ŀռ�ʧ��
				printf("realloc faild\n");
				exit(-1);
			}
		}
		if(count<size)
		{
			array=realloc(array,(count+1)*sizeof(int));
			if(NULL == array)
			{
				//�޸Ŀռ�ʧ��
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