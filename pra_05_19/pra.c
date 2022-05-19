//有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
/*
#include<stdio.h>
 
int main()
{
    int i,j,k;
    printf("\n");
    for(i=1;i<5;i++) { // 以下为三重循环
        for(j=1;j<5;j++) {
            for (k=1;k<5;k++) { // 确保i、j、k三位互不相同
                if (i!=k&&i!=j&&j!=k) { 
                    printf("%d,%d,%d\n",i,j,k);
                }
            }
        }
    }
}

*/

/*
利润(I)低于或等于10万元时，奖金可提10%；
利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
20万到40万之间时，高于20万元的部分，可提成5%；
40万到60万之间时高于40万元的部分，可提成3%；
60万到100万之间时，高于60万元的部分，可提成1.5%；
高于100万元时，超过100万元的部分按1%提成。
从键盘输入当月利润I，求应发放奖金总数？
*/

/*
#include<stdio.h>
int main()
{
    double i;
    double bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
    printf("你的净利润是：\n");
    scanf("%lf",&i);
    bonus1=100000*0.1;
    bonus2=bonus1+100000*0.075;
    bonus4=bonus2+200000*0.05;
    bonus6=bonus4+200000*0.03;
    bonus10=bonus6+400000*0.015;
    if(i<=100000) {
        bonus=i*0.1;
    } else if(i<=200000) {
        bonus=bonus1+(i-100000)*0.075;
    } else if(i<=400000) {
        bonus=bonus2+(i-200000)*0.05;
    } else if(i<=600000) {
        bonus=bonus4+(i-400000)*0.03;
    } else if(i<=1000000) {
        bonus=bonus6+(i-600000)*0.015;
    } else if(i>1000000) {
        bonus=bonus10+(i-1000000)*0.01;
    }
    printf("提成为：bonus=%lf",bonus);
 
    printf("\n");
}


  */

//优化

/*
#include <stdio.h>
 
#define WAN 10000
 
int main()
{
    double I = 0; // 利润
    double B = 0; // 奖金
    
    scanf("%lf", &I);
    I /= WAN;
 
    if (I > 100 * WAN)
    {
        B += ((I - 100) * 0.01);
        I = 100;
    }
 
    if (I > 60)
    {
        B += ((I - 60) * 0.015);
        I = 60;
    }
    if (I > 40)
    {
        B += ((I - 40) * 0.03);
        I = 40;
    }
    
    if (I > 20)
    {
        B += ((I - 20) * 0.05);
        I = 20;
    }
 
    if (I > 10)
    {
        B += ((I - 10) * 0.075);
        I = 10;
    }
 
    B += (I * 0.1);
 
    printf("%lf", B);
}

*/

//输出国际象棋棋盘

/* 
#include<stdio.h>
 
int main()
{
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
            if((i+j)%2==0)
                printf("%c%c",219,219);
            else printf("  ");
        printf("\n");
    }
    return 0;
}
*/
