#include <stdio.h>

int main()
{
    int height = 6;
    int width = 7;
    printf("\n");
    for (int x = 1; x <= height; x++)
    {
        for (int y = 1; y <= width; y++)
        {
            if (x==1 || x==height ||y== width ||y==1)
            {
                /* code */
                printf("*\t");
            }else
            {
                /* code */
                printf(" \t");
            }
            
        }  
        printf("\n");    
    }
    printf("\n");
    return 0;
}