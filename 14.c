/* 14 -Programa que pida 2 nombre y al final imprima
  un letrero que diga si los 2 nombres son iguales.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {

  char nombre1[25], nombre2[25];
  int resultado;

  printf("14 -Programa que pida 2 nombre y al final imprima un letrero que diga si los 2 nombres son iguales \n\n");

  printf("Ingrese un 1re nombre \n");
    scanf("%s", &nombre1[0]);

  printf("Ingrese un 2do nombre \n");
    scanf("%s", &nombre2[0]);

    resultado = strcmp(nombre1, nombre2);

    if (resultado == 0) {
      printf("Los nombres ingresados son iguales \n Primer nombre = %s \n Segundo nombre = %s \n", nombre1, nombre2);
    }
    else {
      printf("Los nombres ingresados no son iguales\n Primer nombre = %s \n Segundo nombre = %s \n", nombre1, nombre2);
    }

  return 0;
}
