/*����һ������������� A��B��C��
A �������� 64 ����С���ȵ�Բ��
���մ�����¡�С�����ϵ�˳�����У�Ҫ���� 64 ��Բ�̴� A ���ƶ��� C ���ϣ�ÿ��ֻ���ƶ�һ��Բ�̣��ƶ����̿��Խ��� B �롣
�����κ�ʱ���κ����ϵ�Բ�̶����뱣�ִ������£�С�����ϡ�
�Ӽ����������ƶ���Բ�̸����������ƶ��Ĺ��̡�
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
    printf("���������ӵ�������");
    scanf("%d", &n);
    printf("\n");
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
*/


/*����Ȼ��e,��Ȼ���� e=2.718281828����e �ļ��㹫ʽ��e=1+1/1!+1/2!+1/3!+����
�����һ���ֵС�� 10^-10 ʱ������*/

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
/*һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"��
����6=1��2��3.����ҳ�1000���ڵ�����������
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