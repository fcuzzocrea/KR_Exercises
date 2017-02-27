#include <stdio.h>

// count characters in input, 1st version
main(void)
{
    int c, nl, nb, nt;

    nl = 0;
    nb = 0;
    nt = 0;

    while ((c=getchar()) != EOF)

        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++nt; 
        else if (c == ' ')
            ++nb; 
    printf("Newlines:%d Tabs:%d Blanks:%d\n ", nl,nt,nb);
    
    return 0;
    
}
