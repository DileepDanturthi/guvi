#include<stdio.h>
int main()
{
    int n,i, K= 0, c, array[10];
    scanf("%d\t%d",&n,&i);
    for(c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }
    for(c=0;c<i;c++)
    {
        K=K+array[c];
    }
    printf("%d",K);
    return 0;
}
