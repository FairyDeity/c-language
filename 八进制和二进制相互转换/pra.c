
//�˽��ƺͶ������໥ת��

//������ת��Ϊ�˽���

/*
#include <stdio.h>
#include <math.h>
 
int convertBinarytoOctal(long long binaryNumber);
int main()
{
    long long binaryNumber;
 
    printf("����һ����������: ");
    scanf("%lld", &binaryNumber);
 
    printf("�������� %lld ת��Ϊ�˽���Ϊ %d", binaryNumber, convertBinarytoOctal(binaryNumber));
 
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

//�˽���ת��Ϊ������

/*
#include <stdio.h>
#include <math.h>
 
long long convertOctalToBinary(int octalNumber);
int main()
{
    int octalNumber;
 
    printf("����һ���˽�����: ");
    scanf("%d", &octalNumber);
 
    printf("�˽����� %d ת������Ϊ %lld", octalNumber, convertOctalToBinary(octalNumber));
 
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

//�ֱ��庯��ʵ�ְ˽���ת������

//�ֱ��庯��ʵ�ְ˽���ת������


/* 
#include <stdio.h>
 
int octTodeci(int num);//�����˽���תʮ���ƺ���
long long deciTobina(int num);//����ʮ����ת�����ƺ���
int powNum(int base,int exp);//������base��exp�η�����
 
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
 
int octTodeci(int num)//����˽���תʮ���ƺ���
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
 
long long  deciTobina(int num)//����ʮ����ת�����ƺ���
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
 
int powNum(int base,int exp)//������base��exp�η�����
{
    int result = 1,k;
    for (k = exp; k >= 1;--k)
        result *= base;
    return result;
}

*/


