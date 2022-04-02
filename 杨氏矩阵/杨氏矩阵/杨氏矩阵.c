
//杨氏矩阵：有一个数字矩阵，矩阵的每行从左到右都是递增的，从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在
//要求：时间复杂度小于O（n）
/*
#include <stdio.h>
int FindNum(int arr[3][3],int k,int row,int col)
{
	int x=0;
	int y=col-1;//右上角的元素的坐标是（x,y），右上角元素是这一行最大的，这一列最小的元素，可去除一行或者一列
	while (x<=row-1&&y>=0)//从右上角向左下角收缩
	{
		if(arr[x][y]>k)
		{
			y--;//右上角的元素比我们要找的元素大，则这一列都不可能是我们要找的数字
		}
		else if(arr[x][y]<k)
		{
			x++;//右上角比我们要找的元素小，则这一行都没有我们要找的数字
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int k = 7;//要找的数字
	int ret = FindNum(arr,k,3,3);
	if(ret==1)
	{
		printf("找到了\n");
	}
	else 
	{
		printf("找不到\n");
	}
	return 0;
}

*/
//2.找出要找数字的位置
#include <stdio.h>
int FindNum(int arr[3][3],int k,int *px,int *py)
{
	int x=0;
	int y=*py-1;//右上角的元素的坐标是（x,y），右上角元素是这一行最大的，这一列最小的元素，可去除一行或者一列
	while (x<=*px-1 && y>=0)//从右上角向左下角收缩
	{
		if(arr[x][y]>k)
		{
			y--;//右上角的元素比我们要找的元素大，则这一列都不可能是我们要找的数字
		}
		else if(arr[x][y]<k)
		{
			x++;//右上角比我们要找的元素小，则这一行都没有我们要找的数字
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int k = 7;
	//要找的数字
	int x = 3;
	int y = 3;
	int ret = FindNum(arr,k,&x,&y);
	if(ret==1)
	{
		printf("找到了\n");
		printf("下标是：%d,%d\n",x,y);
	}
	else 
	{
		printf("找不到\n");
	}
	return 0;
}