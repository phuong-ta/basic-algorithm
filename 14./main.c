#include <stdio.h>
 
int main() {
   int n,i,j;
 
   n = 4;   // khai bao so hang.
 
   printf("Ve tam giac sao deu:\n");
   for(i = 1; i <= n; i++) {
      for(j = 1; j <= 2*n-(2*i-1); j++)
         printf(" ");
 
      for(j = 1; j <= (2*i-1); j++)
         printf("* ");
 
      printf("\n");
   }


   return 1;
}