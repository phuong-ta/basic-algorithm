#include <stdio.h>

int main()
{
    /* code */
    int a, b, c, x, y;
    printf("Enter three numbers\n");
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf("%d", &c);
    printf("a %d, b %d, c %d\n", a, b, c);
    // when a is biggest
    if (a>b && a>c)
    {     
        if (b>c)
        {
            printf("big %d, med %d, small %d\n", a, b, c);
        }else
        {
            printf("big %d, med %d, small %d\n", a, c, b);
        }        
    }
    // when b is biggest
       else if (b>a && b>c)
    {
        if (a>c)
        {
            printf("big %d, med %d, small %d\n", b, a, c);
        }else
        {
            printf("big %d, med %d, small %d\n", b, c, a);
        }        
    }
    // when c is biggest
    else if (c>a && c>b)
    {
        if (a>b)
        {
            printf("big %d, med %d, small %d\n", c, a, b);
        }else
        {
            printf("big %d, med %d, small %d\n", c, b, a);
        }
        
    }
    
    
    return 0;
}
