#include <stdio.h>
#include <stdlib.h>
// convert number to string
int main(int argc, char const *argv[])
{
    /* code */
    int number, firstNum, secondNum;
    char firstNumber[][10] ={"", "ten", "twenty", "thirdty", "forty", "fifthty", "sixty", "seventy", "eighty", "ninety"};
    char secondNumber[][10] ={"", "one", "two", "three", "for", "five", "six", "seven", "eight", "nine"};
    char specialNumber[][10] ={"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eightteen", "nineteen"};
    printf("enter a number\n");
    scanf("%d", &number);

    while (number ==0 ||number >99)
    {
        printf("enter a number. EXIT is 101\n");
        scanf("%d", &number);
        if (number ==101)
        {
            exit(EXIT_SUCCESS);
        }
        
    }

    while (number<100)
    {
        firstNum= number/10;
        secondNum=number%10;
        if (firstNum ==1 && secondNum != 0)
        {
            printf("%d is written %s.\n", number, specialNumber[secondNum-1]);
        } else
        {
            printf("%d is written %s %s.\n", number, firstNumber[firstNum], secondNumber[secondNum]);
        }
        printf("Enter a new number. EXIT is 101\n");
        scanf("%d", &number);
    }
    


    
    return 0;
}
