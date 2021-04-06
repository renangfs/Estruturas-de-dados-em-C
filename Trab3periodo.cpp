      #include <stdio.h>
      #include <stdlib.h>
      #include <string.h>
      #include <locale.h>
      #define VAR 3

      int main () {
        setlocale(LC_ALL,"portuguese");
          struct aluno{
              int matricula;
              char nome[40];
          }escolha[VAR];

          int i,pmatricula,metodo,matricula,posicao=0;
          char pnome[40];

              for(i=0; i<VAR ; i++){
                  printf ("matricula: ");
                  scanf("%d%*c", &escolha[i].matricula);
                  printf ("nome: ");
                  scanf("%s%*c", escolha[i].nome);
              }
          printf(" ************************************\n");
          printf("   Digite um metodo de pesquisa\n");
          printf("   Matricola-------------<1>\n");
          printf("   Nome------------------<2>\n");
          printf(" ***********************************\n");
          scanf("%d", &metodo);
          if(metodo == 1){
              printf("\nDigite uma matricula para pesquisa:...");
              scanf("%d", &pmatricula);

              for(i=0; i<VAR; i++){
                  if(escolha[i].matricula == pmatricula){
                      printf("\n matricula: %d",escolha[i].matricula);
                      printf("\n nome: %s",escolha[i].nome);				
                  }
              }
          }
          else if(metodo == 2){
            printf(" \n Encontre o nome: ");
          scanf("%s%*c", pnome);
          printf(" \n Palavra pesquisada: %s\n", pnome);
          for(i=0; i<VAR; i++) {
              if(strcmp(pnome, escolha[i].nome)== 0) {
                  posicao = i;
                  printf(" \n ************************* Vetor %d **************************",i+1);
                printf(" \n Matricula: %d ", escolha[posicao].matricula);
                printf(" \n Nome: %s ", escolha[posicao].nome);
          }   else {
                  posicao = -1;
            }


            }   if(posicao = -1) {
                  printf("\n ----------------------------------------------------------------\n");
                printf(" \n Registro não encontrado! ");
              } else {

              }

          }
      return (0);
      }
