//Exercicio 20
#include <stdio.h>
#include <string.h>

int main()
{
	int idade;
	char categoria[128];

	printf("Digite a idade: ");
	scanf("%d", &idade);

	if (idade >= 5)
	{
		if ((idade >= 5) && (idade <= 7))
		{
			strcpy(categoria, "Infantil");
		}
		else if ((idade >= 8) && (idade <= 10))
		{
			strcpy(categoria, "Juvenil. ");
		}
		else if ((idade >= 11) && (idade <= 15))
		{
			strcpy(categoria, "Adolescente. ");
		}
		else if ((idade >= 16) && (idade <=30))
		{
			strcpy(categoria, "Adulto. ");
		}
		else
		{
			strcpy(categoria, "Sênior. ");
		}
	printf("\n%s \n\n", categoria);
	}

	else
	{
		printf("\nIdade de %d anos não está listada em nenhuma categoria. \n\n", idade);
	}

	return 0;

}
