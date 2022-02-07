#include <stdio.h>

int main ()

{

int fatorial = 5;
int resposta = 1;

for ( ; fatorial >= 1; --fatorial)
{
    resposta *= fatorial;

}

printf ("O numero fatorial e' %i\n", resposta);

    return 0;
}