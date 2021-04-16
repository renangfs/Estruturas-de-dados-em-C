#include <iostream>
#include <stdio.h>
#include <math.h>

float equa2gral(float a,float b,float c,float *x1,float *x2){
	 *x1 = ((-1*b) + sqrt(pow(b,2) - (4 * a * c)))/(2*a);
	 *x2 = ((-1*b) - sqrt(pow(b,2) - (4 * a * c)))/(2*a);
}
int main(){
	float a,b,c,x1,x2;
	printf("\nDigite o primerio termo da Equação (A):..\n");
	scanf("%f", &a);
	printf("\nDigite o segundo termo da Equação  (B):..\n");
	scanf("%f", &b);
	printf("\nDigite o terceiro termo da Equação (C):..\n");
	scanf("%f", &c);
	equa2gral(a,b,c,&x1,&x2);//necessaria ordem dos parametros igual da função
	
	printf("\n\n resultado: %.2f e %.2f\n", x1,x2);
	system("pause");
	return 0;
	
}
