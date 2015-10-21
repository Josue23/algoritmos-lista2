//Exercicio 17
#include <stdio.h>
#include <string.h>

int main()
{
	char senha[10];
	scanf("%s", senha);

	if (strcmp(senha, "4531") == 0)
		printf("\nSenha OK \n\n");
	else
		printf("\nSenha incorreta. \n\n");

	return 0;
}
