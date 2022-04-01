#include <stdio.h>
//1.喝汽水问题，一瓶汽水一元，两个空瓶可以换一瓶汽水，给二十元可以喝多少汽水。
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//    scanf("%d",&money);
//     total = money;
//	 empty = money;
//	 while (empty>=2)
//	 {
//		 total+=empty/2;
//		empty = empty/2+empty%2;
//	   }
//	 printf("total = %d\n",total);
//return 0;
////}

//2.调整数字的顺序使数组中所有奇数位于数组的前半部分，所有偶数位于数组后半部分
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d",arr[i]);
//
//	}
//	printf("\n");
//}
//void move(int arr[],int sz)
//{
//	int left = 0;
////	int right = sz -1;
//while(left<right)
//{
//从左边找偶数
//	while ((left<right)&&(arr[left]%2==1))
//	 {
//		left++;
//	  }
//从右边找奇数
//	while((left<right)&&(arr[right]%2==0))
//	{
//		right--;
//	 }
//    if(left<right)
//	{
//		int tmp = arr[left];
//		arr[left]=arr[right];
//		arr[right]=tmp;
//	}
//}
//}
//int main()
//{
//	int arr[]={5,8,3,4,1,6,7,9};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	move(arr,sz);
//	print(arr,sz);
//	return 0 ;
//}
/*3.五位运动员准备比赛，预测比赛结果：
A说：B第二，我第三
B说：我第二，E第四
C说：我第一,D第二
D说：C最后，我第三
E说：我第四，A第一
比赛结束后，每位选手只说对了一半，请确定比赛名词
int main()
	{ 
		int a=0;
		int b=0;
		int c=0;
		int d=0;
		int e=0;
		for(a=1;a<=5;a++)
		{
			for(b=1;b<=5;b++)
			{
				for(c=1;c<=5;c++)
				{
					for(d=1;d<=5;d++)
					{
						for(e=1;e<=5;e++)
						{
							if(((b==2)+(a==3)==1)&&((b==2)+(e==4)==1)&&((c==1)+(d==2)==1)&&((c==5)+(d==3)==1)&&((e==4)+(a==1)==1))
							{
								if( a*b*c*d*e==120)
									printf("a=%d b=%d c=%d d=%d e=%d\n",a,b,c,d,e);
							}
						}
					}

				}
			}
		}

		return 0;
	}
*/