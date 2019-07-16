#include <stdio.h>
int main()
{
    int l, h, m, flag=0;
    scanf("%d %d", &l, &h);
    while (l< h)
    {
        for(m = 2; m<= l/2; ++m)
        {
            if(l % m == 0)
            {
                flag = m;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", l);
        ++l;
    }
    return 0;
}
