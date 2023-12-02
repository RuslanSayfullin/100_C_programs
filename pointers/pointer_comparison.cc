
#include <stdio.h>

int main()
{
    int *ptrA,*ptrB;

    ptrA = (int *)1;
    ptrB = (int *)2;
    
    if(ptrA > ptrB)
        printf("PtrB is greater than ptrA");

return(0);
}
