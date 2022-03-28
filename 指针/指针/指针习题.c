#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n",sizeof(arr));//  7  sizeof(arr)计算的是数组的大小，单位是字节：7
	printf("%d\n",sizeof(arr+0));//  4/8 计算的是地址的大小 为首元素的地址
	printf("%d\n",sizeof(*arr));// 1 *arr是首元素，计算的是首元素的大小
	printf("%d\n",sizeof(arr[1]));//  1 arr[1]是第二个元素，计算的是第二个元素的大小
	printf("%d\n",sizeof(&arr));// 4/8 &arr虽然是数组的地址，但也是地址，所以是4/8个字节
	printf("%d\n",sizeof(&arr+1));//  4/8  &arr+1是跳过整个数组后的地址，但也是地址
	printf("%d\n",sizeof(&arr[0]+1));//  4/8&arr[0]+1是第二个元素的地址，但也是地址
	
	
	printf("%d\n",strlen(arr));//6  arr 是首元素地址 
	printf("%d\n",strlen(arr+0));// 6  arr是数组名，为首元素地址
    //printf("%d\n",strlen(*arr));//err  *arr a的ASCII码是97当成地址，地址所指向的空间不属于以上程序，非法访问内存（strlen 接收的是地址然后依次往下找）
	//printf("%d\n",strlen(arr[1]));//err b的ASCII为98同上
	//printf("%d\n",strlen(&arr));//6  &arr表示的是整个数组的地址，但数组的地址应该存放在数组指针中：char(*p)[7]=&arr;有警告
	//printf("%d\n",strlen(&arr+1));//跳过这个数组下一个数组的地址，下一个数组不知道，为随机值//有警告
	printf("%d\n",strlen(&arr[0]+1));//5 从b的地址往后看，\0之前有5个字符
	
	
	
	char *p="abcdef";//p指向的是a的地址

	printf("%d\n",sizeof(p));//  4/8 计算指针变量p的大小
	printf("%d\n",sizeof(p+1));//  4/8 p+1得到的是字符b的地址
	printf("%d\n",sizeof(*p));// 1 *p是字符串的第一个字符a
	printf("%d\n",sizeof(p[0]));// 1 int arr[10]； arr[0]==*(arr+0)  p[0]==*(p+0)=='a'
	printf("%d\n",sizeof(&p));// 4/8 p地址
	printf("%d\n",sizeof(&p+1));//  4/8  跳过p的地址
	printf("%d\n",sizeof(&p[0]+1));// 4/8   a的地址+1是b的地址
	
	
	
	
	printf("%d\n",strlen(p));//6  p存的是首元素a的地址 
	printf("%d\n",strlen(p+1));// 5 从b开始
    //printf("%d\n",strlen(*p));//err  *p a的ASCII码是97当成地址，地址所指向的空间不属于以上程序，非法访问内存（strlen 接收的是地址然后依次往下找）
	//printf("%d\n",strlen(p[0]));//err 
	//printf("%d\n",strlen(&p));//随机值 从a的地址开始，地址后面内容未知，遇到\0的情况未知
	//printf("%d\n",strlen(&p+1));//随机值
	printf("%d\n",strlen(&p[0]+1));//5 从b开始


	return 0;
}
