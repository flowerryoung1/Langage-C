# include<stdio.h>
int main() {
	int produits_vendus;
	float prix_vente, CA; 
	printf("Veuillez entrer la quantité de produits vendus: \n");
	scanf("%d",&produits_vendus);
	printf("Veuillez entrer le prix de vente: \n");
	scanf("%f",&prix_vente);
	CA= produits_vendus*prix_vente;
	printf("Le chiffre d'affaires est: %.0f", CA);
	return 0;
	}
	
