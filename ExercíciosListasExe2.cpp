#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct no{
	char nome[50];
	float salario;
	struct no *prox;
};
typedef struct no No;

struct f{
	No* inicio;
	No* fim;
};
typedef struct f Fila;

Fila *criaFila(){
	Fila *fi = (Fila*) malloc (sizeof(Fila));
	fi->inicio = NULL;
	fi->fim =NULL;
	return fi;
}
void inserir (Fila *fila,char nome[],float salario){//inserir
	No *novo;
	novo = (No*) malloc(sizeof(No));
	
	strcpy(novo->nome, nome);
	novo->salario=salario;
	novo->prox=NULL;
	
	if (fila->fim !=NULL){
		fila->fim->prox = novo;	
	}else{
		fila->inicio=novo;
	}
	fila->fim=novo;
}
bool filaVazia(Fila *fila){
	if (fila->inicio ==NULL){
		return true;					
	}else{
		return false;
	}
}
void mostrar (Fila *fila){
	No *aux;
	printf("-----Funcionarios cadastrados-----\n\n");
	if(filaVazia(fila)){
		printf("Fila vazia\n");
	}else{
		aux=fila->inicio;
		printf("Nome: %s\n",fila->inicio->nome);
		printf("Salario: %.2f\n\n",fila->inicio->salario);
		printf("Nome: %s\n",fila->fim->nome);
		printf("Salario: %.2f\n\n",fila->fim->salario);
		
		for (aux=aux->prox; aux->prox !=NULL;aux=aux->prox){
			printf("Nome: %s\n",aux->nome);
			printf("Salario: %.2f\n\n",aux->salario);
		}
	}
}
void maior(Fila *fila) {
	float maior;
	char nome[50];
	No *aux;
	aux = fila->inicio;
	if (fila->inicio==NULL){
		printf("Fila Vazia!\n");
	}else{
		maior=fila->inicio->salario;
		while(aux!=NULL){
			if((aux->salario>maior)){
				maior=aux->salario;
				strcpy(nome,aux->nome);	
			}
		aux=aux->prox;
		}
    printf("O funcionario com maior salario e: %s\n",nome);
	}	
}
void media(Fila *fila){
	int i=0;
	float media=0;
	No *aux;
	
	if (filaVazia(fila)){
		printf("Fila vazia\n");
	}else{
		aux=fila->inicio;
		while(aux){
			media+=aux->salario;
			i++;
			aux=aux->prox;
		}
		media=media/i;
	printf("A media salarial e: %.2f\n", media);
	}
}

int main(){
	char *nome[50];
	float sal;
	int opcao=0;
	Fila *fila;
	fila= criaFila();
	

	inserir(fila,"Renan",1232.76);
	inserir(fila,"Anderson",1234.76);
	inserir(fila,"Carlos",2323.76);
	inserir(fila,"Ana",1000.76);
	inserir(fila,"Thiago",2345.76);
	inserir(fila,"Matheus",8743.76);
	inserir(fila,"Diego",5645.76);
	inserir(fila,"Andre",2300.76);
	
printf("=============================\n");   
printf("Mostrar Cadastros --------- 1\n");
printf("Inserir Funcionario ------- 2\n");
printf("Maior salario digite ------ 3\n");//maior salario
printf("Media Salarial digite ----- 4\n");//media salarial 
printf("sair ---------------------- 5\n");
printf("=============================\n");   
do{ 
    printf("Digite a opcao desejada:");
	scanf("%d",&opcao);
	if (opcao == 1)	{
		mostrar(fila);
	}
	if (opcao == 2)	{
		printf("Nome:\n");
		scanf("%s",&nome);
		printf("Salario:\n");
		scanf("%f",&sal);
		printf("%s",nome);
		printf("%.2f\n",sal);
		//inserir(fila,*nome,*sal);//.............problemas ao inserir

	}
	else if (opcao == 3)	{
		maior(fila);
	}
	else if (opcao == 4)	{
		media(fila);
	}
	else if (opcao == 5)	{
		printf("Saindo...\n");
		break;
	}
	else {
	    printf("Opcao invalida!\n");
	}
  }while(opcao!=4);

    return 0;
}
