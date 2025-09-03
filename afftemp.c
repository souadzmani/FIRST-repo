#include <stdio.h>
#include <stdlib.h>
int main() {
   float c;
   printf("entrer la temperature en celsius:");
   scanf("f",&c);
   if (c<0)
   {
    printf("l'etat de l'eau est solide");
   }
   else if (c>=01 && c<100)
   {
   printf("'etat de l'eau est liquid");
   }
   else {
    printf("l'etat de l'eau est gaz");
   }
   




	return 0;
}