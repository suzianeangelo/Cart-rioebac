
#include<stdio.h>  //biblioteca comunicação com o usuário
#include<stdlib.h> //biblioteca alocação de espaço
#include<locale.h> //biblioteca de alocação de texto por região
#include<string.h> //biblioteca de string



int inserir()
{
	setlocale (LC_ALL, "Portuguese");
	char arquivo[40];
	char cpf[40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	
	printf("Digite o CPF:");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); // copia valores de string
	
	FILE *file; //cria um arquivo
	file =fopen(arquivo, "w");
	fprintf(file,cpf); //salva o valor da variável
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, "\n");
	fclose(file);
	
	printf("Digite o nome:");
	scanf("%s", nome);
	
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
		
	file = fopen(arquivo, "a");
	fprintf(file, "\n");
	fclose(file);
	
	printf("Digite o sobrenome:");
	scanf("%s", sobrenome);
	
	
	file=fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
		
	file = fopen(arquivo, "a");
	fprintf(file, "\n");
	fclose(file);
	
	printf("Digite o cargo:");
	scanf("%s", cargo);
	
	
	file=fopen(arquivo, "a");
	fprintf(file, cargo);
	fclose(file);
	
		
	file = fopen(arquivo, "a");
	fprintf(file, "\n");
	fclose(file);
	
	
	
}

int consultar()
{
	setlocale (LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf:\n\n");
	scanf("%s", cpf);
	
	FILE *file;
	file= fopen(cpf, "r");
	
	if(file==NULL)
	{
		printf("CPF não cadastrado!\n");
	}
	
	while(fgets(conteudo, 200, file)!=NULL)
	{
		printf("\nInformações do usuário:");
		printf("%s", conteudo);
		printf("\n");
		
	}
	system("pause");
	
}

int deletar()
{
	setlocale (LC_ALL, "Portuguese");
	printf("Você escolheu a opção deletar nomes!\n\n");
	system("pause");
	
}
int main()
{
	
	int opcao=0; //Definindo variáveis
	int laco=1; 
	
	for(laco=1;laco=1;)
	{
	
	
	system("cls");
	
	
	
	setlocale (LC_ALL, "Portuguese"); //Definindo linguagem 
	
	 	printf ("#####Cartório EBAC##### \n\n"); 
	 	
		printf("Escolha a opção desejada: \n\n\n"); //início menu
		printf("\t1- Insira um nome \n\n");
		printf("\t2- Consulte um nome \n\n");
		printf("\t3- Exclua um nome \n\n"); 
		printf("Digite a opção:");// fim menu 
		
		scanf("%d",&opcao); //armazenando escolha do usuário
		
		system("cls");
		
		switch(opcao)//início da seleção
		{
			case 1:
			inserir();
			break;
		
	
			case 2:
			consultar();
			break;
			
			
        	case 3:		
			deletar();
			break;
			
			default:
			printf("Não existe a opção escolhida\n\n");
			system("pause");
			break;//final da seleção
			
		
	}
	
}
}
