#include <stdio.h>

int main()
{
    /* code */
    int num, sum=0;
    printf("Please enter a number\n");
    scanf("%d",&num);
    while (num<=0)
    {
        printf("Number has to be bigger than 0\n");
        scanf("%d",&num);
    }
    for (int i = 0; i <= num; i++)
    {
        /* code */
        sum+=i;
    }
    
    printf("sum is %d\n",sum);
    
    return 0;
}
