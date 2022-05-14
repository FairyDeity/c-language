//数组的拆分与合并

//将一个数组拆分成一个为奇数数组，一个为
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
      
   printf(" 原始数组 -> ");
   
   for(loop = 0; loop < 10; loop++)
      printf(" %d", array[loop]);
       
   printf("\n 偶数 -> ");
   for(loop = 0; loop < e; loop++)
      printf(" %d", even[loop]);   
 
   printf("\n 奇数 -> ");
   for(loop = 0; loop < d; loop++)
      printf(" %d", odd[loop]);   
   
   return 0;
}
*/

//将奇数数组与偶数数组合并为一个数组
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
 
   printf("\n偶数 -> ");
   
   for(loop = 0; loop < e_len; loop++)
      printf(" %d", even[loop]);
   printf("\n奇数  -> ");
   
   for(loop = 0; loop < o_len; loop++)
      printf(" %d", odd[loop]);
 
   printf("\n合并后 -> ");
   
   for(loop = 0; loop < 10; loop++)
      printf(" %d", array[loop]);
   
   return 0;
}

  */


//数组拷贝

//将一个数组复制给另外一个数组

/*
#include <stdio.h>
 
int main() {
   int original[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int copied[10];
   int loop;
   
   for(loop = 0; loop < 10; loop++) {
      copied[loop] = original[loop];
   }
   printf("元素数组 -> 拷贝后的数组 \n");
   
   for(loop = 0; loop < 10; loop++) {
      printf("   %2d        %2d\n", original[loop], copied[loop]);
   }
 
   
   return 0;
}

  */

//值传递和地址传递的区别

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
   printf("元素数组 -> 拷贝后的数组 \n");
   for(loop = 0; loop < sizeof(original); loop++) 
   {
     printf("   %2d        %2d\n", original[loop], copiedOne[loop]);
   }
   ArrayCopy(original,copiedTwo, Length);
    
   copiedTwo[9] = 20;
   printf("值传递：\n");
   printf("值传递更改数据后，只有拷贝的数组中的元素被更改： \n");
   printf("元素数组 -> 拷贝后的数组 \n");
   for(loop = 0; loop < sizeof(original); loop++) 
   {
      printf("   %2d        %2d\n", original[loop], copiedTwo[loop]);
   }
    
   copiedOne[9] = 50;
   printf("地址传递：\n");
   printf("地址传递更改数据后，原数组元素与拷贝的数组中的元素同时被更改： \n");
   printf("元素数组 -> 拷贝后的数组 \n");
   for(loop = 0; loop < sizeof(original); loop++) 
   {
     printf("   %2d        %2d\n", original[loop], copiedOne[loop]);
   }
    
   return 0;
}

  */
