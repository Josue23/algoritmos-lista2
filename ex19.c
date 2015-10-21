//Exercicio 19
#include <stdio.h>

int main()
{
	float altura, pesoIdeal;
	int sexo;

	printf("\nDigite sua altura em metros: ");
	scanf("%f",  &altura);

	printf("\nDigite o sexo:");
	printf("\n1 para masculino. ");
	printf("\n2 para feminino. ");
	scanf("%d", &sexo);

	
	switch(sexo)
	{
		case 1:
			pesoIdeal = 72.7 * altura - 58;
			break;
		case 2:
			pesoIdeal = 62.1 * altura - 44.7;
			break;
		default:
			printf("Opção inválida. ");
	}
	printf("\nPeso ideal: %.2f quilos. \n\n", pesoIdeal);

	return 0;
}
