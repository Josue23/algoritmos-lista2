// Josué Carvalho Rodrigues
// RA 1520411
//Exercicio 1
#include <stdio.h>
int main()
{
	float n1, n2, n3, n4, media;
	printf("Digite a nota: ");
	scanf("%f", &n1);

	printf("Digite a nota: ");
	scanf("%f", &n2);

	printf("Digite a nota: ");
	scanf("%f", &n3);

	printf("Digite a nota: ");
	scanf("%f", &n4);

	media = (n1 + n2 + n3 + n4) / 4;
	printf("\nMédia = %.2f ", media);
	
	if (media >= 7)
	{
		printf("\nAprovado. \n\n");
	}
	else
	{
		printf("\nReprovado.\n\n");
	}

	return 0;
}
//Exercicio 2
#include <stdio.h>

int main()
{
	float n1, n2, media;

	printf("Digite a nota: ");
	scanf("%f", &n1);

	printf("Digite a nota: ");
	scanf("%f", &n2);

	media = (n1 + n2) / 2.0;
	printf("\nMédia = %.2f ", media);

	if (media < 4)
	{
		printf("\nReprovado. \n\n");
	}
	else if ((media >= 4) && (media < 7 ))
	{
		printf("\nExame. \n\n");
	}
	else
	{
		printf("\nAprovado. \n\n");
	}

	return 0;
}
//Exercicio 3
#include <stdio.h>

int main()
{
	float n1, n2;
	printf("\nDigite o número: ");
	scanf("%f", &n1);

	printf("Digite o número: ");
	scanf("%f", &n2);

	if (n1 < n2)
	{
		printf("\n%.2f é menor que %.2f \n\n", n1, n2);
	}
	else if (n2 < n1)
	{
		printf("\n%.2f é menor que %.2f \n\n", n2, n1);
	}
	else
	{
		printf("\n%.2f = %.2f \n\n", n1, n2);
	}

	return 0;
}
//Exercicio 4
#include <stdio.h>

int main()
{
	float n1, n2, n3;

	printf("\nDigite o número: ");
	scanf("%f", &n1);

	printf("Digite o número: ");
	scanf("%f", &n2);

	printf("Digite o número: ");
	scanf("%f", &n3);
	
	if ((n1 > n2) && (n1 > n3))
	{
		printf("\nO primeiro número (%.2f) é o maior. \n\n",n1);
	}
	else if ((n2 > n1) && (n2 > n3))
	{
		printf("\nO segundo número (%.2f) é o maior. \n\n",n2);
	}
	else if (n3 > n2)
	{
		printf("\nO terceiro número (%.2f)é o maior. \n\n",n3);
	}
	else
	{
		printf("\nOs três números são iguais. ");
		printf("\n%.2f = %.2f = %.2f \n\n", n1, n2, n3);
	}

	return 0;
}
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
//Exercicio 6
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

	printf("\nAperte 3 para exibir o produto entre %.2f e %.2f \n\n", n1, n2);

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

		default:
			printf("\nOpção inválida. Digite número de 1 a 3 \n\n");

	}

	return 0;

}
//Exercicio 7
#include <stdio.h>

int main()
{
	float salario, aumento, novoSalario;

	printf("Valor do salário: ");
	scanf("%f", &salario);

	aumento = 30.0 / 100.0;
	novoSalario = salario + salario * aumento;

	if (salario < 500)
	{
		printf("\nSeu novo salário é %.2f \n\n", novoSalario);
	}
	else
	{
		printf("\nSeu salário não será reajustado. \n\n");
	}

	return 0;
}
//Exercicio 8
#include <stdio.h>

int main()
{
	float salario;

	printf("\nSalário: ");
	scanf("%f", &salario);

	if (salario <= 300)
	{
		printf("\nSalário com reajuste de 35%% é %.2f \n\n", salario + salario * 35 / 100);
	}
	else
	{
		printf("\nSalário com reajuste de 15%% é %.2f \n\n", salario + salario * 15 / 100);
	}

	return 0;
}
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
//Exercicio 10
#include <stdio.h>

int main()
{
	float fabrica, valorFinal; // disribuidor, impostos;

	printf("\nCusto de fábrica: ");
	scanf("%f", &fabrica);

	if (fabrica <= 12000)
	{
		valorFinal = fabrica + fabrica * 5.0 / 100.0;
	}
	else if ((fabrica > 12000) && (fabrica <= 25000))
	{
		valorFinal = (fabrica + fabrica * 10.0 /100.0) + (fabrica * 15.0 / 100.0);
	}
	else
	{
		valorFinal = (fabrica + fabrica * 15.0 / 100.0) + (fabrica * 20.0 /100.0);
	}
	printf("\nO custo final ao consumidor é R$ %.2f \n\n", valorFinal);

	return 0;
}
//Exercicio 11
#include <stdio.h>

int main()
{
	float salario, aumento, novoSalario;

	printf("\nSalário: ");
	scanf("%f", &salario);

	if (salario <= 300)
	{
		aumento = 15.0 / 100.0 * salario;
		printf("\nAumento de 15%% ");
		novoSalario = salario + aumento;
	}
	else if ((salario > 300) && (salario <= 600))
	{
		aumento = 10.0 / 100.0 * salario;
		printf("\nAumento de 10%% ");
		novoSalario = salario + aumento;
	}
	else if ((salario > 600) && (salario <= 900))
	{
		aumento = 5.0 / 100.0 * salario;
		printf("\nAumento de 5%% ");
		novoSalario = salario + aumento;
	}	
	else
	{
		printf("\nNão teve reajuste de salário. ");
		novoSalario
			= salario;
	}

	printf("\nValor do aumento: R$ %.2f ", aumento);
	printf("\nNovo salário: R$ %.2f \n\n", novoSalario);

	return 0;
}
//Exercicio 12
#include <stdio.h>


int main()
{
	float salario, gratificacao, imposto, total;

	printf("\nSalário: ");
	scanf("%f", &salario);


	if (salario <= 350)
	{
		gratificacao = 100;
	}
	else if ((salario > 350) && (salario <= 600))
	{
		gratificacao = 75;
	}
	else if ((salario > 600) && (salario <= 900))
	{
		gratificacao = 50;
	}
	else
	{
		gratificacao = 35;
	}

	imposto = 7.0 / 100.0 * salario;
	total = (salario - imposto) + gratificacao;
	
	printf("\nImposto: R$ %.2f ", imposto);
	printf("\nValor da gratificação: R$ %.2f ", gratificacao);
	printf("\nValor a receber: R$ %.2f \n\n", total);

	return 0;

}
//Exercicio 13
#include <stdio.h>
#include <string.h>

int main()
{
	float preco, novoPreco;
	char classificacao[20];

	printf("\nPreço: ");
	scanf("%f",&preco);

	if (preco <= 50)
	{
		novoPreco = preco + preco * 5 / 100;
	}
	else if ((preco > 50) && (preco <= 100))
	{
		novoPreco = preco + preco * 10 / 100;
	}
	else
	{
		novoPreco = preco + preco * 15 / 100;
	}

	if (preco <= 80)
	{
		strcpy(classificacao, "Barato");
	}
	else if ((preco > 80) && (preco <= 120))
	{
		strcpy(classificacao, "Normal");
	}
	else if ((preco > 120) && (preco <= 200))
	{
		strcpy(classificacao, "Caro");
	}
	else
	{
		strcpy(classificacao, "Muito caro");
	}

	printf("\nNovo preço: R$ %.2f ",novoPreco);
	printf("\n%s. \n\n", classificacao);

	return 0;
}
//Exercicio 14
#include <stdio.h>

int main()
{
	float salario, novoSalario, aumento;

	printf("\nSalário: ");
	scanf("%f", &salario);

	if (salario <= 300)
	{
		aumento = 50.0 / 100.0 * salario;
		novoSalario = salario + aumento;
	}
	else if ((salario > 300) && (salario <= 500))
	{
		aumento = 40.0 / 100.0 * salario;
		novoSalario = salario + aumento;
	}
	else if ((salario > 500) && (salario <= 700))
	{
		aumento = 30.0 / 100.0 * salario;
		novoSalario = salario + aumento;
	}
	else if ((salario > 700) && (salario <= 800))
	{
		aumento = 20.0 / 100.0 * salario;
		novoSalario = salario + aumento;
	}
	else if ((salario > 800) && (salario <= 1000))
	{
		aumento = 10.0 / 100.0 * salario;
		novoSalario = salario + aumento;
	}
	else
	{
		aumento = 5.0 / 100.0 * salario;
		novoSalario = salario + aumento;
	}
	
	printf("\nNovo salário: R$ %.2f \n\n", novoSalario);

	return 0;
}
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
//Exercicio 18
#include <stdio.h>

int main()
{
	int idade;

	printf("\nDigite a idade: ");
	scanf("%d", &idade);

	if (idade >= 0)
	{
		if (idade >= 18)
		{
			printf("\nMaior de idade. \n\n");
		}
		else
		{
			printf("\nMenor de idade. \n\n");
		}
	}
	else
	{
		printf("\nA idade não pode ser um número negativo. \n\n");
	}

	return 0;
}
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
//Exercicio 21
#include <stdio.h>
#include <string.h>

int main()
{
	float preco;
	int codigo;
	char origem[128];

	printf("\nPreço: ");
	scanf("%f", &preco);

	printf("Código: ");
	scanf("%d", &codigo);

	if ((codigo < 1) || (codigo > 30))
	{
		printf("\nCódigo inválido. \n\n");
	}
	else
	{
		if (codigo == 1)
		{
			strcpy(origem, "Sul.");
		}
		else if (codigo == 2)
		{
			strcpy(origem, "Norte.");
		}
		else if (codigo == 3)
		{
			strcpy(origem, "Leste.");
		}
		else if (codigo == 4)
		{
			strcpy(origem, "Oeste.");
		}
		else if ((codigo == 5) || (codigo == 6))
		{
			strcpy(origem, "Nordeste.");
		}
		else if ((codigo >= 7) && (codigo <= 9))
		{
			strcpy(origem, "Sudeste.");
		}
		else if ((codigo >= 10) && (codigo <= 20))
		{
			strcpy(origem, "Centro-oeste.");
		}
		else if ((codigo >= 21) && (codigo <= 30))
		{
			strcpy(origem, "Nordeste.");
		}
	printf("\n%s\n\n", origem);

	}

	return 0;
}
//Exercicio 22
#include <stdio.h>

int main()
{
	int idade, grauDeRisco;
	float peso;

	printf("Idade: ");
	scanf("%d", &idade);

	printf("Peso: ");
	scanf("%f", &peso);

	if ((idade > 0) && (idade < 20))
	{
		if ((peso > 0) && (peso <= 60))
		{
			grauDeRisco = 9;
		}
		else if ((peso > 60) && (peso <= 90))
		{
			grauDeRisco = 8;
		}
		else if (peso > 90)
		{
			grauDeRisco = 7;
		}
	}
	else if ((idade >= 20) && (idade <= 50))
	{
		if ((peso > 0) && (peso <= 60))
		{
			grauDeRisco = 6;
		}
		else if ((peso > 60) && (peso <= 90))
		{
			grauDeRisco = 5;
		}
		else if (peso > 90)
		{
			grauDeRisco = 4;
		}
	}
	else if (idade >= 50)
	{
		if ((peso > 0) && (peso <= 60))
		{
			grauDeRisco = 3;
		}
		else if ((peso > 60) && (peso <= 90))
		{
			grauDeRisco = 2;
		}
		else if (peso > 90)
		{
			grauDeRisco = 1;
		}
	}

	printf("\nGrupo de risco %d \n\n", grauDeRisco);

	return 0;

}
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
