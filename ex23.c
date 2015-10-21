//Exercicio 23
#include <stdio.h>

int main()
{
	int codigo, quantidade;
	float preco, precoTotal, desconto, total;

	printf("\nCódigo:  ");
	scanf("%d", &codigo);
	
	printf("Quantidade: ");
	scanf("%d", &quantidade);
	
	if ((codigo < 1) || (codigo > 40))
	{
		printf("\nCódigo inválido. \n\n");
	}
	else
	{
	    if ((codigo >= 1) && (codigo <= 10))
	    {
		    preco = 10;
	    }
	    else if ((codigo >= 11) && (codigo <= 20))
	    {
		    preco = 15;
	    }
	    else if ((codigo >= 21) && (codigo <= 30))
	    {
		    preco = 20;
	    }
	    else if ((codigo >= 31) && (codigo <= 40))
	    {
		    preco = 30;
	    }

	    precoTotal = quantidade * preco;

	    if (precoTotal <= 250)
	    {
		    desconto = 5.0 / 100.0 * precoTotal;
	    }
	    else if ((precoTotal > 250) && (precoTotal <= 500))
	    {
		    desconto = 10.0 / 100.0 * precoTotal;
	    }
	    else
	    {
		    desconto = 15.0 / 100.0 * precoTotal;
	    }

	    printf("\nPreço unitário:      R$ %.2f ", preco);
	    printf("\nPreço total da nota: R$ %.2f ", precoTotal);
	    printf("\nDesconto:            R$ %.2f ", desconto);
	    printf("\nPreço final da nota: R$ %.2f \n\n", precoTotal - desconto);
    }

}
