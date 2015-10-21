//Exercicio 21
#include <stdio.h>
#include <string.h>

int main()
{
	float preco;
	int codigo;
	char origem[128];

	printf("\nPreço: ");
	scanf("%f", &preco);

	printf("Código: ");
	scanf("%d", &codigo);

	if ((codigo < 1) || (codigo > 30))
	{
		printf("\nCódigo inválido. \n\n");
	}
	else
	{
		if (codigo == 1)
		{
			strcpy(origem, "Sul.");
		}
		else if (codigo == 2)
		{
			strcpy(origem, "Norte.");
		}
		else if (codigo == 3)
		{
			strcpy(origem, "Leste.");
		}
		else if (codigo == 4)
		{
			strcpy(origem, "Oeste.");
		}
		else if ((codigo == 5) || (codigo == 6))
		{
			strcpy(origem, "Nordeste.");
		}
		else if ((codigo >= 7) && (codigo <= 9))
		{
			strcpy(origem, "Sudeste.");
		}
		else if ((codigo >= 10) && (codigo <= 20))
		{
			strcpy(origem, "Centro-oeste.");
		}
		else if ((codigo >= 21) && (codigo <= 30))
		{
			strcpy(origem, "Nordeste.");
		}
	printf("\n%s\n\n", origem);

	}

	return 0;
}
