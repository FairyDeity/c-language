#include <stdio.h>
//1.����ˮ���⣬һƿ��ˮһԪ��������ƿ���Ի�һƿ��ˮ������ʮԪ���Ժȶ�����ˮ��
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

//2.�������ֵ�˳��ʹ��������������λ�������ǰ�벿�֣�����ż��λ�������벿��
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
//�������ż��
//	while ((left<right)&&(arr[left]%2==1))
//	 {
//		left++;
//	  }
//���ұ�������
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
/*3.��λ�˶�Ա׼��������Ԥ����������
A˵��B�ڶ����ҵ���
B˵���ҵڶ���E����
C˵���ҵ�һ,D�ڶ�
D˵��C����ҵ���
E˵���ҵ��ģ�A��һ
����������ÿλѡ��ֻ˵����һ�룬��ȷ����������
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