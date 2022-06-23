#include <stdio.h>
int main(void)
{   
    int number, result =0;
    printf("enter a number\n");
    scanf("%d", &number);
    /* code */
    for (int i = 1; i <= number; i++)
    {
        /* code */
        for (int x = 0; x <= i; x++)
        {
            /* code */
            result += x;
        }
        printf("total at %d is %d\n", i ,result);
    }
    printf ("result is %d\n", result);
    return 0;
}
