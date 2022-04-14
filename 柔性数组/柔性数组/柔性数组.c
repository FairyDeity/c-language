//柔性数组
//两种表达方式：
//1.
//typedef struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;
//
//
//2.
//typedef struct st_type
//{
//	int i;
//	int a[];//柔性数组成员
//}type_a;


//使用：
//#include <stdio.h>
//#include<string.h>
//struct S
//{
//	int n;
//	int arr[0];
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S)+5*sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for(i = 0;i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4
//
//	}
//	struct S* ptr = realloc(ps,44);
//	if(ptr!=NULL)
//	{
//		ps = ptr;
//	}
	/*for(i = 5; i < 10;i++)
	{
		ps->arr[i] = i;

	}
	for(i = 0; i <10; i++)
	{
		printf("%d",ps->arr[i]);
	}*/
//	//释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}


//换一种方法代替柔型数组，让数组大小可变
//#include <stdio.h>
//#include<string.h>
//struct S
//{
//	int n;
//	int arr[0];
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr =malloc(5*sizeof(int));
//	int i = 0;
//	for(i = 0; i < 5;i++)
//	{
//		ps->arr[i] = i;
//
//	}
//	for(i = 0; i <5; i++)
//	{
//		printf("%d",ps->arr[i]);
//	}
//	//调整大小
//	int *ptr = realloc(ps->arr,10 * sizeof(int));
//	if(ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for(i = 5;i<10; i++)
//	{
//		ps->arr[i]= i;
//	}
//	for(i = 0; i<10;i++)
//	{
//		printf("%d",ps->arr[i]);
//	}
//	//释放
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}