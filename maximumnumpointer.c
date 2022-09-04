#include<stdio.h>
// find the maximum number between two numbers using a pointer.
int main () {
   int fno, sno, *prt1=&fno, *prt2=&sno;

   printf("type the first number :");
   scanf("%d" , &fno);
   printf("type the second number :");
   scanf("%d" , &sno);

   if(*prt1>*prt2) {
    printf("%d is the maximum number :" , *prt1);
   } else {
    printf("%d is the maximum number :" , *prt2);
   }


return 0;
}

