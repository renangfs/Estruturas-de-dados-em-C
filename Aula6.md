### 09/04/2021
link : https://web.microsoftstream.com/video/b116be1d-c2b0-4bf8-a9d9-f0e4beb055a1
<h1 align="center">Modularização</h1>
<h4>A modularização visa a decomposição de algoritmos em módulos para dominar a complexidade e organizar o processo de programação.</h4>

- funções = passagem por valor
- scanf = passagem por referência
- variaveis declaradas dentro das funçoes só são validas dentro das funções
- as funçoes so podem interagir com a outra por referencia
<img src="https://user-images.githubusercontent.com/61218420/114648451-2f35ca00-9cb5-11eb-89da-179c335eb71f.png" width="800">


Exercicio area do circulo: https://github.com/renangfs/Estruturas-de-dados-em-C/blob/main/Area_dCirculo.cpp

Exercicio superfície da esfera: https://github.com/renangfs/Estruturas-de-dados-em-C/blob/main/Area_sEsfera.cpp

Exercicio area do cilindro: https://github.com/renangfs/Estruturas-de-dados-em-C/blob/main/Area_dCilindro.cpp
<br>
<br>
<img src="https://user-images.githubusercontent.com/61218420/114648356-09a8c080-9cb5-11eb-8652-db85279e3196.png" width="800">
<br>
<br>





      #include <stdio.h>
      //ponteiro num (*num) ponteiro é um tipo de variavel que so armazena um endereço de mamoria
      void incrementa_num(int *num){//recebe o endereço de num
        *num=*num+1;//num  recebe mais 1
        printf("Num incrementa num: %d\n",*num);
      }

      int main(){
        int num;
        num=10;
        incrementa_num(&num);//passa o endereco de num
        printf("Num da main: %d\n", num);
        return 0;
      }
<hr>
<h3>Exemplo de um programa ligado a 2 sub programas</h3>


            #include <stdio.h>
            void incrementa_num(int *num){
                  (*num)++; //*num = *num + 1;
                  printf("\nNum incrementa_num = %d", *num);
            }
            void decrementa_num(int *num){
                  (*num)--; //*num = *num + 1;
                  printf("\nNum decrementa_num = %d", *num);
            }
            int main(){
                  int num, opcao=0;
                  num = 10;
                  printf("\nOpcoes: \n1- Incrementar valor.\n2- Decrementar valor.");
                  scanf("%d", &opcao);
                  if(opcao==1){
                        incrementa_num(&num);
                        printf("\nNum main = %d\n", num);
                  } else {
                        decrementa_num(&num);
                        printf("\nNum main = %d\n", num);
                  }
                  return 0;
            }
             <hr>
  <h3> variável global: pode ser usada por todad funções </h3>
  <h3> variavel local : pode ser usada somente no local em que foi declarada </h3>
  
            #include <stdio.h>
            int varGlobal=10;
            void incrementa_varGlobal(){
                  int num = 5;
                  varGlobal++;
                  printf("\nvarGlobal = %d", varGlobal);
                  printf("\nvnum = %d", num);
            }
            void decrementa_varGlobal(){
                  int num = 10;
                  varGlobal--;
                  printf("\nvarGlobal = %d", varGlobal);
                  printf("\nvnum = %d", num);
            }
            int main(){
                  int num=20;
                  printf("\nvarGlobal = %d", varGlobal);
                  incrementa_varGlobal();
                  printf("\nvarGlobal = %d", varGlobal);
                  decrementa_varGlobal();
                  printf("\nvarGlobal = %d", varGlobal);
                  printf("\nvnum = %d", num);
                  return 0;
            }
