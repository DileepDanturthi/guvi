#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    while(n>=60)
    {
     n=n-60;
     count++;
    }
     printf("%d %d",count,n);
}
