//Exercicio 10
#include <stdio.h>

int main()
{
	float fabrica, valorFinal; // disribuidor, impostos;

	printf("\nCusto de fábrica: ");
	scanf("%f", &fabrica);

	if (fabrica <= 12000)
	{
		valorFinal = fabrica + fabrica * 5.0 / 100.0;
	}
	else if ((fabrica > 12000) && (fabrica <= 25000))
	{
		valorFinal = (fabrica + fabrica * 10.0 /100.0) + (fabrica * 15.0 / 100.0);
	}
	else
	{
		valorFinal = (fabrica + fabrica * 15.0 / 100.0) + (fabrica * 20.0 /100.0);
	}
	printf("\nO custo final ao consumidor é R$ %.2f \n\n", valorFinal);

	return 0;
}
