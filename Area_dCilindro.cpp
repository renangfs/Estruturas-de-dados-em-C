#include <stdio.h>
#include <math.h>
#define M_P 3.141592265358979323846
float areaCirculo(float raio){
	return M_P * pow(raio, 2);
}
float superficieEsfera(float raio){
	return 4 * M_P * pow(raio, 2);
}
float volumeCilindro(float raio,float altura){
	return M_P * pow(raio,2) * altura;
}

int main(){
	int areaCirc=0;
    float raio=0,altura=0;	
	printf("Digite o raio da circuferencia:\n");
	scanf("%f", &raio);
	printf("\nArea do circulo= %.4f\n", areaCirculo(raio));
	
    printf("Digite o raio da esfera:\n");
	scanf("%f", &raio);
	printf("\nArea da superficie esfera= %.4f\n", superficieEsfera(raio));
	
	printf("Digite o raio do cilindro:\n");
	scanf("%f", &raio);
	printf("Digite a altura do cilindro:\n");
	scanf("%f", &altura);
	printf("\n O volume do cilindro é : %.4f\n", volumeCilindro(raio,altura));
	
	
    return 0;     
}
