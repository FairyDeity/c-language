//�ַ�����ת

//1.
#include<stdio.h>
void reverse()
{
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		reverse();
			printf("%c",c);
	}
}
int main()
{
	printf("����һ���ַ�����");
	reverse();
	return 0;

}

//2.
#include<stdio.h>
#include<string.h>
char* reverse(char* str)
{
	int i=0;
	int j = strlen(str)-1;
	char temp;
	while (i<j)
	{
		temp = *(str+i);
		*(str+i)= *(str+j);
		*(str+j)= temp;
		i++;
		j--;
	}
	return str;
}
int main()
{
	char str[30];
	printf("����һ���ַ���");
	scanf("%s",str);
	printf("��ת֮ǰ���ַ�����%s\n",str);
	printf("��ת֮����ַ�����%s\n",reverse(str));
	return 0;

}

//3.
#include<stdio.h>
#include<string.h>

void reverse(char* str)
{
	if(*str=='\0')
		return;
	reverse(str+1);
	printf("%c",*str);

}
int main()
{
	char str[30];
	printf("����һ���ַ���:");
	scanf("%s",str);
	printf("��ת֮ǰ���ַ���:");
	reverse(str);
	return 0;
}

//4.
#include<stdio.h>
#include<string.h>
int main()
{
	char c[40];
	int i=1;
	int j;
	printf("�������ַ�����");
	scanf("%s",c);

	j=strlen(c);
	do{
	printf("%c",c[j-i]);
	++i;
	}while(i<=j);
	return 0;
}