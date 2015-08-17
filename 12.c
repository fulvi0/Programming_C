/* 12 - Programa que pida el nombre del mes y
    al final imprima los meses siguientes en numero.*/
#include <stdio.h>

// arreglo para almacenar los meses del año
const char* meses[12] = {
  "Enero","Febrero","Marzo","Abril","Mayo","Junio",
  "Julio","Agosto", "Septiembre","Octubre","Noviembre","Diciembre"};

int main(int argc, char const *argv[]){

  int i, num_meses;   // variables
  
  // Solicitados al usuario ingresar el número de un mes
  printf("Introduzca el número del mes: \n");
    // Alojamos el número del mes en la variable
    scanf("%d", &num_meses);
  printf("---- \n");
  
      for(i = (num_meses + 1); i < 12; i++){ // For loop para comparar el mes con el arreglo
      printf("%d \n", i);// Imprimimos los meses restantes.
    }
  
  return 0;
}