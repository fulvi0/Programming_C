/*
  10 - Programa que pida 3 numeros
  y al final imprima los numeros
  del 1 al 15 menos los numeros capturados
*/

#include <stdio.h>

int main(){
  
  int i;
  int a, b, c;
  
  printf("Ingrese un No. entre 1 & 15 \n\n");
    scanf("%d %d %d", &a, &b, &c);
  printf("No. 1 al 15 menos los numeros capturados \n");
  
  // For loop para imprimir los numero hasta 15
  for (i = 1; i <= 15; i++) {
    
    // Condicional para excluir los numero capturados
    if(i == a || i == b || i == c){
      
      continue; // excluimos los numeros capturados                  
    }
    
    else{
      // Imprimimos los numero restantes entre 1 & 15
      printf("%d \n", i);
    }
  }
  
  return 0;
}