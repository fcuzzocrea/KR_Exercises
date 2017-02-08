#include <stdio.h>

main()
{
    int c; //char non è abbastanza grande da contenere al suo interno EOF.
   int w;
    while(true){
                printf("Inserisci una frase\n");
                 while(w=(c=getchar()) != EOF){
                     printf("Il valore di w è : %d",w);
                     printf("Il valore di EOF è : %d",EOF);
                        putchar(c);
                    }
                }
}
