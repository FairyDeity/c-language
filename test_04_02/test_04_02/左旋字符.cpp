//1.��Ŀ���ݣ�ʵ��һ�����������������ַ�����k���ַ�
//ABCD����һ���ַ��õ�BCDA��ABCD���������ַ��õ�CDAB
//��һ��������ⷨ
#include <string.h>
#include <assert.h>
#include <stdio.h>
/*void left_move(char* arr,int k )
{
	assert(arr!=NULL);
	int i = 0;
	int len =strlen(arr);
	for(i=0;i<k;i++)
	{
		//����һ���ַ�
		//1,ȡ����һ��Ԫ��
		char tmp = *arr;
		//2���Ѻ����Ԫ����ǰŲ
		int j=0;
		for(j=0;j<len-1;j++)
		{
			*(arr+j)=*(arr+j+1);
		}
		//3���ѵ�һ��Ԫ�ط������һ��Ԫ�ص�λ����
		*(arr+len-1) = tmp;
	}

	
}
int main()
{
	char arr[] = "abcdef";
	left_move(arr,2);
	printf("%s\n",arr);//cdefab
	return 0;
}*/
//������������ת��
//abcdef,�����������ַ�ab�����൱���Ȱ�ab�п���ab cdef
//�ٰ���ߣ�left�����ұߣ�right��������һ�£�ba fedc
//����������һ�£�cdefab
/*void reverse(char* left,char* right)
{
	assert(left!=NULL);
	assert(right !=NULL);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr,int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k<=len);
	reverse(arr,arr+k-1);//������ߣ�����ab
	reverse(arr+k,arr+len-1);//�����ұ�:����cdef==��c��f��λ�ã�d��e��λ�ã�
	reverse(arr,arr+len-1);//��������

}
int main()
{
	char arr[]="abcdef";
	left_move(arr,2);
	printf("%s\n",arr);
	return 0;

}*/
//2.��Ŀ���ݣ�дһ���������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ���
//��һ��
/*void reverse(char* left,char* right)
{
	assert(left!=NULL);
	assert(right !=NULL);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr,int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k<=len);
	reverse(arr,arr+k-1);//������ߣ�����ab
	reverse(arr+k,arr+len-1);//�����ұ�:����cdef==��c��f��λ�ã�d��e��λ�ã�
	reverse(arr,arr+len-1);//��������

}
int is_left_move(char*s1,char*s2)
{
	int len = strlen(s1);//�м����ַ����ж����ֿ����ԣ����������ַ�������ת֮��������ֲ�ͬ�Ľ��
	int i =0;
	for(i=0;i<len;i++)
	{
		left_move(s1,1);//��֤ÿ����תһ���ַ���ÿ��תһ���ַ��Ƚ�һ��
		int ret = strcmp(s1,s2);
		if(ret==0)
			return 1;
	}
	return 0;
}
int main()
{
	char arr1[] ="abcdef";
	char arr2[] = "bcdefa";
	int ret = is_left_move(arr1,arr2);
	if(ret ==1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
*/

//������
/*int is_left_move(char* str1,char* str2)
{     
	int len1 = strlen(str1);
	int len2 = strlen (str2);
	if(len1 !=len2)
		return 0;
		//1.��str1�ַ�����׷��һ���ַ���str1
	strncat(str1,str1,6);//�Լ����Լ�׷��Ҫ��strncat,������strcat
    //2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������ִ�
	//strstr-���Ӵ���
   char * ret= strstr(str1,str2);
	if(ret=NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr1[] ="abcdef";//Ҫ���㹻��Ŀռ�
	char arr2[] = "bcdefa";
	int ret = is_left_move(arr1,arr2);
	if(ret ==1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}*/