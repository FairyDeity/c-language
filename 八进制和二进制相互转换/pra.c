
//八进制和二进制相互转换

//二进制转换为八进制

/*
#include <stdio.h>
#include <math.h>
 
int convertBinarytoOctal(long long binaryNumber);
int main()
{
    long long binaryNumber;
 
    printf("输入一个二进制数: ");
    scanf("%lld", &binaryNumber);
 
    printf("二进制数 %lld 转换为八进制为 %d", binaryNumber, convertBinarytoOctal(binaryNumber));
 
    return 0;
}
 
int convertBinarytoOctal(long long binaryNumber)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;
 
    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }
 
    i = 1;
 
    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
 
    return octalNumber;
}

  */

//八进制转换为二进制

/*
#include <stdio.h>
#include <math.h>
 
long long convertOctalToBinary(int octalNumber);
int main()
{
    int octalNumber;
 
    printf("输入一个八进制数: ");
    scanf("%d", &octalNumber);
 
    printf("八进制数 %d 转二进制为 %lld", octalNumber, convertOctalToBinary(octalNumber));
 
    return 0;
}
 
long long convertOctalToBinary(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    long long binaryNumber = 0;
 
    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }
 
    i = 1;
 
    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }
 
    return binaryNumber;
}

  */

//分别定义函数实现八进制转二进制

//分别定义函数实现八进制转二进制


/* 
#include <stdio.h>
 
int octTodeci(int num);//声明八进制转十进制函数
long long deciTobina(int num);//声明十进制转二进制函数
int powNum(int base,int exp);//声明求base的exp次方函数
 
void main()
{
    int octNum, deciNum;
    long long binaNum;
    printf("Please enter an octal number:");
    scanf("%d", &octNum);
    deciNum = octTodeci(octNum); 
    binaNum = deciTobina(deciNum);
    printf("The conversion from octal number %d to binary number is %lld.\n%", octNum, binaNum);
}
 
int octTodeci(int num)//定义八进制转十进制函数
{
    int n = 0,remainder,result = 0;
    while (num != 0)
    {
        remainder = num %10;
        result += remainder*powNum(8, n);
        num /= 10;
        ++n;
    }
    return result;
}
 
long long  deciTobina(int num)//定义十进制转二进制函数
{
    int remainder,n=0;
    long long result = 0;
    while (num != 0)
    {
        remainder = num % 2;
        result += remainder*powNum(10, n);
        num /= 2;
        ++n;
    }
    return result;
}
 
int powNum(int base,int exp)//定义求base的exp次方函数
{
    int result = 1,k;
    for (k = exp; k >= 1;--k)
        result *= base;
    return result;
}

*/


