//Exercicio 16
#include <stdio.h>

int main()
{
	float preco, desconto, novoPreco;
	int codigo;

	printf("\nDigite o preço: ");
	scanf("%f", &preco);

	printf("\nDigite o código: ");
	scanf("%d", &codigo);
	
	if (preco <= 30)
	{
		novoPreco = preco;
	}
	else if ((preco > 30) && (preco <= 100))
	{
		desconto = 10.0 / 100.0 * preco;
		novoPreco = preco - desconto;
	}
	else
	{
		desconto = 15.0 / 100.0 * preco;
		novoPreco = preco - desconto;
	}

		printf("\nPreço atual: R$ %.2f ", preco);
		printf("\nDesconto: R$ %.2f ", desconto);
		printf("\nNovo preço: %.2f \n\n", novoPreco);
		
		return 0;
}
