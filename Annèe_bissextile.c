#include <stdio.h>
int main() {
int A;
printf("Entrer un nombre entier:\n");
scanf("%d",&A);
if ((A % 400==0) || ((A % 4==0) && (A % 100 !=0)))
     printf("%d est une annee bissextile", A);
else 
     printf("%d n'est pas une annee bissextile", A);
 return 0;
 }
