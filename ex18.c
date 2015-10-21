//Exercicio 18
#include <stdio.h>

int main()
{
	int idade;

	printf("\nDigite a idade: ");
	scanf("%d", &idade);

	if (idade >= 0)
	{
		if (idade >= 18)
		{
			printf("\nMaior de idade. \n\n");
		}
		else
		{
			printf("\nMenor de idade. \n\n");
		}
	}
	else
	{
		printf("\nA idade não pode ser um número negativo. \n\n");
	}

	return 0;
}
