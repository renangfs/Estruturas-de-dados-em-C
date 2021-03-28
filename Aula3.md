### 14/03/2021
link: https://web.microsoftstream.com/video/2a3b8efd-bb4b-4475-889f-7b017262d3c2
AULA 3

- estrutura de dados e como os dados são organizados
<h1 align="center"> Estruturas: struct<h1>
       <hr>
<h2> homogeneos </h2>       
<h3>Conjunto de elementos de mesmo tipo que podem ser acessados por um subscrito (indice). Podem possuir uma dimensão (vetores) ou mais de uma (matrizes).</h3>
<h2> heterogeneos </h2>       
<h3>Conjunto de elementos que podem ser de mesmo tipo existente, inclusive outros agregados (structs, unions, vetores,...)</h3>
<h2> Struct </h2>     
<h3>Funciona como o registro que já conhecemos. A variavel é composta de vários elementos, que podem ser de tipos diferentes e ela possui espaço reservado na memória para armazenar os valores de todos os seus elementos simultâneamente.</h3>
       
        Ex. struct empregado
        { int matricula;
         float salario;
         char nome[31];
         };
<h2> Union </h2>   
<h3>Uma variavel do tipo union, apesar de possuir declaração semelhante a struct (basta substituir struct por union) sua finalidade é  declarar uma variável que ora pode assumir um valor de um tipo ora de outro. Seu objetivo é a economia de memória.</h3>
   
         Ex. union pessoa
          {
          char CPF[12];
          char CGC [20];
           };

<h1 align="center"> Apontadores (ponteiros)<h1>
<h3> o ponteiro é uma variavel que armazena endereço de memoria,o ponteiro aponta sempre para o endereço do primeiro byte e sabendo o tipo é possivel saber quantos byte ele ocupa.</h3>
<img src="https://user-images.githubusercontent.com/61218420/111085392-007dd580-84f6-11eb-898c-84824c32bbd1.png" width="500">
<img src="https://user-images.githubusercontent.com/61218420/111086496-1fcb3180-84fb-11eb-8e7f-d517ee149eda.png" width="700">
<img src="https://user-images.githubusercontent.com/61218420/111087029-29a26400-84fe-11eb-95d2-9482f53ebb5c.png" width="700">
<img src="https://user-images.githubusercontent.com/61218420/111088698-2fe90e00-8507-11eb-8c2a-c2ce22a9ed60.png" width="700">
       
        #include <stdio.h>
        #include <stdlib.h>
            int main() {
            inta = 202, *pa;
            printf("\nEnderecode a:%p\n", &a);
            pa= &a;// parecebe o endereço de a
            (*pa)++;// conteúdo apontado por paé incrementado de 1 (202 + 1 = 203)
            printf("\nValorde a foi alterado pelo ponteiro=%p valor de *pa=%d a=%d\n",pa, *pa, a);
            *pa++;// o valor de pa(endereço) foi incrementado para o próxima endereço// 
            (como é endereço de int, pula 4 bytes). 
            printf("\nValorde a foi alterado pelo ponteiro=%p valor de *pa=%d a=%d\n",pa, *pa, a); 
            return(0);}                   
       
<img src="https://user-images.githubusercontent.com/61218420/111088992-9b7fab00-8508-11eb-82c0-37d798680e13.png" width="800">

