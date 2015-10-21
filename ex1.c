// Josué Carvalho Rodrigues
// RA 1520411
//Exercicio 1
#include <stdio.h>
int main()
{
	float n1, n2, n3, n4, media;
	printf("Digite a nota: ");
	scanf("%f", &n1);

	printf("Digite a nota: ");
	scanf("%f", &n2);

	printf("Digite a nota: ");
	scanf("%f", &n3);

	printf("Digite a nota: ");
	scanf("%f", &n4);

	media = (n1 + n2 + n3 + n4) / 4;
	printf("\nMédia = %.2f ", media);
	
	if (media >= 7)
	{
		printf("\nAprovado. \n\n");
	}
	else
	{
		printf("\nReprovado.\n\n");
	}

	return 0;
}
