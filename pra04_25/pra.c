//809*??=800*??+9*?? 
//其中??代表的两位数, 809*??为四位数，8*??的结果为两位数，9*??的结果为3位数。
//求??代表的两位数，及809*??后的结果。
/*#include <stdio.h>
 
void output(long int b, long int i){
    printf("\n%ld = 800 * %ld + 9 * %ld\n", b,i,i);
}
 
 
int main(){
 
    void output(long int b, long int i);
    long int a,b,i;
    a = 809;
    for(i = 10; i < 100; i++){
        b = i * a;
        if (b >= 1000 && b <= 10000 && 8 * i < 100 && 9 * i >= 100){
            output(b, i);
        }
    }
    return 0;
}*/


//求0—7所能组成的奇数个数

/*#include<stdio.h>
int main(int agrc, char*agrv[])
{
    long sum = 4, s = 4;//sum的初始值为4表示，只有一位数字组成的奇数个数为4个
    int j;
    for (j = 2; j <= 8; j++)
    {    
        printf("%d位数为奇数的个数%ld\n", j-1, s);
        if (j <= 2)
            s *= 7;
        else
            s *= 8;
        sum += s;    
    }
    printf("%d位数为奇数的个数%ld\n", j-1, s);
    printf("奇数的总个数为：%ld\n", sum);
    // system("pause");
    return 0;
}
*/




//一个偶数总能表示为两个素数之和。
/*#include<stdio.h>
#include<stdlib.h>
int Isprimer(unsigned int n);
int main()
{
    unsigned int n,i;
    do{
        printf("请输入一个偶数:\n");
        scanf("%d",&n);
    }while(n%2!=0);
    for(i=1;i<n;i++)
        if(Isprimer(i)&&Isprimer(n-i))
            break;
    printf("偶数%d可以分解成%d和%d两个素数的和\n",n,i,n-i);
    
    return 0;
}
int Isprimer(unsigned int n)
{
    int i;
    if(n<4)return 1;
    else if(n%2==0)return 0;
    else
        for(i=3;i<sqrt(n)+1;i++)
            if(n%i==0)return 0;
    
    return 1;
}
*/