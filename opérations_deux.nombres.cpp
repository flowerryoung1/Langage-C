#include <stdio.h>

int main() {
    int A, B, Somme, difference, multiplication;
    float division , c;
    printf("Veuillez entrer les valeurs de A et B:\n");
    scanf("%d %d", &A, &B);
    Somme = A + B;
    printf("La somme de A et B est : %d \n", Somme);
    difference = A - B;
    printf("La difference de A et B est : %d \n", difference);
    multiplication = A * B;
    printf("La multiplication de A et B est :%d \n", multiplication);
    c=(float)A/B;
    division = c;
    printf("La division de A sur B est : %.1f \n", c);
    
    return 0;
}


