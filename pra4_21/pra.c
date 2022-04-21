//1.学习static定义静态变量的用法


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


//2.学习使用auto定义变量的用法


/*
#include <stdio.h>
int main()
{
    int i,num;
    num=2;
    for(i=0;i<3;i++)
    {
        printf("num 变量为 %d \n",num);
        num++;
        {
            auto int num=1;
            printf("内置模块 num 变量为 %d \n",num);
            num++;
        }
    }
    return 0;
}
*/


//3.学习使用static的另一种方法

/*
#include <stdio.h>
int main()
{
    int i,num;
    num=2;
    for(i=0;i<3;i++)
    {
        printf("num 变量为 %d \n",num);
        num++;
        {
            static int num=1;
            printf("内置模块 num 变量为 %d\n",num);
            num++;
        }
    }
    return 0;
}
*/

//4.学习使用如何调用外部函数
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
    printf("c 的值为 %d\n",c);
    return 0;
}