/*
  11 - Programa que pida el numero del mes y
      al final imprima los meses siguientes en letras.
*/

#include <stdio.h>

// arreglo para almacenar los meses del año
const char* meses[12] = {
  "Enero","Febrero","Marzo","Abril","Mayo","Junio",
  "Julio","Agosto", "Septiembre","Octubre","Noviembre","Diciembre"};

int main(void){

  int cap, i;   // variables
  
  // Solicitados al usuario ingresar el número de un mes
  printf("Introduzca el número del mes: \n");
    // Alojamos el número del mes en la variable
    scanf("%d", &cap);
  printf("---- \n");
  
  for(i = cap; i < 12; i++){ // For loop para comparar el mes con el arreglo
    
    printf("%s \n", meses[i]);// Imprimimos los meses restantes.
  }
  
  return 0;
}