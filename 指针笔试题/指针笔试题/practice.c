
	//int a[5]={1,2,3,4,5};
	//int *ptr = (int *)(&a+1);//&a������ĵ�ַ��&a+1����������������
	//printf("%d,%d\n",*(a+1),*(ptr-1));// 2,5
#include <stdio.h>
   /* struct Test
	{
		int Num;
		char *pcName;
		short sDate;
		char cha[2];
		short sBa[4];

	}* p;
	int main()
	{
		p = (struct Test*)0x100000;
		printf("%p\n",p+0x1);//00100014
		printf("%p\n",(unsigned long)p+0x1);//00100001���ڴ�����С�ĵ�λ��һ���ֽڣ�ÿ���ֽڶ���һ����ַ����ַ��һ���ƫ��һ���ֽ�
		printf("%p\n",(unsigned int *)p+0x1);//00100004
return 0;
	}*/
/*int main()
{
	int a[4]={1,2,3,4};
	int *ptr1=(int*)(&a+1);
	int *ptr2=(int*)((int)a+1);
	printf("%x,%x",ptr1[-1],*ptr2);//ptr[-1]==*(ptr+(-1))==*��ptr-1��
	//4  02000000
	return 0;
}*/
/*int main()
{
	int a[3][2]={ (0,1),(2,3),(4,5)};//���ű��ʽ���൱��a[3][2]={1,3,5}
	int *p;
	p =a[0];//p�����1�ĵ�ַ
	printf("%d\n",p[0]);//1 p[0]==*(p+0)==`1
	return 0;
}*/
int main()
{ 
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
	//FFFFFFFC,-4
	return 0;
}