// 1 + 2 + … + n > 10000.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int lastNumber=0, total =0; 
   while (total<1000)
   {
    /* code */
        lastNumber+= 1;
        total+= lastNumber;
   }
   printf("last number is %d\n", lastNumber);
   printf("total is %d\n", total);
    
    return 0;
}
