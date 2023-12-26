#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int n,c,k;
    printf("Enter an integer in decimal number system: ");
    scanf("%d", &n);
    
    // In 31 bit format
    printf("\n\n\nThe binary equivalent of decimal value %d is:", n);
    
    for(c = 31; c >= 0; c--)
    {
        k = n>>c;
        /*
            num&1 = returns true if the last digit of num is 1 
            else false
        */
        if(k&1)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
