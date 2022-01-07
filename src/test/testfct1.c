#include <stdio.h>
#include "fct.h"

int main(void) {
    int a = 7;
    printf("fct1(%i) = %i\n", a, fct1(a));
    printf("fct2(%i) = %i\n", a, fct2(a));
    printf("fct2(%i) = %i\n", a, fct4(a));
}
