#include<stdio.h>
int main()
{
    int a,r,i,rev=0;
    i=a;
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    if(i==rev)
    printf("yes");
    else
    printf("no");
}
