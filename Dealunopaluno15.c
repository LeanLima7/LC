/*#include <stdio.h>

int main ()
{
   return 0;
}*/

#include <stdio.h>

int main ()
{
    int idade;
    printf ("Informar idade: \n");
    scanf ("%i", &idade);

    if (idade <= 5)
        printf ("Bebe.\n");
    else if (idade > 5 && idade <= 10)
        printf("Crianca");
    else if (idade > 10 && idade <= 18)
        printf("Adolescente");
    else { 
        printf("Adulto");
    }  

    return 0;
}