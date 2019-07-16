#include <stdio.h>

int main() 
{
   int a[100],n;
   int loop;
   scanf("%d",&n);
   for(loop=0;loop<n;loop++)
   scanf("%d",&a[loop]);

   for(loop = 0; loop < n; loop++)
      printf("%d %d\n", a[loop],loop);
      
   return 0;
}
