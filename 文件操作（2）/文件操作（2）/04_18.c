#include<stdio.h>

//int main()
//{
//
//	FILE*pf = fopen("test.txt","w");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	fputc('a',pf);//写文件
//	fputc('b',pf);
//	fclose(pf);
//	pf==NULL;
//	return 0;
//}
//int main()
//{
//	char buf[1024] = {0};
//	FILE* pf = fopen("text.txt","r");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//	fgets(buf,1024,pf);//buf里面包括换行
//	printf("%s",buf);
//
//	fclose(pf);
//	pf=NULL;
//
//	return 0;
//}
//int main()
//{
//	char buf[1024] = { 0 };
//    FILE* pf = fopen{"test.txt","w"};
//	if(pf == NULL)
//	{
//		return 0;
//	}
//	fputs("hello",pf);
//	fputs("world",pf);
//
//	fclose(pf);
//	pf =NULL;
//	return 0;
//}
//struct S
//{
//
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {100,3.14f,"bit"};
//	FILE* pf = fopen("test.txt","w");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//struct S
//{
//
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {0};
//	FILE* pf = fopen("test.txt","r");
//	if(pf==NULL)
//	{
//		return 0;
//	}
//	格式化的输入数据
//	fscanf(pf,"%d %f %s",&(s.n),&(s.score),s.arr);
//	printf("%d %f %s\n",s.n,s.score,s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//struct S
//{
//
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct S s = {0};
//	
//	fscanf(stdin,"%d %f %s",&(s.n),&(s.score),s.arr);
//	fprintf(stdout,"%d %f %s",s.n,s.score,s.arr);
//	
//	return 0;
//}
struct S
{

	int n;
	float score;
	char arr[10];
};
int main()
{
	struct S s = {100,3.14f,"abcd"};
	struct S tmp = {0};
	char buf[1024] = {0};
	

	sprintf(buf,"%d %f %s\n",s.n,s.score,s.arr);//把格式化的数据转化成字符串存储到buf
	//printf("%s\n",buf);
	sscanf(buf,"%d %f %s",&(tmp.n),&(tmp.score),tmp.arr);//从buf中读取格式化的数据到TMP中
	printf("%d %f %s\n",tmp.n,tmp.score,tmp.arr);
	return 0;
}