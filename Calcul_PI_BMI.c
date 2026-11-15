# include <stdio.h>
int main() {
int g; //1:Homme/2:Femme
float taille,poids,PI,BMI;
printf("Entrer le genre de la personne:\n");
scanf("%d", &g);
printf("Entrer la taille de la personne:\n");
scanf("%f",&taille);
printf("Entrer le poids de la personne:\n");
scanf("%f",&poids);
if(g==1)
  PI=((taille-100)-(taille-150))/4;
else 
  PI=((taille-100)-(taille-150))/2;
printf("Le poids ideal de la personne est %.2f Kg:\n",PI);
 /*Affichage indicateur d'obésité*/
 BMI= poids/(taille*taille);
 printf("L'indicateur d'obesite est %.4f Kg :\n", BMI);
 if (BMI<27)
  printf("L'état de la personne est NORMALE");
  else if (BMI<32)
   printf("L'état de la personne est OBESE");
else 
printf("L'état de la personne est MALADE");
return 0;
}  
