#include <stdio.h>
int main()
{
    int d, i;
    unsigned long long factorial = 1;
    scanf("%d",&d);
    
    if (d< 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for(i=1; i<=d; ++i)
        {
            factorial *= i;              
        }
        printf("%llu",factorial);
    }
    return 0;
}
