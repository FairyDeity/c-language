
//1.逆序打印各位数字
//#include <stdio.h>
//int main( )
//{
 //   long a,b,c,d,e,x;
  //  printf("请输入 5 位数字：");
  //  scanf("%ld",&x);
  //  a=x/10000;        /*分解出万位*/
    //b=x%10000/1000;   /*分解出千位*/
    //c=x%1000/100;     /*分解出百位*/
    //d=x%100/10;       /*分解出十位*/
    //e=x%10;           /*分解出个位*/
    /*if (a!=0){
        printf("为 5 位数,逆序为： %ld %ld %ld %ld %ld\n",e,d,c,b,a);
    } else if(b!=0) {
         printf("为 4 位数,逆序为： %ld %ld %ld %ld\n",e,d,c,b);
    } else if(c!=0) {
         printf("为 3 位数,逆序为：%ld %ld %ld\n",e,d,c);
    } else if(d!=0) {
         printf("为 2 位数,逆序为： %ld %ld\n",e,d);
    } else if(e!=0) {
         printf("为 1 位数,逆序为：%ld\n",e);
    }
}
*/


//2.求矩阵对角线元素之和
/*#include<stdio.h>
#define N 3
int main()
{
    int i,j,a[N][N],sum=0;
    printf("请输入矩阵(3*3)：\n");
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<N;i++)
        sum+=a[i][i];
    printf("对角线之和为：%d\n",sum);
    return 0;
}
*/

//3.宏#define命令练习

/*#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)
int main()
{
    int num;
    int again=1;
    printf("如果值小于 50 程序将终止。\n");
    while(again)
    {
        printf("\n请输入数字：");
        scanf("%d",&num);
        printf("该数字的平方为 %d \n",SQ(num));
        if(num>=50)
            again=TRUE;
        else
            again=FALSE;
    }
    return 0;
}
*/

//4.宏#define命令练习
/*
#include<stdio.h>
#define exchange(a,b) { int t;t=a;a=b;b=t;}//注意放在一行里
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
//5.宏#define命令练习
/*#define LAG >
#define SMA <
#define EQ ==
#include <stdio.h>
int main()
{
    int i,j;
    printf("请输入两个数字：\n");
    scanf("%d %d",&i,&j);
    if(i LAG j)
        printf("%d 大于 %d \n",i,j);
    else if(i EQ j)
        printf("%d 等于 %d \n",i,j);
    else if(i SMA j)
        printf("%d 小于 %d \n",i,j);
    else
        printf("没有值。\n");
    return 0;
}*/