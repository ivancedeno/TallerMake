#include <palindromo.h>

int main()
{
    char palabra[20];
    printf("Escribe una cadena: ");
     gets(palabra);
    if (esPalindromo(&palabra[0]))
        printf("\nSi es un palíndrimo.\n");
    else
        printf("\nNo es un palíndrimo.\n");
 
   
  return(0);
}
