//дһ����������һ���ַ���ѭ������nλ��


//����һ��
/*#include <stdio.h>

#include <string.h>

#define MAX_LEN 100

void LoopMove(char *pStr, int steps){

int n = strlen(pStr) - steps;

char tmp[MAX_LEN];

strcpy(tmp, pStr+n); //�����ַ���

strcpy(tmp+steps, pStr);

*(tmp + strlen(pStr)) = '\0';

strcpy(pStr, tmp); //�ϲ��õ����

}

int main(){

char str[] = "www.coderbbs.com";

LoopMove(str, 3);

printf("%s\n", str);

return 0;

}
*/
//������

#include <stdio.h>

#include <string.h>

#define MAX_LEN 100

void LoopMove(char *pStr, int steps){

int n = strlen(pStr) - steps;

char tmp[MAX_LEN];

memcpy(tmp, pStr+n, steps); //�����ַ���

memcpy(pStr+steps, pStr, n);

memcpy(pStr, tmp, steps); //�ϲ��õ����

}

int main(){

char str[] = "www.coderbbs.com";

LoopMove(str, 3);

printf("%s\n", str);

return 0;

}

