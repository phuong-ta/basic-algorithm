#include <stdio.h>

int main() {
  int values[5];
  int max=0, position =0;

  printf("Enter 5 integers: ");

  // taking input and storing it in an array
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &values[i]);
  }

  // printing elements of an array
  for(int i = 0; i < 5; ++i) {
    if (values[i]>max)
    {
        /* code */
        max=values[i];
        position=i;
    }
    
  }
  printf("biggest is %d\n", max);
  printf("position in array is %d\n", position);
  return 0;
}