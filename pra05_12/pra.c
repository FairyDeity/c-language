//����һ����Ϊ��������֮��
/*
#include <stdio.h>
 
int checkPrime(int n);
int main()
{
    int n, i, flag = 0;
 
    printf("����������: ");
    scanf("%d", &n);
 
    for(i = 2; i <= n/2; ++i)
    {
        // ����ж�
        if (checkPrime(i) == 1)
        {
            if (checkPrime(n-i) == 1)
            {
                printf("%d = %d + %d\n", n, i, n - i);
                flag = 1;
            }
 
        }
    }
 
    if (flag == 0)
        printf("%d ���ֽܷ�Ϊ����������", n);
 
    return 0;
}
 
// �ж�����
int checkPrime(int n)
{
    int i, isPrime = 1;
 
    for(i = 2; i <= n/2; ++i)
    {
        if(n % i == 0)
        {
            isPrime = 0;
            break;
        }  
    }
 
    return isPrime;
}

*/



//�����ƺ�ʮ�����໥ת��


//������ת��Ϊʮ����

/*
#include <stdio.h>
#include <math.h>
 
int convertBinaryToDecimal(long long n);
 
int main()
{
    long long n;
    printf("����һ����������: ");
    scanf("%lld", &n);
    printf("�������� %lld ת��Ϊʮ����Ϊ %d", n, convertBinaryToDecimal(n));
    return 0;
}
 
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
*/


//ʮ����ת��Ϊ������
/*
#include <stdio.h>
#include <math.h>
 
long long convertDecimalToBinary(int n);
 
int main()
{
    int n;
    printf("����һ��ʮ������: ");
    scanf("%d", &n);
    printf("ʮ������ %d ת��Ϊ������λ %lld", n, convertDecimalToBinary(n));
    return 0;
}
 
long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;
 
    while (n!=0)
    {
        remainder = n%2;
        printf("Step %d: %d/2, ���� = %d, �� = %d\n", step++, n, remainder, n/2);
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
*/