//�������

/*
#include <stdio.h>
 
typedef struct complex
{
    float real;
    float imag;
} complex;
complex add(complex n1,complex n2);
 
int main()
{
    complex n1, n2, temp;
 
    printf("��һ������ \n");
    printf("����ʵ�����鲿:\n");
    scanf("%f %f", &n1.real, &n1.imag);
 
    printf("\n�ڶ������� \n");
    printf("����ʵ�����鲿:\n");
    scanf("%f %f", &n2.real, &n2.imag);
 
    temp = add(n1, n2);
    printf("Sum = %.1f + %.1fi", temp.real, temp.imag);
 
    return 0;
}
 
complex add(complex n1, complex n2)
{
      complex temp;
 
      temp.real = n1.real + n2.real;
      temp.imag = n1.imag + n2.imag;
 
      return(temp);
}

 */


//��������ʱ��εĲ�ֵ
/*
#include <stdio.h>
 
struct TIME
{
  int seconds;
  int minutes;
  int hours;
};
void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);
 
int main()
{
    struct TIME startTime, stopTime, diff;
 
    printf("���뿪ʼʱ��: \n");
    printf("����Сʱ�����ӡ��룺");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);
 
    printf("����ֹͣʱ��: \n");
    printf("����Сʱ�����ӡ���: ");
    scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);
 
    // �����ֵ
    differenceBetweenTimePeriod(startTime, stopTime, &diff);
 
    printf("\n��ֵ: %d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);
    printf("%d:%d:%d ", stopTime.hours, stopTime.minutes, stopTime.seconds);
    printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);
 
    return 0;
}
 
void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff)
{
    if(stop.seconds > start.seconds){
        --start.minutes;
        start.seconds += 60;
    }
 
    diff->seconds = start.seconds - stop.seconds;
    if(stop.minutes > start.minutes){
        --start.hours;
        start.minutes += 60;
    }
 
    diff->minutes = start.minutes - stop.minutes;
    diff->hours = start.hours - stop.hours;
}

*/

//���ַ���д���ļ�


//#include <stdio.h>
//#include <stdlib.h>  /* exit() ���� */ 
/*
int main()
{
   char sentence[1000];
   FILE *fptr;
 
   fptr = fopen("runoob.txt", "w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
   
   printf("�����ַ���:\n");
   fgets(sentence, (sizeof sentence / sizeof sentence[0]), stdin);
 
   fprintf(fptr,"%s", sentence);
   fclose(fptr);
 
   return 0;
}
*/