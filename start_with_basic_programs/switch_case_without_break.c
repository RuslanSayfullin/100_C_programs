#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    /* Local Variable Definition */
    char grade;
    printf("Enter your grade:\n");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A':
            printf("Excellent\n");
        case 'B':
            printf("\n\n\nKeep it up!\n\nNo break statement\n\nHence all the case following this(but not the ones above this) except the default case will get executed !\n\n");
        case 'C':
            printf("\n\n\t\tCase C : Well done !\n\n");
        case 'D':
            printf("\t\tCase D : You passed!\n\n");
        case 'F':
            printf("\t\tCase E : Better luck next time\n\n\n");
        default:
            printf("\t\tDefault Case : Invalid grade\n\n\n");
    }
    printf("Your grade is %c\n",grade);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}