### 19/03/2021
link: https://web.microsoftstream.com/video/2fc17680-e294-4fd8-9ccb-e42d8e770592

<h3>Tema : Estruturas de dados HeterogêNEAS.</h3>
<h3>Objetivos</h3>
<h4>Entender como ocorre a alocação dinâmica de memória e sua diferença em relação á alocação estática, além de aplicar os recursos oferecidos por ponteiros
  para manipular a área de memóiria e os dados de forma mais precisa.<br><br>
  
  Utilizar as funções de alocação e liberação de memória , disponibilizadas pela linguagem C, para gerenciar o uso de mamoria reservada para uma aplicação, visando 
  maior eficiência e menor dispedício.
  
  ### Comandos que ajudam a alocar o espaço de memória para contrução da estrutura dinamica (listas,pilhas)

## Forma que o vetor encontra seus elementos:

<img src="https://user-images.githubusercontent.com/61218420/112569518-12e3f300-8dc3-11eb-9db6-281513ed39ec.png" width="700">

## Apenas vai funcionar se estiver consecutivo na memória

    #include <stdio.h>

    int main(){
        int i;
        int vet[5];
        for(i=0; i<5; i++){
            vet[i] = i*10;
        }
        for(i=0; i<5; i++){
            printf("\n Elemento/indice:%d valor: %d Memoria: %p",i,vet[i],&vet[i]);//indic...valor do vetor...Endereço da memoria
        }

       return 0; 
    }
<img src="https://user-images.githubusercontent.com/61218420/112572709-7b35d300-8dc9-11eb-9a09-3fe6222a47c4.png" width="700">
<img src="https://user-images.githubusercontent.com/61218420/112573943-0dd77180-8dcc-11eb-8467-5a7eda38440d.png" width="700">
<img src="https://user-images.githubusercontent.com/61218420/112576545-4168ca80-8dd1-11eb-9736-faecb38af5f3.png" width="700">
<h3>O calloc zera os valores o malloc deixa com lixo de memoria</h3>


