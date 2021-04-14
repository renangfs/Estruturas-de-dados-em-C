#include <stdio.h>
#include <math.h>
#define M_P 3.141592265358979323846
float areaCirculo(float raio){
	return M_P * pow(raio, 2);
	printf("\nArea do circulo= %.4f", areaCirculo(raio));
}

int main(){
	int areaCirculo=0;
    float raio=0;	
	printf("Digite o raio da circuferencia:\n");
	scanf("%f", &raio);
	printf("\nArea do circulo= %.4f", areaCirculo(raio));
	
	
    return 0;   
}
