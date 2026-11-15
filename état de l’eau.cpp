#include <stdio.h>
int main() {
float T ;
printf("Veuillez entrer la temperature:\n");
scanf("%f",&T);
if (T<0)
     printf("L’etat de l’eau est GLACE");
   else if (T>100)
      printf("L’etat de l’eau est VAPEUR");
else 
      printf("L’etat de l’eau est LIQUIDE");
return 0;
}
      

