//��һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�
/*#include "stdio.h"
#include "conio.h"
main()
{
  int a[11]={1,4,6,9,13,16,19,28,40,100};
  int temp1,temp2,number,end,i,j;
  printf("original array is:\n");
  for(i=0;i<10;i++)
    printf("%5d",a[i]);
  printf("\n");
  printf("insert a new number:");
  scanf("%d",&number);
  end=a[9];
  if(number>end)
    a[10]=number;
  else
  {
    for(i=0;i<10;i++)
    {
      if(a[i]>number)
      {
        temp1=a[i];
        a[i]=number;
        for(j=i+1;j<11;j++)
        {
          temp2=a[j];
          a[j]=temp1;
          temp1=temp2;
        }
        break;
      }
    }
  }
  for(i=0;i<11;i++)
    printf("%6d",a[i]);
  getch();
}

*/


//ѧϰʹ��auto����������÷�
/*
#include "stdio.h"
#include "conio.h"
main()
{
  int i,num;
  num=2;
  for(i=0;i<3;i++)
  {
    printf("\40: The num equal %d \n",num);
    num++;
    {
      auto int num=1;
      printf("\40: The internal block num equal %d \n",num);
      num++;
    }
  }
  getch();
}
*/




//��n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ��������1��3��������������3�����˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��



/*
#include "stdio.h"
#include "conio.h"
#define nmax 50
main()
{
  int i,k,m,n,num[nmax],*p;
  printf("please input the total of numbers:");
  scanf("%d",&n);
  p=num;
  for(i=0;i<n;i++)
    *(p+i)=i+1;
  i=0;
  k=0;
  m=0;
  while(m<n-1)
  {
    if(*(p+i)!=0) k++;
    if(k==3)
    {
      *(p+i)=0;
      k=0;
      m++;
    }
    i++;
    if(i==n) i=0;
  }
  while(*p==0) p++;
  printf("%d is left\n",*p);
  getch();
}
*/


