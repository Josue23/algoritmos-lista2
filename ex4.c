//Exercicio 4
#include <stdio.h>

int main()
{
	float n1, n2, n3;

	printf("\nDigite o número: ");
	scanf("%f", &n1);

	printf("Digite o número: ");
	scanf("%f", &n2);

	printf("Digite o número: ");
	scanf("%f", &n3);
	
	if ((n1 > n2) && (n1 > n3))
	{
		printf("\nO primeiro número (%.2f) é o maior. \n\n",n1);
	}
	else if ((n2 > n1) && (n2 > n3))
	{
		printf("\nO segundo número (%.2f) é o maior. \n\n",n2);
	}
	else if (n3 > n2)
	{
		printf("\nO terceiro número (%.2f)é o maior. \n\n",n3);
	}
	else
	{
		printf("\nOs três números são iguais. ");
		printf("\n%.2f = %.2f = %.2f \n\n", n1, n2, n3);
	}

	return 0;
}
