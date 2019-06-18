#include<stdio.h>
int main()
{
    int N,D;
    scanf("%d",&N);
    if(N>1)
    {
    D=N*(N+1)/2;
    printf("%d",D);
    }
    else
    printf(" ");
    return 0;
}
