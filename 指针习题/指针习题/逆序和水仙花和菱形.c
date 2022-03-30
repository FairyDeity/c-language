/*#include <stdio.h>
#include <string.h>

void reverse(char* str)
{
	
	int len=strlen(str);
	char *left=str;
	char *right= str+len-1;
	while(left<right)
	{
		char tmp=*left;
		*left = *right;
		*right =tmp;
		left++;
		right--;

	}
}
int main()
{  char arr[100]= {0};
scanf("%s",arr);
   reverse(arr);
   printf("%s",arr);
	return 0;
}*/

//找出水仙花数
/*#include <math.h>
#include<stdio.h>
int main()
{
	int i =0 ;
	for(i=0;i<=10000;i++)
	{   //1.计算i的位数
		int n = 1;
		int tmp = i;
		
		int sum = 0;
		while (tmp/=10)
		{
			n++;
		}
		//2.计算i的每一位的n次方之和sum
		tmp=i;
		while(tmp)
		{
			sum+= pow(tmp%10,n);
			tmp/=10;
		}
		if(i==sum)
		{
			printf("%d  ",i);
		}
	}

}*/
//打印出菱形
#include <stdio.h>
int main()
{
	int line = 0;
	int i=0;
	scanf("%d",&line);
	
	for(i=0;i<line;i++)
	{
		int  j=0;
		for(j=0;j<line-1-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}for(i=0;i<line - 1;i++)
	{
		int j = 0;
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(j=0;j<2*(line-1-i)-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
