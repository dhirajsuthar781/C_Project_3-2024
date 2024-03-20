// recursion function [generating fibonnaci number]...

#include <stdio.h>

int fibonnaci(int i)
{
    if(i == 0)
    {
        return 0;
    }
    if(i == 1)
    {
        return 1;
    }
    return(fibonnaci(i-1) + fibonnaci(i-2));
}

int main()
{
    int i, n;
    
    printf("Enter A Digit For Fibonnaci Series = ");
    scanf("%d",&n);

    printf("\n-------------------------------------------\n");
    
    for(i=0;i<n;i++)
    {
        printf("\n%d",fibonnaci(i));
    }
}