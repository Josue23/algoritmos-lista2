//Exercicio 24
#include <stdio.h>
#include <string.h>

int main()
{
	float preco, aumento, imposto, novoPreco;
	int categoria;
	char situacao;
	char classificacao[128];

	printf("\nPreço: ");
	scanf("%f", &preco);

	printf("\nCategoria: ");
	printf("\n1 - limpeza ");
	printf("\n2 - alimentação ");
	printf("\n3 - vestuário \n");
	scanf("%d", &categoria);

	printf("\nSituação: ");
	printf("\nR - produtos que necessitam de refrigeração ");
	printf("\nN - produtos que não necessitam de refrigeração \n");
	scanf(" %c", &situacao);

	if (preco <= 25)
	{
		if (categoria == 1)
		{
			aumento = 5.0 / 100.0 * preco;
		}
		if (categoria == 2)
		{
			aumento = 8.0 / 100.0 * preco;
		}
		if (categoria == 3)
		{
			aumento = 10.0 / 100.0 * preco;
		}
	}
	else
	{
		if (categoria == 1)
		{
			aumento = 12.0 / 100.0 * preco;
		}
		if (categoria == 2)
		{
			aumento = 15.0 / 100.0 * preco;
		}
		if (categoria == 3)
		{
			aumento = 18.0 / 100.0 * preco;
		}
	}
	
	if ((categoria == 2) || (situacao == 'R') || (situacao == 'r'))
	{
		imposto = 5.0 / 100.0 * preco;
	}
	else
	{
		imposto = 8.0 / 100.0 * preco;
	}

	novoPreco = preco + aumento;

	if (novoPreco <= 50)
	{
		strcpy(classificacao, "Barato ");
	}
	else if ((novoPreco > 50) && (novoPreco <= 120))
	{
		strcpy(classificacao, "Normal ");
	}
	else
	{
		strcpy(classificacao, "Caro ");
	}

	printf("\n\nImposto:       R$ %.2f ", imposto);
	printf("\nNovo preço:    R$ %.2f ", novoPreco);
	printf("\nClassificação: %s \n\n", classificacao);

	return 0;
}
