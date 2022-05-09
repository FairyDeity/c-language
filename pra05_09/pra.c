//判断Armstrong数：153=1^3+5^3+3^3
/*
#include <stdio.h>
int main()
{
    int number, originalNumber, remainder, result = 0;
 
    printf("输入三位数: ");
    scanf("%d", &number);
 
    originalNumber = number;
 
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }
 
    if(result == number)
        printf("%d 是 Armstrong 数",number);
    else
        printf("%d 不是 Armstrong 数",number);
 
    return 0;
}

*/



//两数之间的Armstrong数


/*
#include <stdio.h>
#include <math.h>
 
int main()
{
    int low, high, i, temp1, temp2, remainder, n = 0, result = 0;
 
    printf("输入两个整数: ");
    scanf("%d %d", &low, &high);
    printf("%d 和 %d 之间的 Armstrong 数为: ", low, high);
 
    for(i = low + 1; i < high; ++i)
    {
        temp2 = i;
        temp1 = i;
 
        // 计算
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }
 
        if (result == i) {
            printf("%d ", i);
        }
 
        n = 0;
        result = 0;
 
    }
    return 0;
}

*/


//函数判断Armstrong数

/*

#include <stdio.h>
#include <math.h>
 
int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);
 
int main()
{
    int n, flag;
 
    printf("输入正整数: ");
    scanf("%d", &n);
 
    // 检测素数
    flag = checkPrimeNumber(n);
    if (flag == 1)
        printf("%d 是素数。\n", n);
    else
        printf("%d 不是素数\n", n);
 
    // 检测 Armstrong 数
    flag = checkArmstrongNumber(n);
    if (flag == 1)
        printf("%d 是 Armstrong 数。", n);
    else
        printf("%d 不是 Armstrong 数。",n);
    return 0;
}
 
int checkPrimeNumber(int n)
{
    int i, flag = 1;
 
    for(i=2; i<=n/2; ++i)
    {
 
    // 非素数条件
        if(n%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
 
int checkArmstrongNumber(int number)
{
    int originalNumber, remainder, result = 0, n = 0, flag;
 
    originalNumber = number;
 
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }
 
    originalNumber = number;
 
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }
 
    // 判断条件
    if(result == number)
        flag = 1;
    else
        flag = 0;
 
    return flag;
}

  */

