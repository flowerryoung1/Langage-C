#include <stdio.h>
int main() {
const int P1=60;
const int P2=70;
const int P3=120;
int Nb;
float montant;
printf("veuillez entrer la valeur de Nb:\n");
scanf("%d",&Nb);
if (Nb<=100){
  montant= Nb*P1;
  printf("Le montant est:%.0f Da",montant);
 } 
else if (Nb<=150){
   montant= 100*P1+(Nb-100)*P2;
  printf(" Le montant est:%.0f Da",montant);
 } 
else {
 montant=100*P1+150*P2+(Nb-250)*P3;
 printf("Le montant est:%.0f Da",montant);
 }
return 0;
 }

