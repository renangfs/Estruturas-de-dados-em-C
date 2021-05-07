#include <stdio.h>
#include <math.h>
//solução prova 07/05/2021
float reajust_sal(float antigo_sal,float porcentual,float *val_reajust){
	 *val_reajust = antigo_sal;
	 antigo_sal = porcentual * (antigo_sal/100);	
	 *val_reajust = *val_reajust + antigo_sal;
}
int main(){
	float antigo_sal,porcentual,val_reajust=0;
    	printf("salario a ser reajustado:...");
    	scanf("%f", &antigo_sal);
    	printf("porcentual de reajuste:...");
    	scanf("%f", &porcentual);
    	reajust_sal(antigo_sal,porcentual,&val_reajust);
    
   	printf("\nSalario reajustado:%.2f", val_reajust);
    
}
