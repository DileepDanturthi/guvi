#include <stdio.h>
 
int main()
{
  int array[100], min, size,c;
 
  
  scanf("%d", &size);
 
 
 
  for (c = 0; c < size; c++)
    scanf("%d", &array[c]);
 
  min = array[0];
 
  for (c = 1; c < size; c++)
  {
    if (array[c] < min)
    {
       min  = array[c];
       
    }
  }
 
  printf("%d\n",min);
  return 0;
}
