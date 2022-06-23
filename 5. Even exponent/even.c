#include <stdio.h>
int countExponent(int base, int exponent){
    int result=1;

        for (int i = 1; i <= exponent; i++)
        {
            /* code */
            result *=base;
        }
    


    return result;
}

int main(void)
{
    /* code */
    int base, exponent, result=0, sum = 0;
    printf("give base\n");
    scanf("%d", &base);
    printf("give exponent\n");
    scanf("%d", &exponent);
    for (int i = 1; i <= exponent; i++)
    {
        /* code */
        if (i%2==0)
        {
            result= countExponent(base, i);
            printf ("%d to the power of %d is %d\n", base, i, result);
            sum+=result;
        }
        
    }
    printf("total is %d\n", sum);
    return 0;
}
