//Exercicio 5
#include <stdio.h>

int main()
{
	float n1, n2;
	int opcao;

	printf("\nDigite o número: ");
	scanf("%f", &n1);
	
	printf("Digite o número: ");
	scanf("%f", &n2);
	
	printf("\nAperte 1 para exibir a média entre %.2f e %.2f ", n1, n2);

	if (n1 > n2)
	{
		printf("\nAperte 2 para exibir a diferença entre %.2f e %.2f ", n1, n2 );
	}
	else if (n2 > n1)
	{
		printf("\nAperte 2 para exibir a diferença entre %.2f e %.2f ", n2, n1);
	}
	else
	{
		printf("%.2f e %.2f são iguais.", n1, n2);
	}

	printf("\nAperte 3 para exibir o produto entre %.2f e %.2f ", n1, n2);

	printf("\nAperte 4 para exibir a divisão entre %.2f e %.2f \n\n", n1, n2);
	scanf("%d", &opcao);
	
	switch (opcao)
	{
		case 1:
			printf("\nMédia entre %.2f e %.2f = %.2f \n\n", n1, n2, (n1+n2)/2);
			break;

		case 2:
			if (n1 > n2)
				printf("\n%.2f - %.2f = %.2f \n\n", n1, n2, n1-n2);
			else
				printf("\n%.2f - %.2f = %.2f \n\n", n2, n1, n2-n1);
			break;

		case 3:
			printf("\n%.2f x %.2f = %.2f \n\n", n1, n2, n1*n2);
			break;

		case 4:
			if (n2 != 0)
				printf("\n%.2f / %.2f = %.2f \n\n", n1, n2, n1 / n2);
			else
				printf("O segundo número não pode ser zero. ");
			break;

		default:
			printf("\nOpção inválida. Digite número de 1 a 4 \n\n");

	}

	return 0;

}
