#include <stdio.h>

int square(int num){
    int result = num*num;
    return result;

}
int main(void)
{
    /* code */
    int number, result, sum=0;
    printf("enter a number!\n");
    scanf("%d",&number);
    while (number<=0)
    {
        printf("number should be bigger than 0!\n");
        scanf("%d",&number);
    }
    for (int i = 1; i <= number; i++)
    {
        /* code */
        result= square(i);
        sum+=result;
    }
    
    printf("%d\n", sum);
    return 0;
}
