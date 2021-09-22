#include <stdio.h>
//fibonacci

main() {

    int Num0, Num1, aux, contador;

    Num0 = 0;
    Num1 = 1;

   
    printf("\nSérie de Fibonacci:\n\n");
    printf("%d\n",Num1 );

    for(contador = 0;  contador< 19; contador++) {

        aux = Num0 + Num1;
        Num0 = Num1;
        Num1 = aux;

        printf("%d\n", aux);
    }
}