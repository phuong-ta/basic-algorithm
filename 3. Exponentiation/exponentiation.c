#include <stdio.h>
int countExponent(int base, int exponent){
    int result=1;
    if (exponent ==0)
    {
        result=1;
    } else
    {
        for (int i = 1; i <= exponent; i++)
        {
            /* code */
            result *=base;
        }
    }


    return result;
}

int main(void)
{
    /* code */
    int base, exponent, result;

    printf("number as base\n");
    scanf("%d",&base);
    printf("number as exponent\n");
    scanf("%d",&exponent);
    result = countExponent(base, exponent);
    printf("%d\n",result);
    return 0;
}
