#include <stdio.h>
int main()
{
    char C;
    scanf("%c",&C);
    if((C>='a'&&C<='z')||(C>='A'&&C<='Z'))
    {
    if(C=='a'||C=='A'||C=='e'||C=='E'||C=='i'||C=='I'||C=='o'||C=='O'||C=='u'||C=='U')
    printf("vowel");
    else
    printf("Consonant");
    }
    else
    printf("invalid");

    return 0;
}
