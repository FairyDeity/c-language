/*假设一块板上有三根针 A、B、C。
A 针上套有 64 个大小不等的圆盘
按照大的在下、小的在上的顺序排列，要把这 64 个圆盘从 A 针移动到 C 针上，每次只能移动一个圆盘，移动过程可以借助 B 针。
但在任何时候，任何针上的圆盘都必须保持大盘在下，小盘在上。
从键盘输入需移动的圆盘个数，给出移动的过程。
*/

/*
#include <stdio.h>

int move(char from, int n, char to) {
    static int k = 1;
    printf("%2d:%3d # %c---%c\n", k, n, from, to);
    if (k++ % 3 == 0)
        printf("\n");
    return 0;
}

int hanoi(int n, char x, char y, char z) {
    if (n == 1)
        move(x, 1, z);
    else {
        hanoi(n - 1, x, z, y);
        move(x, n, z);
        hanoi(n - 1, y, x, z);
    }
    return 0;
}

int main() {
    int n;
    printf("请输入盘子的数量：");
    scanf("%d", &n);
    printf("\n");
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
*/


/*求自然数e,自然底数 e=2.718281828…，e 的计算公式：e=1+1/1!+1/2!+1/3!+…。
当最后一项的值小于 10^-10 时结束。*/

/*
#include <stdio.h>

int main() {
    double e = 1.0, n = 1.0;
    int i = 1;
    while (1 / n > 1e-10) {
        e += 1 / n;
        i++;
        n = i * n;
    }
    printf("e=%f", e);
    return 0;
}
*/
/*一个数如果恰好等于它的因子之和，这个数就称为"完数"。
例如6=1＋2＋3.编程找出1000以内的所有完数。
*/

#include<stdio.h>
#define N 1000
int main()
{
    int i,j,k,n,sum;
    int a[256];
    for(i=2;i<=N;i++)
    {
        sum=a[0]=1;
        k=0;
        for(j=2;j<=(i/2);j++)
        {
            if(i%j==0)
            {
                sum+=j;
                a[++k]=j;
            }
            
        }
        if(i==sum)
        {
            printf("%d=%d",i,a[0]);
            for(n=1;n<=k;n++)
                printf("+%d",a[n]);
            printf("\n");
        }
        
    }
    return 0;
}