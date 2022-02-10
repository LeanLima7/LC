/*#include <stdio.h>

int main ()
{
   return 0;
}*/

#include <stdio.h>

int main ()
{
    int num1, num2;

    printf ("Digite o primeiro numero:\n");
    scanf ("%i", &num1);

    printf ("Digite o segundo numero:\n");
    scanf ("%i", &num2);

    if (num2 == 0)
        printf ("Divisão por 0 nao permitida.");
    else {
        if (num1 % num2 == 0) 
        
            printf ("%i e' divisivel por %i.\n", num1, num2);     
        else
        {
            printf ("%i NAO e' divisivel por %i.\n", num1, num2); 
        }


    }

   return 0;
}
