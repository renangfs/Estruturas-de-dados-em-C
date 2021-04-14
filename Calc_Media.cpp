#include <stdio.h>
#include <math.h>
#define M_P 3.141592265358979323846
float media(float v1,float v2,float v3,float v4,float v5){
	return (v1+v2+v3+v4+v5)/5.0;
}

int main(){
	float va1,va2,va3,va4,va5;
	
	printf("V1");
 	scanf("%f",&va1);
	printf("V2");
	scanf("%f",&va2);
	printf("V3");
	scanf("%f",&va3);
	printf("V4");
	scanf("%f",&va4);
	printf("V5");
	scanf("%f",&va5);

	printf("Media: %.2f", media(va1,va2,va3,va4,va5));
	
    return 0;     
}
