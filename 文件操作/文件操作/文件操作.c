//#include<stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt","wb");
//	fwrite(&a,4,1,pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//
//}
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//
//int main()
//{
//	//打开文件test.txt
//	//相对路径
//	//..表示上一级路径
//	//. 表示当前路径
//	//fopen("../../test.txt","r");
//	//fopen("test.txt","r");
//
//	//绝对路径写法：
//	//fopen("E:\c-code\c-language","r");
//	FILE* pf = fopen("test.txt","w");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//#include <stdio.h>
//#include<errno.h>
//#include <string.h>
//int main()
//{
//	FILE* pfwrite = fopen("TEST.txt","w");
//	if(pfwrite ==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	
//	}
//	//写文件
//	fputc('a',pfwrite);
//	fputc('b',pfwrite);
//	fputc('c',pfwrite);
//
//	//关闭文件
//	fclose(pfwrite);
//	pfwrite = NULL;
//	
//	return 0;
//}
//#include <stdio.h>
//#include<errno.h>
//#include <string.h>
//int main()
//{
//	FILE* pfread = fopen("test.txt","r");
//	if(pfread ==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	
//	}
//	//读文件
//	
//	printf("%c",fgetc(pfread));
//	printf("%c",fgetc(pfread));
//	printf("%c",fgetc(pfread));
//
//	//关闭文件
//	fclose(pfread);
//	pfread = NULL;
//	
//	return 0;
//}