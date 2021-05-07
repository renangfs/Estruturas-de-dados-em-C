#include<stdio.h>
#include<stdlib.h>
//prova 3 periodo 07/04/2021
struct mesref{
    int mes;
    int ano;
};
struct data{
    int dia;
    int mes;
    int ano;
};
struct dados{
    int codConsumidor;
    struct mesref mesReferencia;
    struct data inicio;
    struct data fim;
    int ultimo_C;
    int C_atual;
    char bandeira[20];
    float valtot;
}dados[2];
int main(void)
{int i;

	for ( i = 0 ;i < 2 ;i++)
	{
	
	    printf("Digite o codigo do consumidor:...");
	    scanf("%d",&dados[i].codConsumidor);
	    
	    printf("Digite o mes de referencia:...");
	    scanf("%d",&dados[i].mesReferencia.mes);
	    
	    printf("Digite o ano de referencia:...");
	    scanf("%d",&dados[i].mesReferencia.ano);
	    
	    printf("Digite dia inicial de consumo:...");
	    scanf("%d",&dados[i].inicio.dia);
	    
	    printf("Digite mes inicial de consumo:...");
	    scanf("%d",&dados[i].inicio.mes);
	    
	    printf("Digite ano inicial de consumo:...");
	    scanf("%d",&dados[i].inicio.ano);
	    
	    printf("Digite dia final de consumo:...");
	    scanf("%d",&dados[i].fim.dia);
	    
	    printf("Digite mes final de consumo:...");
	    scanf("%d",&dados[i].fim.mes);
	    
	    printf("Digite ano final de consumo:...");
	    scanf("%d",&dados[i].fim.ano);
	    
	    printf("Digite o ultimo Kw/h consumido:...");
	    scanf("%d",&dados[i].ultimo_C);
	    
	    printf("Digite o consumo atual Kw/h consumido:...");
	    scanf("%d",&dados[i].C_atual);
	    
	    printf("Digite a Bandeira:...");
	    fflush(stdin);
	    gets(dados[i].bandeira);
	    
	    printf("Digite o valor total:...");
	    scanf("%f",&dados[i].valtot);
	}   
	for (i=0;i<2;i++)
	{
	    printf("\n\n\nCodigo do consumidor %d\n",dados[i].codConsumidor);
	    printf("Data de referencia %d/",dados[i].mesReferencia.mes);
	    printf("%d",dados[i].mesReferencia.ano);
	    printf("\nDia inicial de consumo %d/",dados[i].inicio.dia);
	    printf("%d/",dados[i].inicio.mes);
	    printf("%d",dados[i].inicio.ano);
	    printf("\nDia final de consumo %d/",dados[i].fim.dia);
	    printf("%d/",dados[i].fim.mes);
	    printf("%d\n",dados[i].fim.ano);
	    printf("Ultimo Kw/h consumido %d\n",dados[i].ultimo_C);
	    printf("Atual Kw/h consumido %d\n",dados[i].C_atual);
	    printf("Bandeira : %s\n",dados[i].bandeira);
	    printf("Valor Total R$: %.2f\n",dados[i].valtot);
	}
	return 0;
}
