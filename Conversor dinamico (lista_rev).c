#include <stdio.h>
#include <stdlib.h>

float calc_c (float temp){
	
	float F;
	
	F = (temp * 9/5) + 32;
	return F;
}

float calc_f (float temp){
	
	float C;
	
	C = (temp - 32) * 5/9;
	
	return C;
}
int main(int argc, char *argv[]) {
	
	float temp;
	int op;
	
	printf("Conversor de temperatra!\n");
	printf("\n");
	
	printf("1. C--->F\n");
	printf("2. F--->C\n");
	
	printf("Escolha= ");
	scanf("%d",&op);
	
	printf("Insira a temperatura= ");
	scanf("%f",&temp);
	
	switch (op){
		
		case 1:
			printf("A conversao de %2.f para Fahrenheit e de %2.f",temp,calc_c(temp));
			break;
		case 2:
			printf("A conversao de %2.f para Celcius e de %2.f",temp,calc_c(temp));
			break;
		default:
			printf("ERRO!");
	}
	
	
	return 0;
}
