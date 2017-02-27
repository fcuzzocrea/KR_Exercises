/* Write a program to copy its input to its
 * output, replacing each string of one or more blanks by * a single blank */

#include <stdio.h>

main(void)
{
    int c;
    int nb = 0; // Spaces counter

    // OSS : Questo loop legge solo un carattere 
    //       alla volta, tienilo a mente 
    while ((c=getchar()) != EOF) {
        if (c == ' ') {
            ++nb;
        }
        else{
            if (nb > 1){
                putchar(' ');
                nb = 0;
            }
        putchar(c);
        }
    }
    return 0;
}
