//1.ѧϰstatic���徲̬�������÷�


/*
#include<stdio.h>

void fun()
{
    int i=0;
    static int static_i=0;
    printf("i=%d\n",i);
    printf("static_i=%d\n",static_i);
    i++;
    static_i++;
}
int main()
{
    void fun();
	int i;
    for(i=0;i<3;i++)
        fun();
    return 0;
}
*/


//2.ѧϰʹ��auto����������÷�


/*
#include <stdio.h>
int main()
{
    int i,num;
    num=2;
    for(i=0;i<3;i++)
    {
        printf("num ����Ϊ %d \n",num);
        num++;
        {
            auto int num=1;
            printf("����ģ�� num ����Ϊ %d \n",num);
            num++;
        }
    }
    return 0;
}
*/


//3.ѧϰʹ��static����һ�ַ���

/*
#include <stdio.h>
int main()
{
    int i,num;
    num=2;
    for(i=0;i<3;i++)
    {
        printf("num ����Ϊ %d \n",num);
        num++;
        {
            static int num=1;
            printf("����ģ�� num ����Ϊ %d\n",num);
            num++;
        }
    }
    return 0;
}
*/

//4.ѧϰʹ����ε����ⲿ����
#include <stdio.h>
int a,b,c;
void add()
{
    int a;
    a=3;
    c=a+b;
}
int main()
{
    a=b=4;
    add();
    printf("c ��ֵΪ %d\n",c);
    return 0;
}