//Exercicio 15
#include <stdio.h>

int main()
{

	float valor, rendimento, novoValor;
	int tipo;

	printf("\nTipo de investimento: ");
	printf("\nAperte 1 para 'Poupança' ");
	printf("\nAperte 2 para 'Fundos de renda fixa'. \n\n");
	scanf("%d", &tipo);

	printf("\nValor: ");
	scanf("%f", &valor);

	switch (tipo)
	{
		case  1:
		{
			rendimento = valor * 3.0 / 100.0;
		}
		break;

		case  2:
		{
			rendimento = valor * 4.0 / 100.0;
		}
		break;

		default:
		{
			printf("\nSomente as opções 1 e 2 são válidas. ");
		}
	}


	novoValor = valor + rendimento;

	printf("\nValor corrigido: R$ %.2f \n\n", novoValor);

	return 0;
	
}
