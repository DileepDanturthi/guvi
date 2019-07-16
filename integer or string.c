#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char input[100] = "";
    int length,i; 

    scanf ("%s", input);
    length = strlen (input);
    for (i=0;i<length; i++)
        if (!isdigit(input[i]))
        {
            printf ("no\n");
            exit(1);
        }
    printf ("yes\n");
}
