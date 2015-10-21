//Exercicio 11
#include <stdio.h>

int main()
{
	float salario, aumento, novoSalario;

	printf("\nSalário: ");
	scanf("%f", &salario);

	if (salario <= 300)
	{
		aumento = 15.0 / 100.0 * salario;
		printf("\nAumento de 15%% ");
		novoSalario = salario + aumento;
	}
	else if ((salario > 300) && (salario <= 600))
	{
		aumento = 10.0 / 100.0 * salario;
		printf("\nAumento de 10%% ");
		novoSalario = salario + aumento;
	}
	else if ((salario > 600) && (salario <= 900))
	{
		aumento = 5.0 / 100.0 * salario;
		printf("\nAumento de 5%% ");
		novoSalario = salario + aumento;
	}	
	else
	{
		printf("\nNão teve reajuste de salário. ");
		novoSalario
			= salario;
	}

	printf("\nValor do aumento: R$ %.2f ", aumento);
	printf("\nNovo salário: R$ %.2f \n\n", novoSalario);

	return 0;
}
