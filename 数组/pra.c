//����Ĳ����ϲ�

//��һ�������ֳ�һ��Ϊ�������飬һ��Ϊ
/*
#include <stdio.h>
 
int main() {
   int array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
   int even[10], odd[10];
   int loop, e, d;
   
   e = d = 0;
   
   for(loop = 0; loop < 10; loop++) {
      if(array[loop]%2 == 0) {
         even[e] = array[loop];
         e++;
      }else {
         odd[d] = array[loop];
         d++;
      }
   }
      
   printf(" ԭʼ���� -> ");
   
   for(loop = 0; loop < 10; loop++)
      printf(" %d", array[loop]);
       
   printf("\n ż�� -> ");
   for(loop = 0; loop < e; loop++)
      printf(" %d", even[loop]);   
 
   printf("\n ���� -> ");
   for(loop = 0; loop < d; loop++)
      printf(" %d", odd[loop]);   
   
   return 0;
}
*/

//������������ż������ϲ�Ϊһ������
/*
#include <stdio.h>
 
int main() {
   int array[10];
   int even[5] = {0, 2, 4, 6, 8};
   int odd[5]  = {1, 3, 5, 7, 9};
   
   int loop, index, e_len, o_len;
   
   e_len = o_len = 5;
   
   index = 0;
 
   for(loop = 0; loop < e_len; loop++) {
      array[index] = even[loop];
      index++;
   }
 
   for(loop = 0; loop < o_len; loop++) {
      array[index] = odd[loop];
      index++;
   }
 
   printf("\nż�� -> ");
   
   for(loop = 0; loop < e_len; loop++)
      printf(" %d", even[loop]);
   printf("\n����  -> ");
   
   for(loop = 0; loop < o_len; loop++)
      printf(" %d", odd[loop]);
 
   printf("\n�ϲ��� -> ");
   
   for(loop = 0; loop < 10; loop++)
      printf(" %d", array[loop]);
   
   return 0;
}

  */


//���鿽��

//��һ�����鸴�Ƹ�����һ������

/*
#include <stdio.h>
 
int main() {
   int original[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int copied[10];
   int loop;
   
   for(loop = 0; loop < 10; loop++) {
      copied[loop] = original[loop];
   }
   printf("Ԫ������ -> ����������� \n");
   
   for(loop = 0; loop < 10; loop++) {
      printf("   %2d        %2d\n", original[loop], copied[loop]);
   }
 
   
   return 0;
}

  */

//ֵ���ݺ͵�ַ���ݵ�����

/*
#include "stdio.h"
 
int ArrayCopy(char* ori, char* cop, char Length)
{  
  char loop;
  for(loop = 0; loop < Length; loop++) 
  {
    *cop++ = *ori++;
  } 
  return 0;
}
int main() 
{
   char original[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   char *copiedOne=original;
   char copiedTwo[10];
   char loop;
   char Length;
    
   Length = sizeof(original);
   printf("Ԫ������ -> ����������� \n");
   for(loop = 0; loop < sizeof(original); loop++) 
   {
     printf("   %2d        %2d\n", original[loop], copiedOne[loop]);
   }
   ArrayCopy(original,copiedTwo, Length);
    
   copiedTwo[9] = 20;
   printf("ֵ���ݣ�\n");
   printf("ֵ���ݸ������ݺ�ֻ�п����������е�Ԫ�ر����ģ� \n");
   printf("Ԫ������ -> ����������� \n");
   for(loop = 0; loop < sizeof(original); loop++) 
   {
      printf("   %2d        %2d\n", original[loop], copiedTwo[loop]);
   }
    
   copiedOne[9] = 50;
   printf("��ַ���ݣ�\n");
   printf("��ַ���ݸ������ݺ�ԭ����Ԫ���뿽���������е�Ԫ��ͬʱ�����ģ� \n");
   printf("Ԫ������ -> ����������� \n");
   for(loop = 0; loop < sizeof(original); loop++) 
   {
     printf("   %2d        %2d\n", original[loop], copiedOne[loop]);
   }
    
   return 0;
}

  */
