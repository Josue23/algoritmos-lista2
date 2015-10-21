//Exercicio 7
#include <stdio.h>

int main()
{
	float salario, aumento, novoSalario;

	printf("Valor do salário: ");
	scanf("%f", &salario);

	aumento = 30.0 / 100.0;
	novoSalario = salario + salario * aumento;

	if (salario < 500)
	{
		printf("\nSeu novo salário é %.2f \n\n", novoSalario);
	}
	else
	{
		printf("\nSeu salário não será reajustado. \n\n");
	}

	return 0;
}
