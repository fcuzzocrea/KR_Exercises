#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
    int fahr;
        //C.I   COND TEST   INCREMENTO
    for (fahr=UPPER; fahr>=LOWER; fahr=fahr-STEP)
        printf("%3d %6.1f\n", fahr, ((5.0/9.0)*(fahr-32))); //Nella terza espressione ha fatto un cast perchè sapevo che dovevo avere fuori la t in celsius come float
}
