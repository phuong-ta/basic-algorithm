#include <stdio.h>
int main()
{
    int height=7;
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            /* code */
            if (j==1|| j==i||i==height)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n");
        
    }
    
    return 0;
}
