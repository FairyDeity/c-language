//�ж�Armstrong����153=1^3+5^3+3^3
/*
#include <stdio.h>
int main()
{
    int number, originalNumber, remainder, result = 0;
 
    printf("������λ��: ");
    scanf("%d", &number);
 
    originalNumber = number;
 
    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += remainder*remainder*remainder;
        originalNumber /= 10;
    }
 
    if(result == number)
        printf("%d �� Armstrong ��",number);
    else
        printf("%d ���� Armstrong ��",number);
 
    return 0;
}

*/



//����֮���Armstrong��


/*
#include <stdio.h>
#include <math.h>
 
int main()
{
    int low, high, i, temp1, temp2, remainder, n = 0, result = 0;
 
    printf("������������: ");
    scanf("%d %d", &low, &high);
    printf("%d �� %d ֮��� Armstrong ��Ϊ: ", low, high);
 
    for(i = low + 1; i < high; ++i)
    {
        temp2 = i;
        temp1 = i;
 
        // ����
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


//�����ж�Armstrong��

/*

#include <stdio.h>
#include <math.h>
 
int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);
 
int main()
{
    int n, flag;
 
    printf("����������: ");
    scanf("%d", &n);
 
    // �������
    flag = checkPrimeNumber(n);
    if (flag == 1)
        printf("%d ��������\n", n);
    else
        printf("%d ��������\n", n);
 
    // ��� Armstrong ��
    flag = checkArmstrongNumber(n);
    if (flag == 1)
        printf("%d �� Armstrong ����", n);
    else
        printf("%d ���� Armstrong ����",n);
    return 0;
}
 
int checkPrimeNumber(int n)
{
    int i, flag = 1;
 
    for(i=2; i<=n/2; ++i)
    {
 
    // ����������
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
 
    // �ж�����
    if(result == number)
        flag = 1;
    else
        flag = 0;
 
    return flag;
}

  */

