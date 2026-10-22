#include <stdio.h>
#include <stdlib.h>
/* Faça um programa que leia uma palavavra, e verefique se ela é um palindromo 
   
   Entrada: ABBA
   
   Saída: é um palimdromo
   
*/
int main(int argc, char *argv[]) {
	int i, j, pal;
	char palavra[20];
	
	pal = 1; 
	
	printf("Digite uma palavra para verificar se e um palindromo ou nao (max 20 caracteres): ");
	    scanf("%s", palavra); 
		
	
	j = 0;
	while (palavra[j] != '\0') {
		j++;
	}
	
	
	j = j - 1; 
	
	
	for (i = 0; i < j; i++,j--) {
		
		if (palavra[i] != palavra[j]) {
			pal = 0; 
			
		}
	}
	
	
	if (pal == 1) {
		printf("E um palindromo\n");
	} else {
		printf("NAO e um palindromo\n");
	}
	
	return 0;
}
