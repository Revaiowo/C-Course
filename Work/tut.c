#include<stdio.h>
#include<conio.h>

void main()

{
    int num1, num2, sum;

    printf ("Enter two integer number");
    scanf ("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf ("sum of %d and %d is: %d", num1, num2, sum);

    getch;
}