#include <stdio.h>

int main()
{  
   
    int height;
    printf("enter the hight of triangle\n");
    scanf("%d", &height);
    int width = 2*height-1;
    int sivu1=height, sivu2= height;
    printf("\n");
    for (int x = 1; x <= height; x++)
    {
        for (int y = 1; y <= width; y++)
        {   
            if (sivu1<=y && y<=sivu2 || x==height)
            {
               /* code */
               printf("*\t");
            } else
            {
               /* code */
               printf(" \t");
            }   
        }
         sivu1-=1;
         sivu2+=1;  
         printf("\n");    
    }
    printf("\n");
    return 0;
}