#include<stdio.h>

int squareOfNumber(int num)
{
    return (num*num);
}
int main()
{
    int number, square;
    printf("Please Enter any integer Value : ");
    scanf("%d", &number);
    square = squareOfNumber(number);
    printf("square of a given number %.d is  =  %.d", number, square);
    return 0;
}
