#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int n;
    printf("Enter a number:  ");
    scanf("%d",&n);

    if((n/2)*2 == n)
        printf("\n\n\t\t %d is Even\n", n);
    else
        printf("\n\n\t\t %d is Odd\n", n);

    printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}