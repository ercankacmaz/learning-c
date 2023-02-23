#include <stdio.h>

/*
   while(control expression)    --> logic control (non-zero value is TRUE, zero value is FALSE)
      loop body

      while(1) --> infinite loop





*/

int main()
{
    int i;
    int factorial = 1;
    printf("Enter a number: ");
    scanf_s("%d", &i);
    while (1 < i)
    {

        factorial *= i;
        i--;


    }
    printf("Factorial is equal to : %d", factorial);








  /*  int i;
    int sum = 0;
    printf("Enter a number: ");
    scanf_s("%d", &i);
    while (i > 0)
    {
        sum += i;
        i--;
      


    }
    printf("Sum is: %d", sum);*/



   /* int i = 1;

    while (i < 10)
    {
        printf("%d\n", i);
        i++;

    }

    */



}

