#include <stdio.h>

int main ()
{

    int contador = 1;
    int variavel;
    int resultado = contador * variavel;    

while (contador <= 10);

 {

    printf ("Voce quer qual tabuada?");
    scanf ("%i", &variavel);

    printf ("%i vezes %i e' iqual a %i\n" variavel, contador, resultado);

    ++contador;            
}

return 0;
}

