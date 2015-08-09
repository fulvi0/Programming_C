/* 13 - Programa que pida un nombre y al final imprima
  la cantidad de letras que tiene el nombre. */

#include <stdio.h>
#include <string.h>

int main() {

  char nombre[50]; // declaramos variable para alojar el nombre
  int length;     // declaramos variable int para contar los caracteres

  printf("13 - Programa que pida un nombre y al final imprima la cantidad de letras que tiene el nombre. \n\n");

  printf("Escriba su nombre \n"); // Preguntamos al usuario por el nombre
    scanf("%s", &nombre[0]);      // Alojamos en nombre en la variable

    // strlen funcion que devuelve la longitud de una cadena
    length = strlen(nombre);

    // Se imprime el nombre y la cantidad de caracters
    printf("Su nombre %s esta compuesto por %d caracteres \n", nombre, length);

return 0;
}
