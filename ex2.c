//Exercicio 2
#include <stdio.h>

int main()
{
	float n1, n2, media;

	printf("Digite a nota: ");
	scanf("%f", &n1);

	printf("Digite a nota: ");
	scanf("%f", &n2);

	media = (n1 + n2) / 2.0;
	printf("\nMédia = %.2f ", media);

	if (media < 4)
	{
		printf("\nReprovado. \n\n");
	}
	else if ((media >= 4) && (media < 7 ))
	{
		printf("\nExame. \n\n");
	}
	else
	{
		printf("\nAprovado. \n\n");
	}

	return 0;
}
