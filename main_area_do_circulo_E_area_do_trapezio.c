#include <stdio.h>
#include <stdlib.h>
#define  pi 3.141592
//programa que pede o raio de um círculo qualquer para o usuário e calcula a área do mesmo
int main(int argc, char *argv[]) {
	
	float areaC, raio,altura, baseMenor, baseMaior, areaT;
	
	printf("Digite o valor do raio do circulo: ");
	 scanf("%f",&raio);
	
	areaC = pi*(raio*raio);
	
	printf("O valor da area de um circulo com %f de raio tem valor de = %f \n",raio,areaC);
	
   	
    printf("Agora vamos calcular a area de um trapezio!!! \n ");
	
	//calcular a area de um trapezio com a mesma metodologia de inserção de informação pelo usuário
	printf("Digite a altura do trapezio = ");
	 scanf("%f",&altura);
	
	printf("Digite a base menor do trapezio =  ");
	 scanf("%f",&baseMenor);
	
	printf("Digite a base maior do trapezio =  ");
	 scanf("%f",&baseMaior);
	
	areaT= ((baseMenor*baseMaior)*altura)/2;
	
	printf("O valor da area do trapezio com base maior de %f, base maior de %f e altura de %f tem o valor de = %f",baseMaior, baseMenor, altura, areaT);
	
	return 0;
	
}
