//一对兔子，从出生后第三个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总对数是多少？
//1.迭代法
//#include <stdio.h>
//int main()
//{
//	long f1 = 1, f2 =1;//兔子的数量
//	int i;//循环次数
//	int n;//要计算的月份
//
//	printf("输入要计算的月份：\n");
//	scanf("%d",&n);
//
//	//计算出循环次数
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
//		printf("第%d个月有%d只\n",i*2-1,f1);
//		printf("第%d个月有%d只\n",i*2,f2);
//
//		f1 = f1 + f2;
//		f2 = f1 + f2;
//
//	}
//	return 0;
//
//}

//
////2.递归法
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
//	printf("输入要计算的月数：");
//	scanf("%d",&n);
//	printf("第%d个月的兔子总数为%d\n",n,Feibonacci(n));
//	return 0;
//}

//
////3.使用数组
//#include <stdio.h>
//void main()
//{
//	int a[100],i,n;
//	printf("请输入月数：");
//	scanf("%d",&n);
//
//	a[0]=a[1]=1;
//	for(i=2;i<n;i++)
//	a[i]=a[i-1]+a[i-2];
//	printf("第%d个月的兔子为：%d\n",n,a[n-1]);
//}
