//���������� �������顢���������飬�ṹ������ʱ
//1.memcpy--�÷�
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
	struct S arr3[] ={{"����",20},{"����",30}};
	struct S arr4[] ={0};
	my_memcpy(arr4,arr3,sizeof(arr3));	
	return 0;
}
*/

//C���Ա�׼��
//memcpy ֻҪ�����ص����ڴ濽���Ϳ���
//memmove �ɴ����ص��ڴ�Ŀ���
void* my_memmove(void* dest,const void*src,size_t count)
{
	void* ret = dest;
	assert(dest !=NULL);
	assert(src!=NULL);
	if(dest<src)
	{
		//ǰ->��
		while(count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		//��->ǰ
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