//在一个8*8国际象棋盘上，有8个皇后，每个皇后占一格；要求皇后之间不能有两个皇后处在同一行、同一列或同一对角线上。总共有多少种不同的方法？
//回溯法
#include <stdio.h>
#define Queens 8
int a[Queens+1];
int main()
{
	int i, k, flag, not_finish=1,count=0;
	i=1;
	a[1]=1;
	printf("The possible configuration of 8 queens are:\n");
	while(not_finish)
	{
		while(not_finish && i<=Queens)
		{
			for(flag=1,k=1;flag && k<i;k++)
				if(a[k]=a[i])
					flag=0;

			for(k=1;flag&&k<i;k++)
				if((a[i]==a[k]-(k-i))||(a[i]==a[k]+(k-i)))
					flag=0;
			if(!flag)
			{
				if(a[i]==a[i-1])
				{
					i--;
					if(i>1 &&a[i]==Queens)
						a[i]=1;
					else
						if(i==1 && a[i]==Queens)
							not_finish=0;
						else
							a[i]++;
				}else if(a[i]==Queens)
					a[i]=1;
				else
					a[i]++;

			}else if(++i<=Queens)
				if(a[i-1]==Queens)
					a[i]=1;
				else
					a[i]= a[i-1]+1;
		}
		if(not_finish)
		{
			++count;
			printf((count-1)%3?"\t[%2d]:":"\n[%2d]:",count);
			for(k=1;k<=Queens;k++)
				printf("%d",a[k]);
			if(a[Queens-1]<Queens)
				a[Queens-1]++;
			else
				a[Queens-1]=1;
			i=Queens-1;
		}
	}
}