#include <stdio.h>
#include <math.h>

float reajust_sal(float ant_sal,float porcent,float *val_reajust){
	 *val_reajust = ant_sal;
	 ant_sal = porcent * (ant_sal/100);	
	 *val_reajust = *val_reajust + ant_sal;
}
int main(){
	float ant_sal,porcent,val_reajust=0;
    printf("salário a ser reajustado:");
    scanf("%f", &ant_sal);
    printf("porcentual de reajuste:");
    scanf("%f", &porcent);
    reajust_sal(ant_sal,porcent,&val_reajust);
    
    printf("Salario reajustado:%.2f", val_reajust);
    
}
