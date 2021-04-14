#include <stdio.h>
#include <math.h>
#define M_P 3.141592265358979323846
float areaCirculo(float raio){
	return M_P * pow(raio, 2);
}

int main(){
	int areaCirc=0;
    float raio=0;	
	printf("Digite o raio da circuferencia:\n");
	scanf("%f", &raio);
	printf("\nArea do circulo= %.4f\n", areaCirculo(raio));
	
    return 0;   
}
