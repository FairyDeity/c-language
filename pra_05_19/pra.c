//��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
/*
#include<stdio.h>
 
int main()
{
    int i,j,k;
    printf("\n");
    for(i=1;i<5;i++) { // ����Ϊ����ѭ��
        for(j=1;j<5;j++) {
            for (k=1;k<5;k++) { // ȷ��i��j��k��λ������ͬ
                if (i!=k&&i!=j&&j!=k) { 
                    printf("%d,%d,%d\n",i,j,k);
                }
            }
        }
    }
}

*/

/*
����(I)���ڻ����10��Ԫʱ���������10%��
�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��
60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɡ�
�Ӽ������뵱������I����Ӧ���Ž���������
*/

/*
#include<stdio.h>
int main()
{
    double i;
    double bonus1,bonus2,bonus4,bonus6,bonus10,bonus;
    printf("��ľ������ǣ�\n");
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
    printf("���Ϊ��bonus=%lf",bonus);
 
    printf("\n");
}


  */

//�Ż�

/*
#include <stdio.h>
 
#define WAN 10000
 
int main()
{
    double I = 0; // ����
    double B = 0; // ����
    
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

//���������������

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
