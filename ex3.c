//Exercicio 3
#include <stdio.h>

int main()
{
	float n1, n2;
	printf("\nDigite o número: ");
	scanf("%f", &n1);

	printf("Digite o número: ");
	scanf("%f", &n2);

	if (n1 < n2)
	{
		printf("\n%.2f é menor que %.2f \n\n", n1, n2);
	}
	else if (n2 < n1)
	{
		printf("\n%.2f é menor que %.2f \n\n", n2, n1);
	}
	else
	{
		printf("\n%.2f = %.2f \n\n", n1, n2);
	}

	return 0;
}
