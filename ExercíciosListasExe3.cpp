#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main()
{
struct lista;
typedef struct
{
char nome[100];
int notaFinal;
struct lista *prox;
struct lista *ant;
} lista;
lista *inicio= NULL;
lista *fim= NULL;
lista *aux;
int op;
do {
printf("1- Inserir Aluno na Lista\n");
printf("2- Consultar lista do inicio ao fim\n");
printf("3- Mostrar Alunos aprovados\n");
printf("4- Sair\n\n");
printf("Digite uma das opções\n\n");
scanf("%d",&op);
if((op<1)||(op>4))
printf("opcao invalida");
if (op == 1)
{
system("cls");
lista *novo = malloc (sizeof (lista));
printf("Digite o nome do aluno\n");
scanf("%s",&novo -> nome);
printf("Digite a nota\n");
scanf("%d",&novo->notaFinal);
if(inicio==NULL)//cai aqui quando é o primeiro membro da lista
{
novo->prox=NULL;
novo->ant=NULL;
inicio=novo;
fim=novo;
}
else//cai aqui do segundo pra frente
{
aux=inicio;
while(aux!=NULL && novo->notaFinal > aux->notaFinal)
{
aux=aux->prox;
if(aux==inicio)
{
novo->prox=inicio;
novo->ant=NULL;
inicio->ant=novo;
inicio=novo;
}
else if(aux==NULL)
{
fim->prox=novo;
novo->ant=fim;
fim=novo;
fim->prox=NULL;
}
else
{
novo->prox=aux;
aux->ant=novo;
}
}
}
system("cls");
}
