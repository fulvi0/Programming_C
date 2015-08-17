/*
  17 - Programa que pida 3 letras y al final imprima cuantas repeticiones hay
*/

#include <stdio.h>
#include <string.h>
 
int main()
{
   char string[3];
   int c = 0, count[26] = {0};
 
   printf("Ingrese 3 letras A-Z \n");
   scanf("%s", &string[3]);
 
   while (string[c] != '\0')
   {
 
      if (string[c] >= 'a' && string[c] <= 'z') 
         count[string[c]-'a']++;
      c++;
   }
 
   for (c = 0; c < 26; c++)
   {
      if (count[c] != 0)
         printf("%c se encuentra %d veces \n",c+'a',count[c]);
   }
 
   return 0;
}
