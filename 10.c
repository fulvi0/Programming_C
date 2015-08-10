/*
  10 - Programa que pida 3 numeros
  y al final imprima los numeros
  del 1 al 15 menos los numeros capturados
*/

#include <stdio.h>
 
int main()
{
   int array[15], position, c;
   int n = 15;
 
   for ( c = 0 ; c < n ; c++ )
      scanf("%d", &array[c]);
 
   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);
 
   if ( position >= n+1 )
      printf("Deletion not possible.\n");
   else
   {
      for ( c = position - 1 ; c < n - 1 ; c++ )
         array[c] = array[c+1];
 
      printf("Resultant array is\n");
 
      for( c = 0 ; c < n - 1 ; c++ )
         printf("%d\n", array[c]);
   }
 
   return 0;
}
