#include <stdlib.h>
#include<string.h>
#include<errno.h>
#include<stdio.h>

int main()
{
	//���ڴ�����10�����εĿռ�
	int * p = (int*)malloc(10*sizeof(int));
	if(p==NULL)
	{
		//��ӡ����ԭ���һ����ʽ
		printf("%s\n",strerror(errno));

	}
	else
	{
		//����ʹ�ÿռ�
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
	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
	//��Ӧ�û�������ϵͳ
	free(p);
	p= NULL;//�ֶ��ÿ�

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
//	//������ʹ��malloc���ٵ�20���ֽڵĿռ�
//	//���������20���ֽڲ����������ǵ�ʹ����
//	//ϣ��������40���ֽڵĿռ䣬����Ϳ���ʹ��realloc��������̬�ڴ�Ŀ���
//	
//	
//	//reallocʹ�õ�ע������
//	/*1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//		2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ����򿪱�һ��
//		��������Ŀռ䲢�Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�
//		��󷵻��¿��ٵ��ڴ�ռ��ַ
//		3.����һ���µı���������realloc�����ķ���ֵ
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