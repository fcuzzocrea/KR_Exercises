#include <stdio.h>

main()
{
    int c, nl, nb, nt;
    nl = 0;
    nb = 0;
    nt = 0;
    while((c=getchar()) != EOF)
        if
            ( c ==  '\t')
            ++nt;
        else if( c == '\n')
            ++nl;
        else if
            ( c== ' ')
            ++nb;
        printf("\n");
        printf("Number of newlines : %d\n",nl);
        printf("Number of blanks : %d\n",nb);
        printf("Number of tabs : %d\n",nt);
}
