#include <stdio.h>
//�ṹ�������
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
//struct Stu s3;//ȫ�ֱ���
//
//int main()
//{  
//	//�����Ľṹ�����
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//�����ṹ�����ͣ�ֻ����һ�Σ�
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

//ע�⣺
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
//��Ȼ�����ṹ���Ա��ͬ�����Ǳ������ᵱ��������ͬ�����ͣ����Բ�������ʹ��


//�ṹ���������
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//int main()
//{
//	return 0;
//}


//�ṹ�����������¶���-typedef
//typedef struct Node//�ṹ�����͵�������ò�Ҫ����
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

//�ṹ���ʼ��
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


//�ṹ���Ա����(1)
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

//�ṹ���Ա����(2)
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


