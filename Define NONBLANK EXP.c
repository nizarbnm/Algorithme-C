#include<stdio.h>
#define NONBLANK 'a'
/* Replace String of blanks with a signle blank */
main ()
{
    int c, lastc;
    lastc = NONBLANK;
    while ((c = getchar()) != EOF )
    {
        if (c != ' ')
        putchar(c);
        if ( c == ' ')
        if (lastc!=' ')
        putchar(c);
        lastc = c;
    }



}
