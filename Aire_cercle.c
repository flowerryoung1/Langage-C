#include <stdio.h>
int main() {
	const float Pi=3.14;
	float S,rayon;
	printf(" Veuillez entrer la valeur du rayon:\n" );
	scanf("%f",& rayon);
	S=Pi * rayon * rayon;
	printf("L'Aire du cercle est: %.1f",S);
	return 0;
	}

