#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    printf("\n\nNested loops are usually used to print a pattern in c. \n\n");
    printf("\n\nThey are also used to print out the matrix using a 2 dimensional array. \n\n");

    int i,j,k;
    printf("\n\nOutput of the nested loop is :\n\n");
    for(i = 0; i < 5; i++)
    {
        printf("\t\t\t\t");
        for(j = 0; j < 5; j++)
        printf("* ");

        printf("\n");
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}