#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int nota_100, nota_50 , nota_10 , nota_5 , nota_2 , nota_1 , valor, resto ;
	
	printf("Digite o valor que deseja sacar: ");
		scanf("%d",&valor);
	
	nota_100 = valor/100;
		resto = valor%100;
	
	nota_50 = resto/50;	
		resto = resto%50;
	
	nota_10 = resto/10;
		resto = resto%10;
	
	nota_5 = resto/5;
		resto = resto%5;
		
	nota_1 = resto/1;
		
	
	printf("O saque sera efetuado com as seguintes notas %d de 100, %d de 50, %d de 10, %d de 5 e %d de 1 = %d",nota_100,nota_50,nota_10,nota_5,nota_1,valor);
	
	return 0;
}
