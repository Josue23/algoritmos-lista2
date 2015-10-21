//Exercicio 14
#include <stdio.h>

int main()
{
	float salario, novoSalario, aumento;

	printf("\nSalário: ");
	scanf("%f", &salario);

	if (salario <= 300)
	{
		aumento = 50.0 / 100.0 * salario;
		novoSalario = salario + aumento;
	}
	else if ((salario > 300) && (salario <= 500))
	{
		aumento = 40.0 / 100.0 * salario;
		novoSalario = salario + aumento;
	}
	else if ((salario > 500) && (salario <= 700))
	{
		aumento = 30.0 / 100.0 * salario;
		novoSalario = salario + aumento;
	}
	else if ((salario > 700) && (salario <= 800))
	{
		aumento = 20.0 / 100.0 * salario;
		novoSalario = salario + aumento;
	}
	else if ((salario > 800) && (salario <= 1000))
	{
		aumento = 10.0 / 100.0 * salario;
		novoSalario = salario + aumento;
	}
	else
	{
		aumento = 5.0 / 100.0 * salario;
		novoSalario = salario + aumento;
	}
	
	printf("\nNovo salário: R$ %.2f \n\n", novoSalario);

	return 0;
}
