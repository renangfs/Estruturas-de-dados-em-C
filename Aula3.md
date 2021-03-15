### 14/03/2021
AULA 3

- estrutura de dados e como os dados são organizados
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

