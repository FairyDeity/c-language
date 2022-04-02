//1.题目内容：实现一个函数，可以左旋字符串中k个字符
//ABCD左旋一个字符得到BCDA，ABCD左旋两个字符得到CDAB
//法一：暴力求解法
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
		//左旋一个字符
		//1,取出第一个元素
		char tmp = *arr;
		//2，把后面的元素往前挪
		int j=0;
		for(j=0;j<len-1;j++)
		{
			*(arr+j)=*(arr+j+1);
		}
		//3，把第一个元素放在最后一个元素的位置上
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
//法二：三步反转法
//abcdef,若左旋两个字符ab，则相当于先把ab切开：ab cdef
//再把左边（left）和右边（right）各逆序一下：ba fedc
//再整体逆序一下：cdefab
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
	reverse(arr,arr+k-1);//逆序左边：逆序ab
	reverse(arr+k,arr+len-1);//逆序右边:逆序cdef==（c与f换位置，d与e换位置）
	reverse(arr,arr+len-1);//逆序整体

}
int main()
{
	char arr[]="abcdef";
	left_move(arr,2);
	printf("%s\n",arr);
	return 0;

}*/
//2.题目内容：写一个函数，判断一个字符串是否为另一个字符串旋转之后的字符串
//法一：
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
	reverse(arr,arr+k-1);//逆序左边：逆序ab
	reverse(arr+k,arr+len-1);//逆序右边:逆序cdef==（c与f换位置，d与e换位置）
	reverse(arr,arr+len-1);//逆序整体

}
int is_left_move(char*s1,char*s2)
{
	int len = strlen(s1);//有几个字符就有多少种可能性，若有六个字符，则旋转之后就有六种不同的结果
	int i =0;
	for(i=0;i<len;i++)
	{
		left_move(s1,1);//保证每次旋转一个字符，每旋转一个字符比较一次
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

//法二：
/*int is_left_move(char* str1,char* str2)
{     
	int len1 = strlen(str1);
	int len2 = strlen (str2);
	if(len1 !=len2)
		return 0;
		//1.在str1字符串中追加一个字符串str1
	strncat(str1,str1,6);//自己给自己追加要用strncat,不能用strcat
    //2.判断str2指向的字符串是否是str1指向的字符串的字串
	//strstr-找子串的
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
	char arr1[] ="abcdef";//要有足够大的空间
	char arr2[] = "bcdefa";
	int ret = is_left_move(arr1,arr2);
	if(ret ==1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}*/