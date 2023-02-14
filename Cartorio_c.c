
#include<stdio.h>  //biblioteca comunica��o com o usu�rio
#include<stdlib.h> //biblioteca aloca��o de espa�o
#include<locale.h> //biblioteca de aloca��o de texto por regi�o
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
	fprintf(file,cpf); //salva o valor da vari�vel
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
		printf("CPF n�o cadastrado!\n");
	}
	
	while(fgets(conteudo, 200, file)!=NULL)
	{
		printf("\nInforma��es do usu�rio:");
		printf("%s", conteudo);
		printf("\n");
		
	}
	system("pause");
	
}

int deletar()
{
	setlocale (LC_ALL, "Portuguese");
	printf("Voc� escolheu a op��o deletar nomes!\n\n");
	system("pause");
	
}
int main()
{
	
	int opcao=0; //Definindo vari�veis
	int laco=1; 
	
	for(laco=1;laco=1;)
	{
	
	
	system("cls");
	
	
	
	setlocale (LC_ALL, "Portuguese"); //Definindo linguagem 
	
	 	printf ("#####Cart�rio EBAC##### \n\n"); 
	 	
		printf("Escolha a op��o desejada: \n\n\n"); //in�cio menu
		printf("\t1- Insira um nome \n\n");
		printf("\t2- Consulte um nome \n\n");
		printf("\t3- Exclua um nome \n\n"); 
		printf("Digite a op��o:");// fim menu 
		
		scanf("%d",&opcao); //armazenando escolha do usu�rio
		
		system("cls");
		
		switch(opcao)//in�cio da sele��o
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
			printf("N�o existe a op��o escolhida\n\n");
			system("pause");
			break;//final da sele��o
			
		
	}
	
}
}
