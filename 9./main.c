#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int n;
    printf("enter a number");
    scanf("%d", &n);
    for (int i = 1; i < n; i+=2)
    {
        /* code */
        printf("%d\n",i);
    }
    printf("%d\n",n);
    
    return 0;
}
