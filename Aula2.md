### Aula 05/03/2021

### vetor todos os elementos possuem o mesmo nome e são diferenciados pelo indice, na Linguagem C o indice é iniciado no 0 
## Exemplo de Matriz 
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
      
  
