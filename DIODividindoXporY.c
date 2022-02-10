#include <stdio.h>

int main ()
{

float primeiroNumero;
float segundoNumero;
float divisao;


    printf ("Digite o primeiro numero:\n");
    scanf ("%f", &primeiroNumero );

    printf ("Digite o segundo numero:\n");
    scanf ("%f", &segundoNumero);

    divisao = primeiroNumero / segundoNumero;


    if (primeiroNumero < segundoNumero )
            printf ("Essa divisao nao e' possivel");
    else
    { 
        printf("%f\n", &divisao);
    }
        
    return 0;
}