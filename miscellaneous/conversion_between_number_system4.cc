#include<stdio.h>

//Function prototype declarations
void decimal_binary(int ); 
void F(int );
void reverse(int );

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int n;
    printf("\n\nEnter an integer in decimal number system: ");
    scanf("%d", &n);
    
    //In 31 bit format
    printf("\n\nThe binary equivalent of decimal value %d using decimal_binary method is: ", n);
    
    decimal_binary(n);  // function call
    
    printf("\n\nThe binary equivalent of decimal value %d using F() method is: ", n);
    F(n);   // function call
    printf("\n\nThe Reverse of the binary representation of value %d is: ", n);
    reverse(n); // function call
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}

// function definition
void decimal_binary(int i)
{
    if(i <= 1)
    printf("%d", i);   // to print in up to down format
    else
    {
        decimal_binary(i/2);
        printf("%d", i%2);
    }
}

void F(int j)
{
    if(j/2)
    {
        F(j/2);
    }
    printf("%d", j%2);
}

void reverse(int k)
{
    if(k <= 1)
        printf("%d", k);
    else
    {
        printf("%d", k%2);
        F(k/2);
    }
    printf("\n\n");
}
