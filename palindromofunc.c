#include <stdio.h>
#include <palindromo.h>

int esPalindromo(char *palabra)

{

    int indice=0,longitud=0,palindromo=1;

    while (*(palabra+longitud) != '\0')

    {

        longitud++;

    }

    longitud--;

 

    for (indice=0;indice<longitud/2;indice++)

    {

        if( *(palabra+indice) != *(palabra+longitud-indice) )

        {

            palindromo=0;

        }

    }

    return palindromo;

}
