//Exercicio 22
#include <stdio.h>

int main()
{
	int idade, grauDeRisco;
	float peso;

	printf("Idade: ");
	scanf("%d", &idade);

	printf("Peso: ");
	scanf("%f", &peso);

	if ((idade > 0) && (idade < 20))
	{
		if ((peso > 0) && (peso <= 60))
		{
			grauDeRisco = 9;
		}
		else if ((peso > 60) && (peso <= 90))
		{
			grauDeRisco = 8;
		}
		else if (peso > 90)
		{
			grauDeRisco = 7;
		}
	}
	else if ((idade >= 20) && (idade <= 50))
	{
		if ((peso > 0) && (peso <= 60))
		{
			grauDeRisco = 6;
		}
		else if ((peso > 60) && (peso <= 90))
		{
			grauDeRisco = 5;
		}
		else if (peso > 90)
		{
			grauDeRisco = 4;
		}
	}
	else if (idade >= 50)
	{
		if ((peso > 0) && (peso <= 60))
		{
			grauDeRisco = 3;
		}
		else if ((peso > 60) && (peso <= 90))
		{
			grauDeRisco = 2;
		}
		else if (peso > 90)
		{
			grauDeRisco = 1;
		}
	}

	printf("\nGrupo de risco %d \n\n", grauDeRisco);

	return 0;

}
