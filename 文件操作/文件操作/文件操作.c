//#include<stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt","wb");
//	fwrite(&a,4,1,pf);//�����Ƶ���ʽд���ļ���
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
//	//���ļ�test.txt
//	//���·��
//	//..��ʾ��һ��·��
//	//. ��ʾ��ǰ·��
//	//fopen("../../test.txt","r");
//	//fopen("test.txt","r");
//
//	//����·��д����
//	//fopen("E:\c-code\c-language","r");
//	FILE* pf = fopen("test.txt","w");
//	if(pf==NULL)
//	{
//		printf("%s\n",strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//���ļ�
//
//	//�ر��ļ�
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
//	//д�ļ�
//	fputc('a',pfwrite);
//	fputc('b',pfwrite);
//	fputc('c',pfwrite);
//
//	//�ر��ļ�
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
//	//���ļ�
//	
//	printf("%c",fgetc(pfread));
//	printf("%c",fgetc(pfread));
//	printf("%c",fgetc(pfread));
//
//	//�ر��ļ�
//	fclose(pfread);
//	pfread = NULL;
//	
//	return 0;
//}