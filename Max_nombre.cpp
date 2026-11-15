#include <stdio.h>
int main() {
float A,B,Max;
printf("Veuillez entrer la valeur de A et B:\n");
scanf("%f %f",&A,&B);
Max=A;
if (B>Max)
   Max=B;
printf("Le maximum est: %.0f", Max);
return 0;
}
