#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Elabore um programa que peça ao usuário para digitar 10 nuemros que sejam inteiros positivos, 
e ignore os negativos. E mostre na tela o resultado da soma e a média desses valores
--OBS: não precisa usar vetor, usem os laços da aula de hoje while e do-while*/


int main(int argc, char *argv[]) {
	
	int valor,i,n;
	i=0;
	n = 0;
	
	printf("Insira 10 valores a seguir\n ");
	
    while (i <10){
    	printf("Insira o valor numero %d = ",i+1);
    	scanf("%d",&valor);
    if (valor < 0) {
    	printf("Valor negativo, numero ignorado\n");
	}else {
		printf("Valor aceito\n");
		n = n + valor;
		i++;
		}
    	
	}


	printf("A soma e a media desses valores sao respectivamente = %d|%d",n,n/10);

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
