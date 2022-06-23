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
    int base, exponent, result, total =0;

    printf("number as base\n");
    scanf("%d",&base);
    printf("number as exponent\n");
    scanf("%d",&exponent);
    //result = countExponent(base, exponent);
    for (int i = 1; i <= exponent ; i++)
    {
        result = countExponent(base, i);
        total+=result;
    }
    
    printf("%d\n",total);
    return 0;
}
