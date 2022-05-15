//计算标准偏差
/*
#include <stdio.h>
#include <math.h>
 
float calculateSD(float data[]);
 
int main()
{
    int i;
    float data[10];
 
    printf("输入10个元素: ");
    for(i=0; i < 10; ++i)
        scanf("%f", &data[i]);
 
    printf("\n标准偏差 = %.6f", calculateSD(data));
 
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

//两个矩阵相加

//使用多维数组将两个矩阵相加

/*
#include <stdio.h>
 
int main(){
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
 
    printf("输入行数 ( 1 ~ 100): ");
    scanf("%d", &r);
    printf("输入列数 ( 1 ~ 100): ");
    scanf("%d", &c);
 
    printf("\n输入第一维数组的元素:\n");
 
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("输入元素 a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
 
    printf("输入第二维数组的元素:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("输入元素 a%d%d: ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }
 
    // 相加
 
    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
 
    // 显示结果
    printf("\n二维数组相加结果: \n\n");
 
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

//矩阵相乘实例

/*
#include <stdio.h>
 
// 求 m*k 型矩阵 A 左乘 k*n 型矩阵 B 后的 m*n 型矩阵 C


int main()
{
    struct Matrixs
    {
        int elements[100][100];
        int row;
        int col;
    }matrixA, matrixB, matrixC;
 
    int m, k, n;
    printf("请输入矩阵A行数和列数：");
    scanf("%d %d", &matrixA.row, &matrixA.col);
    matrixB.row = matrixA.col;//矩阵A的列数等于矩阵B的行数
    printf("请输入矩阵B列数：");
    scanf("%d", &matrixB.col);
    printf("\n输入矩阵A:\n");
    for (m = 0; m < matrixA.row; ++m)
    for (k = 0; k < matrixA.col; ++k)
    {
        printf("请输入元素A(%d,%d):", m+1, k+1);
        scanf("%d", &matrixA.elements[m][k]);
    }
 
    printf("\n输入矩阵B:\n");
    for (k = 0; k < matrixA.col; ++k)
        for (n = 0; n < matrixB.col; ++n)
        {
            printf("请输入元素B(%d,%d):", k+1, n+1);
            scanf("%d", &matrixB.elements[k][n]);
        }
    for (m = 0; m < matrixA.row; ++m)
        for (n = 0; n < matrixB.col; ++n)
            for (k = 0; k < matrixA.col; ++k)
            {
            if (k == 0) matrixC.elements[m][n] = 0;//为新矩阵C每个元素初始化
                matrixC.elements[m][n] += matrixA.elements[m][k] * matrixB.elements[k][n];
            }
            printf("\n\n矩阵A为：\n\n");
    for (m = 0; m < matrixA.row; ++m)
    {
        printf("  |");
        for (k = 0; k < matrixA.col; ++k)
        {
            printf(" %-5d", matrixA.elements[m][k]);
        }
        printf("\b\b\b|\n");
    }
    printf("\n\n矩阵B为：\n\n");
    for (k = 0; k < matrixB.row; ++k)
    {
        printf("  |");
        for (n = 0; n < matrixB.col; ++n)
        {
            printf(" %-6d", matrixB.elements[k][n]);
        }
        printf("\b\b|\n");
    }
 
    printf("\n矩阵A左乘矩阵B为：\n\n");
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

