//һ�����ӣ��ӳ��������������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ������ܶ����Ƕ��٣�
//1.������
//#include <stdio.h>
//int main()
//{
//	long f1 = 1, f2 =1;//���ӵ�����
//	int i;//ѭ������
//	int n;//Ҫ������·�
//
//	printf("����Ҫ������·ݣ�\n");
//	scanf("%d",&n);
//
//	//�����ѭ������
//	if(n%2==1)
//	{
//		n = (n+1)/2;
//	}
//	else
//	{
//		n=n/2;
//	}
//	for(i=1;i<=n;i++)
//	{
//		printf("��%d������%dֻ\n",i*2-1,f1);
//		printf("��%d������%dֻ\n",i*2,f2);
//
//		f1 = f1 + f2;
//		f2 = f1 + f2;
//
//	}
//	return 0;
//
//}

//
////2.�ݹ鷨
//#include <stdio.h>
//int Feibonacci(int n)
//{
//	if(n==1||n==2)
//		return 1;
//	else
//		return Feibonacci(n-1)+Feibonacci(n-2);
//}
//int main()
//{
//	int n;
//	printf("����Ҫ�����������");
//	scanf("%d",&n);
//	printf("��%d���µ���������Ϊ%d\n",n,Feibonacci(n));
//	return 0;
//}

//
////3.ʹ������
//#include <stdio.h>
//void main()
//{
//	int a[100],i,n;
//	printf("������������");
//	scanf("%d",&n);
//
//	a[0]=a[1]=1;
//	for(i=2;i<n;i++)
//	a[i]=a[i-1]+a[i-2];
//	printf("��%d���µ�����Ϊ��%d\n",n,a[n-1]);
//}
