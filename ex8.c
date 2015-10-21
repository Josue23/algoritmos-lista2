//Exercicio 8
#include <stdio.h>

int main()
{
	float salario;

	printf("\nSalário: ");
	scanf("%f", &salario);

	if (salario <= 300)
	{
		printf("\nSalário com reajuste de 35%% é %.2f \n\n", salario + salario * 35 / 100);
	}
	else
	{
		printf("\nSalário com reajuste de 15%% é %.2f \n\n", salario + salario * 15 / 100);
	}

	return 0;
}
