
//1.�����ӡ��λ����
//#include <stdio.h>
//int main( )
//{
 //   long a,b,c,d,e,x;
  //  printf("������ 5 λ���֣�");
  //  scanf("%ld",&x);
  //  a=x/10000;        /*�ֽ����λ*/
    //b=x%10000/1000;   /*�ֽ��ǧλ*/
    //c=x%1000/100;     /*�ֽ����λ*/
    //d=x%100/10;       /*�ֽ��ʮλ*/
    //e=x%10;           /*�ֽ����λ*/
    /*if (a!=0){
        printf("Ϊ 5 λ��,����Ϊ�� %ld %ld %ld %ld %ld\n",e,d,c,b,a);
    } else if(b!=0) {
         printf("Ϊ 4 λ��,����Ϊ�� %ld %ld %ld %ld\n",e,d,c,b);
    } else if(c!=0) {
         printf("Ϊ 3 λ��,����Ϊ��%ld %ld %ld\n",e,d,c);
    } else if(d!=0) {
         printf("Ϊ 2 λ��,����Ϊ�� %ld %ld\n",e,d);
    } else if(e!=0) {
         printf("Ϊ 1 λ��,����Ϊ��%ld\n",e);
    }
}
*/


//2.�����Խ���Ԫ��֮��
/*#include<stdio.h>
#define N 3
int main()
{
    int i,j,a[N][N],sum=0;
    printf("���������(3*3)��\n");
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<N;i++)
        sum+=a[i][i];
    printf("�Խ���֮��Ϊ��%d\n",sum);
    return 0;
}
*/

//3.��#define������ϰ

/*#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)
int main()
{
    int num;
    int again=1;
    printf("���ֵС�� 50 ������ֹ��\n");
    while(again)
    {
        printf("\n���������֣�");
        scanf("%d",&num);
        printf("�����ֵ�ƽ��Ϊ %d \n",SQ(num));
        if(num>=50)
            again=TRUE;
        else
            again=FALSE;
    }
    return 0;
}
*/

//4.��#define������ϰ
/*
#include<stdio.h>
#define exchange(a,b) { int t;t=a;a=b;b=t;}//ע�����һ����
int main()
{
    int x=10;
    int y=20;
    printf("x=%d; y=%d\n",x,y);
    exchange(x,y);
    printf("x=%d; y=%d\n",x,y);
    return 0;
}
*/
//5.��#define������ϰ
/*#define LAG >
#define SMA <
#define EQ ==
#include <stdio.h>
int main()
{
    int i,j;
    printf("�������������֣�\n");
    scanf("%d %d",&i,&j);
    if(i LAG j)
        printf("%d ���� %d \n",i,j);
    else if(i EQ j)
        printf("%d ���� %d \n",i,j);
    else if(i SMA j)
        printf("%d С�� %d \n",i,j);
    else
        printf("û��ֵ��\n");
    return 0;
}*/