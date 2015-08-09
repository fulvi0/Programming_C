/* 15 - Programa que pida cuatro numeros y
  al final los imprima de menor a mayor.
*/

#include <stdio.h>

int main(){

  int array[4], x, y, swap; // variable a utilizar
  int n = 4;                // cantidad de numeros a ingresas

  // solicitamos al usuario ingresar 4 numeros enteros
  printf("Ingrese 4 numeros enteros \n");

  for (x = 0; x < n; x++)
    scanf("%d", &array[x]);   //alojamos los 4 numeros ingresados

  for (x = 0 ; x < ( n - 1 ); x++)
  {
    for (y = 0 ; y < n - x - 1; y++)
    {
      if (array[y] > array[y+1])
      {
        swap       = array[y];
        array[y]   = array[y+1];
        array[y+1] = swap;
      }
    }
  }

  printf("Ordenado ascendentemente:\n");

  for ( x = 0 ; x < n ; x++ )
     printf("%d\n", array[x]);

  return 0;
}
