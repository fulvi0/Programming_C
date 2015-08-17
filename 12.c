/* 12 - Programa que pida los nombre del mes y
    al final imprima los meses siguientes en numero.*/

#include<stdio.h>

// arreglo para almacenar los meses del año
const char* meses[12] = {
  "Enero","Febrero","Marzo","Abril","Mayo","Junio",
  "Julio","Agosto", "Septiembre","Octubre","Noviembre","Diciembre"};

int main(void){

  int i;   // variables
  char cap[9];
  
  // Solicitados al usuario ingresar el numero de un mes
  printf("Introdusca el numero del mes: \n");
    // Alojamos el numero del mes en la variable
    scanf("%c", &cap);
  printf("---- \n");
  
  for(i = cap; i < 12; i++){ // For loop para comparar el mes con el arreglo
    
    printf("%s \n", meses[i]);// Imprimemos los meses restantes.
  }
  
  return 0;
}
