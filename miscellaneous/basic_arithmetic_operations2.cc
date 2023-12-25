#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int a, b, add, subtract, multiply, remainder;
    float divide;

    printf("Enter two integers: \n");
    scanf("%d%d", &a, &b);

    add = a+b;
    subtract = a-b;
    multiply = a*b;
    divide = a/(float)b;
    remainder = a%b;

    printf("\n\nAddition of the numbers = %d\n", add);
    printf("\nSubtraction of 2nd number from 1st = %d\n", subtract);
    printf("\nMultiplication of the numbers = %d\n", multiply);
    printf("\nDividing 1st number from 2nd = %f\n", divide);
    printf("\nRemainder on Dividing 1st number by 2nd is %d\n", remainder);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
