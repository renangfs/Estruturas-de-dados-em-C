### Aula 05/03/2021
link: https://web.microsoftstream.com/video/565df775-266f-42d1-8081-0f6583bbab12

### Vetor--> todos os elementos possuem o mesmo nome e são diferenciados pelo indice, na Linguagem C o indice é iniciado no 0 
  <h1 align="center"> Exemplo de Matriz </h1>
  
       #include <stdio.h>// Matrix 5x5
                  #include <stdlib.h>
                  int main() {
                      int l,c;
                      int mat[5][5];
                      for(l=0; l<5; l++){
                          for(c=0;c<5;c++){
                              printf("\nDigiteo valor:[%d][%d]", l, c);
                              scanf("%d", &mat[l][c]);}}
                        printf("\n\n");
                              for(l=0; l<5; l++){
                                  for(c=0;c<5;c++){
                                   printf("\t%5d", mat[l][c]);}
                                   printf("\n"); 	
                              }	
                        system("pause");	
                  }	           
<img src="https://user-images.githubusercontent.com/61218420/111077837-660b9b00-84d1-11eb-8c69-90a29de276b8.png" width="600">)
                 
<img src="https://user-images.githubusercontent.com/61218420/111009896-96d5be00-8373-11eb-9764-d77b487299df.png" width="600">
<img src="https://user-images.githubusercontent.com/61218420/111011105-2fba0880-8377-11eb-82b2-a7773d5ea449.png" width="500">


<a href="https://web.fe.up.pt/~ee96100/projecto/Tabela%20ascii.htm">Tabela ASCII</a><br>
<h1 align="center">Estruturas: struct<h1>
  <h4>Tipos de dados estruturados<h4>
    
 - Agregados Homogeneos - sequencia de valores de um mesmo tipo:
 - Agregados Heterogêneos - sequência de valores de diferentes tipos   
<img src="https://user-images.githubusercontent.com/61218420/111021827-cd302f00-83ad-11eb-8189-ed322774be74.png" width="700">

- a variavel double é usadop para pegar os numeros mais precisos
  
