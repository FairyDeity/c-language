
//ʮ����ת��Ϊ�˽���
/*
#include <stdio.h>
#include <math.h>
 
int convertDecimalToOctal(int decimalNumber);
int main()
{
    int decimalNumber;
 
    printf("����һ��ʮ������: ");
    scanf("%d", &decimalNumber);
 
    printf("ʮ������ %d ת��Ϊ�˽���Ϊ %d", decimalNumber, convertDecimalToOctal(decimalNumber));
 
    return 0;
}
 
int convertDecimalToOctal(int decimalNumber)
{
    int octalNumber = 0, i = 1;
 
    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
 
    return octalNumber;
}

  */

//�˽���ת��Ϊʮ����

/*
#include <stdio.h>
#include <math.h>
 
long long convertOctalToDecimal(int octalNumber);
int main()
{
    int octalNumber;
 
    printf("����һ���˽�����: ");
    scanf("%d", &octalNumber);
 
    printf("�˽����� %d  ת��Ϊʮ����Ϊ %lld", octalNumber, convertOctalToDecimal(octalNumber));
 
    return 0;
}
 
long long convertOctalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0;
 
    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }
 
    i = 1;
 
    return decimalNumber;
}

  */


//�������ת��

/*
�������ת��
srBaseNum: ԭ�����µ���
srBse: ԭ���ƵĻ�
destBase: Ŀ����ƵĻ�
destBaseNum��ת������� 
*/ 

/* 
int numBaseConversion(int srBaseNum, int srBase, int destBase)
{
    int destBaseNum=0, i=0;
    while (srBaseNum != 0){
        destBaseNum += (srBaseNum % destBase) * pow(srBase,i);
        srBaseNum /= destBase;
        i ++;
    }
    return destBaseNum;
}
*/

