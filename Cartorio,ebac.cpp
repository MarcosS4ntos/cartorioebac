# include  <stdio.h> // biblioteca de comunica�aao com usuario
# include  <stdlib.h> // biblioteca de aloca��o de espa�o de mem�ria
# include  <locale.h> // biblioteca de aloca��es de texto por regi�o
# include  <string.h> // biblioteca responsavel por cuidar das string

int registro() //fun�ao responsavel por cadastra pd usuarios no sistema
{
    //inicio cria�ao vari�veis/string
    char arquivo[40];  
    char cpf[40];
	char nome[40];
    char sobrenome[40];
    char cargo[40];
	//final cria�ao vari�veis/string
	   
	printf("Digite o CPF a ser cadastrado!");// coleta informa�a� do usuario
	scanf("%s",cpf);//%s refere-se a string
		
	strcpy (arquivo, cpf);    // Responsavel por copiar os valore das string
	
    FILE *file; // cria o arquivo
    file = fopen(arquivo,"w"); //cria o arquivo e o "w" significa escrever
	fprintf(file,cpf);// salvo o valor do arquivo
	fclose(file);// fecha o arquivo
	
    file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
	
    printf("Digite o nome a ser cadastrado!");
    scanf("%s",nome);
    
	
    file = fopen(arquivo, "a");//cria o arquivo e o "a" significa escrever
	fprintf(file, nome,",");// salvo o valor do arquivo
	fclose(file);// fecha o arquivo
	
		
    printf("Digite o sobre nome a ser cadastrado:");
    scanf("%s",sobrenome);
    
	
    file = fopen(arquivo,"a");//cria o arquivo e o "a" significa escrever
	fprintf(file,sobrenome,",");// salvo o valor do arquivo
   	fclose(file);// fecha o arquivo
   	
	
	file = fopen(arquivo, "a");
    fprintf(file,",");
    fclose(file);
    
		
	printf("Digite o cargo a ser cadastrado:");
	scanf("%s",cargo);
	
		
	file = fopen(arquivo, "a");//cria o arquivo e o "a" significa escrever
	fprintf(file,cargo);// salvo o valor do arquivo
	fclose(file);// fecha o arquivo
	
		
	system("pause");	//para o programa
}


int consulta()
{
	setlocale(LC_ALL, "Portuguese");// Definindo a linguagem
	
    char cpf[40];
	char conteudo[200];
	
    printf("Digite o CPF a ser consultado:");
	scanf("%s",cpf);
	
	
	FILE *file; // consulta o arquivo
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
	printf("N�o foi possivel abrir o arquivo, n�o localizado!\\n");
	}
	
   	while(fgets(conteudo, 200, file) != NULL);
 {
	printf("\nEssas s�o as informa��es do usuario: ");
	printf("%s", conteudo);
	printf("\n\n");
	
		
	system("pause");
	
	}
	
	
	
}


int deletar()
{
	char cpf[40];
	
	
	printf("Digete o cpf a ser deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file; // consulta arquivo
	file = fopen(cpf,"r"); //deleta o arquivo
	
	if(file == NULL);
	
	{
	printf("0 usuario n�o se encontra no sistema!.\n");
	system( "pause");
		
		
	}
}

int main()
    {
	    
	int opcao=0;// Definindo variaveis
    int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	
	system("cls"); //responsavel por limpa a tela
	
	
	setlocale(LC_ALL, "Portuguese");// Definindo a linguagem
	
    printf("### CART�RIO DA EBAC ###\n\n");
    printf("Escola a op��o desejada do menu:\n\n");
	printf("\t1 -Registra nomes\n");
	printf("\t2 -Consultar nomes\n");
    printf("\t3 -Deletar nomes\n");
    printf("\t4- Sair do sistema\n\n");
    printf("op��o:");//Fim do menu
	 
    scanf("%d", &opcao);//armazenamdo a escolha do usuario
    
    system("cls");
    switch(opcao)
    {
		 
	case 1:
    registro(); //chamada de fun��o	 
    break;
    	
    case 2:
    consulta();	    
	break;
	    
	case 3:
   	deletar();
	break;
	
	case 4:
	printf("Obrigado por utilizar o sistema!\n");
	return 0;
	break;
	
	 	
	default:
	printf("Essa opcao n�o est� disponivel\n");
	system("pause");
	break;
   	//Final de se��o
 }
         

   

}
}
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
 


