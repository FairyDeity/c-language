#include <stdio.h>
//结构体的声明
//struct tag
//{
//	member-list;
//}variable-list;
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;
//
//struct Stu s3;//全局变量
//
//int main()
//{  
//	//创建的结构体变量
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//匿名结构体类型（只能用一次）
//struct
//{
//	int a;
//	char c;
//
//}sa;
//int main()
//{
//	return 0;
//}

//注意：
//struct
//{
//	int a;
//	char c;
//
//}sa;
//int main()
//{
//	return 0;
//}
//struct
//{
//	int a;
//	char c;
//
//}*psa;
//int main()
//{
//	psa = &sa;//err
//	return 0;
//}
//虽然两个结构体成员相同，但是编译器会当成两个不同的类型，所以不能这样使用


//结构体的自引用
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//int main()
//{
//	return 0;
//}


//结构体类型名重新定义-typedef
//typedef struct Node//结构体类型的名字最好不要匿名
//{
//	int data;
//	struct Node * next;
//}Node;
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}

//结构体初始化
//struct S
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//
//};
//int main()
//{
//	struct S s= {'c',100,3.14,"hello"};
//	return 0;
//}


//结构体成员访问(1)
//struct S
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//
//};
//int main()
//{
//	struct S s= {'c',100,3.14,"hello"};
//	printf("%c %d %lf %s\n",s.c,s.a,s.d,s.arr);
//	return 0;
//}

//结构体成员访问(2)
struct T
{
	double weight;
	short age;
};
struct S
{
	char c;
	struct T st;
	int a;
	double d;
	char arr[20];

};
int main()
{
	struct S s= {'c',{55.6,30},100,3.14,"hello"};
	printf("%c %d %lf %s\n",s.c,s.a,s.d,s.arr);
	printf("%lf\n",s.st.weight);
	return 0;
}


