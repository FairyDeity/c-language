//���ַ������� - strlen


//1.ģ��ʵ�� - strlen
/*#include <stdio.h>
#include <assert.h>
int my_strlen(const char* str)

{
	int count = 0;
	assert(str);
	while(*str)
	{
		count++;
		str++;

	}
	return count;

}
int main()
{ 
	char arr[]="afgsdgh";
	int len=my_strlen(arr);
	//����ʾ����
	//char arr[] ={'a','b','c','d'};
	//int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
}*/



//2.ģ��ʵ��-strcpy
/*#include<stdio.h>
#include<assert.h>
char* my_strcpy(char*dest,const char*src)
{
	assert(dest);
	assert(src);
	char * ret =dest;
	//����srcָ����ַ�����destָ��Ŀռ䣬������\0��
	while(*dest++=*src++)
	{
		;
	}
	//����Ŀ�Ŀռ����ʼ��ַ
	return ret;

}
int main()
{
	char arr1[]="abcdef";
	//����ʾ���� 
	//char *arr1="abcdef";--�����ַ������ܱ�����
	char arr2[]="hel";
	//����ʾ����
	//char arr2[]={'h','e','l'};--�ޡ�\0��
	 my_strcpy(arr1,arr2);
	 printf("%s\n",arr1);

	return 0;

}*/



//3.ģ��ʵ��--strcat
/*#include <stdio.h>
#include<assert.h>
char* my_strcat(char* dest,const char *src)
{
	char * ret =dest;
	assert(dest);
	assert(src);
	while(*dest)
	{
		dest++;
	}
	while(*dest++=*src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20]="abcdef";
	char arr2[]="ghi";
	my_strcat(arr1,arr2);
	printf("%s\n",arr1);
	return 0;

}*/



//4.ģ��ʵ��--strcmp
/*#include<stdio.h>
#include<assert.h>
int  my_strcmp(const char* p1,const char* p2)
{
	assert(p1);
	assert(p2);
	while(*p1==*p2)
	{
		if(*p1=='\0')
		{
			return 0;
		}
		p1++;
		p2++;
	}
	return(*p1-*p2);
}
int main()
{
	char* p1="abcd";
	char* p2="abec";
	int ret = my_strcmp(p1,p2);
	
	printf("%d",ret);
	return 0;
}*/


//5.ģ��ʵ�� --strstr
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* p1,const char* p2)
{
	assert(p1);
	assert(p2);
	char *s1 = NULL;
	char *s2 = NULL;
	char *cur =(char*)p1;
	if(*p2=='\0')
	{
		return (char*)p1;
	}
	while(*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while(*s1&&*s2&&(*s1==*s2))
		{
			s1++;
			s2++;
		}
		if(*s2=='\0')
		{
			return cur;//�ҵ��Ӵ�
		}
		cur++;
	}
	return NULL;//�Ҳ����Ӵ�
}

int main()
{
	char *p1 ="abbbcdef";
	char *p2="bbc";

	char *ret = my_strstr(p1,p2);
	if(ret==NULL)
	{
		printf("�Ӵ�������\n");

	}
	else 
	{
		printf("%s\n",ret);
	}

	return 0;

}