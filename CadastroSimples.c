#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main()
{
	struct cliente
	{
		char nome[80], endereco[80];
		char telefone[15];
		char idade[2];
	};
	
	struct cliente pessoas[100];
	int i, j, op;
	while(op != 3)
	{
		system("cls");
		printf("(((((((((((((((((MENU)))))))))))))))))\n");
		printf("Digite 1 para registrar um cliente:\n");
		printf("Digite 2 para visualizar os clientes cadastrados:\n");
		printf("Digite 3 para finalizar o programa:\n");
		scanf("%d", &op);
		if(op==1)
		{
				fflush(stdin);
				printf("Digite o seu nome cliente %d: ", i+1);
				gets(pessoas[i].nome);
				printf("Digite seu endereço: ");
				gets(pessoas[i].endereco);
				printf("Digite seu telefone: ");
				gets(pessoas[i].telefone);
				printf("Digite sua idade: ");
				gets(pessoas[i].idade);
				i++;
		}
		else if(op==2)
		{
			int numero = 1;
			for(j=0;j<=i;j++)
			{
				printf("\nOs dados do cliente numero %d e:\nNome: %s\nEndereço: %s\nTelefone: %s\nIdade: %s\n",numero, pessoas[j].nome, pessoas[j].endereco, pessoas[j].telefone, pessoas[j].idade);
				numero++;
			}
			getch();
		}
		else if(op==3)
		{
			system("cls");
			printf("Fechando...");
			getch();
		}
		else
		{
			printf("Numero invalido!!!");
		}
	}
}
