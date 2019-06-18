#include<stdio.h>
int main()
{
    int n2, n3, n4;
    scanf("%d\t%d\t%d", &n2, &n3, &n4);
    if (n2>=n3)
    {
        if(n2>=n4)
            printf("%d", n2);
        else
            printf("%d", n4);
     }
    else
    {
        if(n3>=n4)
            printf("%d", n3);
        else
            printf("%d",n4);
    }
    return 0;
}
