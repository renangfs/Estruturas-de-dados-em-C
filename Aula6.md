### 09/04/2021
link : https://web.microsoftstream.com/video/b116be1d-c2b0-4bf8-a9d9-f0e4beb055a1
<h1 align"center">Modularização</h1>
<h4>É a divisão do codigo em modulos</h4>

- funções = passagem por valor
- scanf = passagem por referência
- variaveis declaradas dentro das funçoes só são validas dentro das funções
- as funçoes so podem interagir com a outra por referencia

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
