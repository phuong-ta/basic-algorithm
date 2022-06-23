#include <stdio.h>
int total (int number){

    int result =0;
    for (int i = 1; i < number; i++)
    {
        /* code */
        result+= i + (i+1);
    }

    return result;
}
int main(int argc, char const *argv[])
{
    /* code */
    int number, result;
    printf("enter a number\n");
    scanf("%d",&number);
    while (number<=0)
    {
        printf("Number should be bigger than 0\n");
        scanf("%d",&number);
    }
    result = total(number);
    printf("total is %d\n", result);
    return 0;
}
