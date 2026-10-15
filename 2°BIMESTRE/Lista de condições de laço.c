#include <stdio.h>
#include <stdlib.h>

/* Lista de exercicios */

int main(int argc, char *argv[]) {
	
	int i, j, k, n, r;
	// Vamos relembrar algumas estruturas que vimos essa semana
	/* Laço "for" repete um conjunto de intruções, de um valor
	   inicial (inicializção). até uma determinada condição,
	   realizando ma operaão (incremento) a cada execução [sempre]
	*/
	/*fo(i=0, j=1; i<10; i++ j--){
		printf("Esse e o laço FOR");	
	}*/
	
 	/* Laço "WHILE" (enquanto), que testa se uma condição é vedadeira,
 	   caso seja, executa um bloco de comandos sendo repetido até que 
	   a condição seja avaliada como verdadeira.*/
	
	while (i<10){
	
		printf("%d, laco DO", i);
	    
	    if(n%2 == 0) i++;
	    n++;
    }		
	
	/* Laço "DO WHILE", semenlhant aolaço while, porém antes de realizar
	   a verificação ele executa o conjunto de intruções para após a 
	   execução realizar a verificação d condição.*/
	   
	   do{
		printf("%d, laco DO", i);
	    
	    if(n%2 == 0) i++;
	    n++;
	}while (i<10);
	   
	
	// Exerciio 1;
	/* Elabore um programa que permita a entrada de 3 valores.
	   E conte do primeiro valor inserido, até o segundo valor, com o
	   passo da contaem dado pelo terceiro valor*/
	// ex: 1,8,2 >> cntar de 1 a 8, com passo 2 = 3,5,7.
	
	
	int ini, fim , passo,  o;
	
	printf("--Insira 3 valores a segui para a contagem--\n");
	printf("De onde a contagem vai comecar= ");
		scanf("%d",&ini);
	printf("\nAte onde a contagem ira= ");
		scanf("%d",&fim);
	printf("\nE de quanto em quanto a contagem sera feita=  ");
		scanf("%d",&passo);
	
	
	
	for (o=ini; o<=fim; o+=passo){
		printf("%d\n",o);
	}
		
	
	// Exercicio 2;
	/* Faça um programa que receba um número n e realize a soma ds n primeiros 
	   termos da sequência definida como:
	   [S] = 1/2; 1/4; 1/8; 1/16... N]*/
	   
	int num, l;
	float soma, contagem;
	
	contagem = 0.5;
	
	
	
	printf("Insira um numero= ");
		scanf("%d",&num);
	
	for (l = 0;  l <= num; l++) {
		soma = soma + contagem;
		contagem = contagem * 0.5;
	}
	
	
	printf("%f\n",soma);
	
	
	
	
	
	
	// Exercicio 3;
	/* Crie um prograa que exiba na tela , o triângulo de pascal*/
	
	int g, b, m;
    int f;

    printf("Digite o numero de linhas para o Triangulo de Pascal: ");
    scanf("%d", &g);

    for (b = 0; b < g; b++) {
        for (m = 0; m < g - b - 1; m++) {
            printf("  ");
        }

        f = 1;
        for (m = 0; m <= b; m++) {
            printf("%d   ", f);
            f = f * (b - m) / (m + 1);
        }
        printf("\n");
    }
	
	
	return 0;
	
}
