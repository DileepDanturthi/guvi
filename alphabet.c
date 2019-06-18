#include<stdio.h>
int main()
{
    char C;
    scanf("%c",&C);
    if((C>='a'&&C<='z')||(C>='A'&&C<='Z'))
    printf("Alphabet");
    else
    printf("No");
    return 0;
}
