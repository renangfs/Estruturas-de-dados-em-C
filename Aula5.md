### 19/03/2021

link: https://web.microsoftstream.com/video/2fc17680-e294-4fd8-9ccb-e42d8e770592

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
