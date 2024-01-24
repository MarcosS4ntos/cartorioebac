# include  <stdio.h> // biblioteca de comunicaçaao com usuario
# include  <stdlib.h> // biblioteca de alocação de espaço de memória
# include  <locale.h> // biblioteca de alocações de texto por região
# include  <string.h> // biblioteca responsavel por cuidar das string

int registro() //funçao responsavel por cadastra pd usuarios no sistema
{
    //inicio criaçao variáveis/string
    char arquivo[40];  
    char cpf[40];
	char nome[40];
    char sobrenome[40];
    char cargo[40];
	//final criaçao variáveis/string
	   
	printf("Digite o CPF a ser cadastrado!");// coleta informaçaõ do usuario
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
	printf("Não foi possivel abrir o arquivo, não localizado!\\n");
	}
	
   	while(fgets(conteudo, 200, file) != NULL);
 {
	printf("\nEssas são as informações do usuario: ");
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
	printf("0 usuario não se encontra no sistema!.\n");
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
	
    printf("### CARTÓRIO DA EBAC ###\n\n");
    printf("Escola a opção desejada do menu:\n\n");
	printf("\t1 -Registra nomes\n");
	printf("\t2 -Consultar nomes\n");
    printf("\t3 -Deletar nomes\n");
    printf("\t4- Sair do sistema\n\n");
    printf("opção:");//Fim do menu
	 
    scanf("%d", &opcao);//armazenamdo a escolha do usuario
    
    system("cls");
    switch(opcao)
    {
		 
	case 1:
    registro(); //chamada de função	 
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
	printf("Essa opcao não està disponivel\n");
	system("pause");
	break;
   	//Final de seção
 }
         

   

}
}
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
 


