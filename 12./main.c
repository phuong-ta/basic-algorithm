#include <stdio.h>

int main()
{
    int result=0;
    for (int x = 1; x < 10; x++)
    {
        for (int y = 1; y < 11; y++)
        {
            result=x*y;
            printf("%d x %d = %d\t", x, y, result);
        }  
        printf("\n");    
    }
    return 0;
}
