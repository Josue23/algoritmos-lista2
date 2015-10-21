//Exercicio 12
#include <stdio.h>


int main()
{
	float salario, gratificacao, imposto, total;

	printf("\nSalário: ");
	scanf("%f", &salario);


	if (salario <= 350)
	{
		gratificacao = 100;
	}
	else if ((salario > 350) && (salario <= 600))
	{
		gratificacao = 75;
	}
	else if ((salario > 600) && (salario <= 900))
	{
		gratificacao = 50;
	}
	else
	{
		gratificacao = 35;
	}

	imposto = 7.0 / 100.0 * salario;
	total = (salario - imposto) + gratificacao;
	
	printf("\nImposto: R$ %.2f ", imposto);
	printf("\nValor da gratificação: R$ %.2f ", gratificacao);
	printf("\nValor a receber: R$ %.2f \n\n", total);

	return 0;

}
