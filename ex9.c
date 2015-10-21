//Exercicio 9
#include <stdio.h>

int main()
{
	float saldo, credito;

	printf("\nSaldo: ");
	scanf("%f", &saldo);

	if (saldo <= 200)
	{
		credito = 10.0 / 100.0 * saldo;
	}
	else if ((saldo > 200) && (saldo <= 300))
	{
		credito = 20.0 / 100.0 * saldo;
	}
	else if ((saldo > 300) && (saldo <= 400))
	{
		credito = 25.0 / 100.0 * saldo;
	}
	else
	{
		credito = 30.0 / 100.0 * saldo;
	}

	printf("\nSaldo médio: %.2f \n", saldo);
	printf("Crédito: %.2f \n\n", credito);

	return 0;
}
