#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que leia 10 números,
mostre o maior entre os 5 primeiros e o menor entre os restantes */

int compara (int a, int b){
	if (a < b) return b;
	else return a;
}
int compara_menor (int a, int b){
	if (a > b) return b;
	else return a;
}

int main(int argc, char *argv[]) {
	
	int valores[10];
	int maior , menor, i;
	
	printf("Insira os valores: \n");
	
	for (i=0; i<10; i++){
		scanf("%d",&valores[i]);
	}
	for (i=1 , maior=valores[0] ; i<5; i+=2){
		
		int temp = compara(valores[i] , valores [i+1]); 
		maior = compara(maior , temp);
	}
	for (i=6 , menor=valores[6] ; i<10; i+=2){
		
		int temp = compara_menor(valores[i] , valores [i+1]); 
		menor = compara_menor(menor , temp);
	}
	printf("\n MAIOR ENTRE OS 5 PRIMEIROS= %d", maior);
	printf("\n MENOR ENTRE OS RESTANTES=   %d", menor);
	
	return 0;
}
