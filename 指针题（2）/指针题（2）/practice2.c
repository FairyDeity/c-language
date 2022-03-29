#include <stdio.h>
//int main()
//{
	//int aa[2][5] = {1,2,3,4,5,6,7,8,9,10};
    
	//int *ptr1 = (int *)(&aa+1);//&aa是取整个数组，+1是指向这个数组之后的地址
	//int *ptr2 = (int*)(*(aa+1));//*（aa+1）是指向第二行第一个元素的地址 *（aa+1）==aa[1]
	//printf("%d,%d\n",*(ptr1-1),*(ptr2-1));// 10, 5
//return 0;
//}
/*int main()
{
	char * a[] = {"work","at","alibaba"};
	char * *pa=a;

	pa++;//跳过的是一个char*的地址，指向下一个地址a
	printf("%s\n",*pa);//at
	return 0;
}*/
int main ()
{
	char  *c[]={"ENTER","NEW","POINT","FIRST"};
	char **cp[] = {c+3,c+2,c+1,c};
	char***cpp=cp;

	printf("%s\n",**++cpp);
	printf("%s\n",*--*++cpp +3);//cpp此时指向的是第一个变化之后的地址，不会回到初始位置
	printf("%s\n",*cpp[-2]+3);//
	printf("%s\n",cpp[-1][-1]+1);
	
	// POINT  ER ST EW
	return 0;
}



