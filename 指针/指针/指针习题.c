#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n",sizeof(arr));//  7  sizeof(arr)�����������Ĵ�С����λ���ֽڣ�7
	printf("%d\n",sizeof(arr+0));//  4/8 ������ǵ�ַ�Ĵ�С Ϊ��Ԫ�صĵ�ַ
	printf("%d\n",sizeof(*arr));// 1 *arr����Ԫ�أ����������Ԫ�صĴ�С
	printf("%d\n",sizeof(arr[1]));//  1 arr[1]�ǵڶ���Ԫ�أ�������ǵڶ���Ԫ�صĴ�С
	printf("%d\n",sizeof(&arr));// 4/8 &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ��������4/8���ֽ�
	printf("%d\n",sizeof(&arr+1));//  4/8  &arr+1���������������ĵ�ַ����Ҳ�ǵ�ַ
	printf("%d\n",sizeof(&arr[0]+1));//  4/8&arr[0]+1�ǵڶ���Ԫ�صĵ�ַ����Ҳ�ǵ�ַ
	
	
	printf("%d\n",strlen(arr));//6  arr ����Ԫ�ص�ַ 
	printf("%d\n",strlen(arr+0));// 6  arr����������Ϊ��Ԫ�ص�ַ
    //printf("%d\n",strlen(*arr));//err  *arr a��ASCII����97���ɵ�ַ����ַ��ָ��Ŀռ䲻�������ϳ��򣬷Ƿ������ڴ棨strlen ���յ��ǵ�ַȻ�����������ң�
	//printf("%d\n",strlen(arr[1]));//err b��ASCIIΪ98ͬ��
	//printf("%d\n",strlen(&arr));//6  &arr��ʾ������������ĵ�ַ��������ĵ�ַӦ�ô��������ָ���У�char(*p)[7]=&arr;�о���
	//printf("%d\n",strlen(&arr+1));//�������������һ������ĵ�ַ����һ�����鲻֪����Ϊ���ֵ//�о���
	printf("%d\n",strlen(&arr[0]+1));//5 ��b�ĵ�ַ���󿴣�\0֮ǰ��5���ַ�
	
	
	
	char *p="abcdef";//pָ�����a�ĵ�ַ

	printf("%d\n",sizeof(p));//  4/8 ����ָ�����p�Ĵ�С
	printf("%d\n",sizeof(p+1));//  4/8 p+1�õ������ַ�b�ĵ�ַ
	printf("%d\n",sizeof(*p));// 1 *p���ַ����ĵ�һ���ַ�a
	printf("%d\n",sizeof(p[0]));// 1 int arr[10]�� arr[0]==*(arr+0)  p[0]==*(p+0)=='a'
	printf("%d\n",sizeof(&p));// 4/8 p��ַ
	printf("%d\n",sizeof(&p+1));//  4/8  ����p�ĵ�ַ
	printf("%d\n",sizeof(&p[0]+1));// 4/8   a�ĵ�ַ+1��b�ĵ�ַ
	
	
	
	
	printf("%d\n",strlen(p));//6  p�������Ԫ��a�ĵ�ַ 
	printf("%d\n",strlen(p+1));// 5 ��b��ʼ
    //printf("%d\n",strlen(*p));//err  *p a��ASCII����97���ɵ�ַ����ַ��ָ��Ŀռ䲻�������ϳ��򣬷Ƿ������ڴ棨strlen ���յ��ǵ�ַȻ�����������ң�
	//printf("%d\n",strlen(p[0]));//err 
	//printf("%d\n",strlen(&p));//���ֵ ��a�ĵ�ַ��ʼ����ַ��������δ֪������\0�����δ֪
	//printf("%d\n",strlen(&p+1));//���ֵ
	printf("%d\n",strlen(&p[0]+1));//5 ��b��ʼ


	return 0;
}
