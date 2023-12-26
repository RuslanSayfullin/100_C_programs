#include<stdio.h>
#include<stdio.h>
#include<math.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    long int octal, val, decimal = 0;
    int i = 0;
    printf("Enter any octal number: ");
    scanf("%ld", &val);
    octal = val;
    while(octal != 0)
    {
        /*
            i++ is post increment, where value is 
            first assigned and then incremented
        */
      decimal += (octal % 10)*pow(8, i++);
      octal/=10;    // same as octal=octal/10
    }
    printf("\n\n\nEquivalent decimal value of %ld is %ld\n\n\n", val, decimal);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
