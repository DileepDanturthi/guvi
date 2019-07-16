#include <stdio.h>

int main()
{
   int num,a,b;
   scanf("%d %d",&a,&b);
   for (num = a+1; num <= b-1; num++)
     {

               if (num % 2 == 0)

                  printf ("%d ", num);

     }

    return 0;
}
