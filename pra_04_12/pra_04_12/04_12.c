#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// argc: ͳ�����г���ʱ�����в����ĸ���
// *argv[]: ����ÿ���������ַ���ָ�룬ÿһ��Ԫ�ض�Ӧһ������
int main (int argc,char *argv[])
{
    int ch,bian=0,count=0;
    char find[50],temp[1000];
    FILE *pt;    //�ļ�ָ��
    // �ж��Ƿ������ļ�
    if (argc != 2){
        printf("��ʹ�ø�ʽ: %s �ļ���",argv[0]); 
        exit(1);    //�������˳�
    }
    // �ж��ܷ�ɹ����ļ�
    if ((pt = fopen(argv[1],"r"))== NULL){  //��argv[1]��ֵ��ָ��pt
        printf("���ļ� %s ʧ��",argv[1]);
        exit(1);   
    }
    printf("������Ҫ���ҵĵ���:");
    gets(find);
    while((ch=getc(pt))!=EOF){  //EOF ��ʾ�ļ�����
        if ((ch!=' ')&&(ch!='\n')){
            temp[bian]=ch;
            bian++;
        } else {
            temp[bian]='\0';   
            if ((strcmp(find,temp))==0) count++;
            bian=0;
        }
    }
    printf("�����ļ�%s�в��ҵ��ַ���\"%s\" %d ��\n",argv[1],find,count);
    getchar();
    return 0;
}
