//��������������ͼ��

//1.����������ͼ��
/*
#include <stdio.h>
 
int main()
{
    int i, j, rows;
 
    printf("����: ");
    scanf("%d",&rows);
 
    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/

//ʹ������
/*
#include <stdio.h>
 
int main()
{
    int i, j, rows;
 
    printf("����: ");
    scanf("%d",&rows);
 
    for(i=1; i<=rows; ++i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}

*/


//��������
/*
#include <stdio.h>
int main()
{
    int i, j, rows;
 
    printf("����: ");
    scanf("%d",&rows);
 
    for(i=rows; i>=1; --i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}


*/

//������������

/*
#include <stdio.h>
int main()
{
    int i, j, rows;
 
    printf("����: ");
    scanf("%d",&rows);
 
    for(i=rows; i>=1; --i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
 
    return 0;
}
*/

//������

/*
#include <stdio.h>
int main()
{
    int i, space, rows, k=0;
 
    printf("Enter number of rows: ");
    scanf("%d",&rows);
 
    for(i=1; i<=rows; ++i, k=0)
    {
        for(space=1; space<=rows-i; ++space)
        {
            printf("  ");
        }
 
        while(k != 2*i-1)
        {
            printf("* ");
            ++k;
        }
 
        printf("\n");
    }
    
    return 0;
}

*/


//���ֽ�����
/*
#include <stdio.h>
int main()
{
    int i, space, rows, k=0, count = 0, count1 = 0;
 
    printf("����: ");
    scanf("%d",&rows);
 
    for(i=1; i<=rows; ++i)
    {
        for(space=1; space <= rows-i; ++space)
        {
            printf("  ");
            ++count;
        }
 
        while(k != 2*i-1)
        {
            if (count <= rows-1)
            {
                printf("%d ", i+k);
                ++count;
            }
            else
            {
                ++count1;
                printf("%d ", (i+k-2*count1));
            }
            ++k;
        }
        count1 = count = k = 0;
 
        printf("\n");
    }
    return 0;
}
*/


//��������

/*
#include<stdio.h>
int main()
{
    int rows, i, j, space;
 
    printf("����: ");
    scanf("%d",&rows);
 
    for(i=rows; i>=1; --i)
    {
        for(space=0; space < rows-i; ++space)
            printf("  ");
 
        for(j=i; j <= 2*i-1; ++j)
            printf("* ");
 
        for(j=0; j < i-1; ++j)
            printf("* ");
 
        printf("\n");
    }
 
    return 0;
}
*/

//�������
/*
#include <stdio.h>
int main()
{
    int rows, coef = 1, space, i, j;
 
    printf("����: ");
    scanf("%d",&rows);
 
    for(i=0; i<rows; i++)
    {
        for(space=1; space <= rows-i; space++)
            printf("  ");
 
        for(j=0; j <= i; j++)
        {
            if (j==0 || i==0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;
 
            printf("%4d", coef);
        }
        printf("\n");
    }
 
    return 0;
}
*/

//��������������

/*
#include <stdio.h> 
#define N 10 
int main() 
{  
    int i,j,l; 
    for(i=1,j=1;i<=N;i++) 
    { 
        for(l=1;l<=i;l++,j++) 
            printf("%5d",j); 
        printf("\n"); 
    } 
    return 0; 
}
*/