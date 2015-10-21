//Exercicio 13
#include <stdio.h>
#include <string.h>

int main()
{
	float preco, novoPreco;
	char classificacao[20];

	printf("\nPreço: ");
	scanf("%f",&preco);

	if (preco <= 50)
	{
		novoPreco = preco + preco * 5 / 100;
	}
	else if ((preco > 50) && (preco <= 100))
	{
		novoPreco = preco + preco * 10 / 100;
	}
	else
	{
		novoPreco = preco + preco * 15 / 100;
	}

	if (preco <= 80)
	{
		strcpy(classificacao, "Barato");
	}
	else if ((preco > 80) && (preco <= 120))
	{
		strcpy(classificacao, "Normal");
	}
	else if ((preco > 120) && (preco <= 200))
	{
		strcpy(classificacao, "Caro");
	}
	else
	{
		strcpy(classificacao, "Muito caro");
	}

	printf("\nNovo preço: R$ %.2f ",novoPreco);
	printf("\n%s. \n\n", classificacao);

	return 0;
}
