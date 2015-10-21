//Exercicio 25
#include <stdio.h>

int main()
{
	float horaExtra, horaFalta, gratificacao, total;

	printf("\nDigite quantas horas extras: ");
	scanf("%f", &horaExtra);
	
	printf("\nDigite quantas horas faltou: ");
	scanf("%f", &horaFalta);

	total = (horaExtra - 2.0 / 3.0 * horaFalta);

	if (total < 600)
	{
		gratificacao = 100;
	}
	else if ((total >= 600 ) && (total < 1200))
	{
		gratificacao = 200;
	}
	else if ((total >= 1200 ) && (total < 1800))
	{
		gratificacao = 300;
	}
	else if ((total >= 1800 ) && (total < 2400))
	{
		gratificacao = 400;
	}
	else
	{
		gratificacao = 500;
	}

	printf("\nGratificação: R$ %.2f \n\n", gratificacao);

	return 0;
}
