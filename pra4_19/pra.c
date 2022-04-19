//写一个函数，把一个字符串循环右移n位。


//方法一：
/*#include <stdio.h>

#include <string.h>

#define MAX_LEN 100

void LoopMove(char *pStr, int steps){

int n = strlen(pStr) - steps;

char tmp[MAX_LEN];

strcpy(tmp, pStr+n); //拷贝字符串

strcpy(tmp+steps, pStr);

*(tmp + strlen(pStr)) = '\0';

strcpy(pStr, tmp); //合并得到结果

}

int main(){

char str[] = "www.coderbbs.com";

LoopMove(str, 3);

printf("%s\n", str);

return 0;

}
*/
//方法二

#include <stdio.h>

#include <string.h>

#define MAX_LEN 100

void LoopMove(char *pStr, int steps){

int n = strlen(pStr) - steps;

char tmp[MAX_LEN];

memcpy(tmp, pStr+n, steps); //拷贝字符串

memcpy(pStr+steps, pStr, n);

memcpy(pStr, tmp, steps); //合并得到结果

}

int main(){

char str[] = "www.coderbbs.com";

LoopMove(str, 3);

printf("%s\n", str);

return 0;

}

