# include <stdio.h>
int main() {
	float sb,cs,sn; /*sb:salaire brut,cs:cotisations sociales,sn:salaire net*/
	printf("Veuillez entrer la valeur de sb:");
	scanf("%f", &sb);
	printf("Veuillez entrer la valeur de cs:");
	scanf("%f", &cs);
	sn=sb-cs;
	printf("sn=%.0f"  ,sn);
	return 0;
	}

