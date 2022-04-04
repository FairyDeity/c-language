//操作对象是 整型数组、浮点型数组，结构体数组时
//1.memcpy--用法
#include <stdio.h>
#include<string.h>
#include<assert.h>
/*struct S
{
	char name[20];
	int age;
};
void* my_memcpy(void* dest,const void* src,size_t num)
{
	void* ret= dest;
	assert(dest!=NULL);
	assert(src!=NULL);
	while(num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;//err?
		
		++(char*)src;//err?
	}
	return ret;

}
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[5]={0};
	struct S arr3[] ={{"张三",20},{"李四",30}};
	struct S arr4[] ={0};
	my_memcpy(arr4,arr3,sizeof(arr3));	
	return 0;
}
*/

//C语言标准：
//memcpy 只要处理不重叠的内存拷贝就可以
//memmove 可处理重叠内存的拷贝
void* my_memmove(void* dest,const void*src,size_t count)
{
	void* ret = dest;
	assert(dest !=NULL);
	assert(src!=NULL);
	if(dest<src)
	{
		//前->后
		while(count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		//后->前
		while(count--)
		{
			*((char*)dest + count) = *((char*)src + count);

		}
	}
	return ret;
}
int main()
{
	int arr3[] = {1,2,3,4,5,6,7,8,9,10};
	my_memmove(arr3+2,arr3,20);
	return 0;
}