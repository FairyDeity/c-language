//�����׼ƫ��
/*
#include <stdio.h>
#include <math.h>
 
float calculateSD(float data[]);
 
int main()
{
    int i;
    float data[10];
 
    printf("����10��Ԫ��: ");
    for(i=0; i < 10; ++i)
        scanf("%f", &data[i]);
 
    printf("\n��׼ƫ�� = %.6f", calculateSD(data));
 
    return 0;
}
 
float calculateSD(float data[])
{
    float sum = 0.0, mean, standardDeviation = 0.0;
 
    int i;
 
    for(i=0; i<10; ++i)
    {
        sum += data[i];
    }
 
    mean = sum/10;
 
    for(i=0; i<10; ++i)
        standardDeviation += pow(data[i] - mean, 2);
 
    return sqrt(standardDeviation/10);
}
*/

//�����������

//ʹ�ö�ά���齫�����������

/*
#include <stdio.h>
 
int main(){
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
 
    printf("�������� ( 1 ~ 100): ");
    scanf("%d", &r);
    printf("�������� ( 1 ~ 100): ");
    scanf("%d", &c);
 
    printf("\n�����һά�����Ԫ��:\n");
 
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("����Ԫ�� a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
 
    printf("����ڶ�ά�����Ԫ��:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("����Ԫ�� a%d%d: ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }
 
    // ���
 
    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
 
    // ��ʾ���
    printf("\n��ά������ӽ��: \n\n");
 
    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
 
            printf("%d   ",sum[i][j]);
 
            if(j==c-1)
            {
                printf("\n\n");
            }
        }
    
    return 0;
}

  */

//�������ʵ��

/*
#include <stdio.h>
 
// �� m*k �;��� A ��� k*n �;��� B ��� m*n �;��� C


int main()
{
    struct Matrixs
    {
        int elements[100][100];
        int row;
        int col;
    }matrixA, matrixB, matrixC;
 
    int m, k, n;
    printf("���������A������������");
    scanf("%d %d", &matrixA.row, &matrixA.col);
    matrixB.row = matrixA.col;//����A���������ھ���B������
    printf("���������B������");
    scanf("%d", &matrixB.col);
    printf("\n�������A:\n");
    for (m = 0; m < matrixA.row; ++m)
    for (k = 0; k < matrixA.col; ++k)
    {
        printf("������Ԫ��A(%d,%d):", m+1, k+1);
        scanf("%d", &matrixA.elements[m][k]);
    }
 
    printf("\n�������B:\n");
    for (k = 0; k < matrixA.col; ++k)
        for (n = 0; n < matrixB.col; ++n)
        {
            printf("������Ԫ��B(%d,%d):", k+1, n+1);
            scanf("%d", &matrixB.elements[k][n]);
        }
    for (m = 0; m < matrixA.row; ++m)
        for (n = 0; n < matrixB.col; ++n)
            for (k = 0; k < matrixA.col; ++k)
            {
            if (k == 0) matrixC.elements[m][n] = 0;//Ϊ�¾���Cÿ��Ԫ�س�ʼ��
                matrixC.elements[m][n] += matrixA.elements[m][k] * matrixB.elements[k][n];
            }
            printf("\n\n����AΪ��\n\n");
    for (m = 0; m < matrixA.row; ++m)
    {
        printf("  |");
        for (k = 0; k < matrixA.col; ++k)
        {
            printf(" %-5d", matrixA.elements[m][k]);
        }
        printf("\b\b\b|\n");
    }
    printf("\n\n����BΪ��\n\n");
    for (k = 0; k < matrixB.row; ++k)
    {
        printf("  |");
        for (n = 0; n < matrixB.col; ++n)
        {
            printf(" %-6d", matrixB.elements[k][n]);
        }
        printf("\b\b|\n");
    }
 
    printf("\n����A��˾���BΪ��\n\n");
    for (m = 0; m < matrixA.row; ++m)
    {
        printf("  |");
        for (n = 0; n < matrixB.col; ++n)
        {
            printf(" %-6d",matrixC.elements[m][n]);
        }
        printf("\b\b|\n");
    }
    printf("\n");
    return 0;
}
*/

