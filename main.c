#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592


int main(int argc, char *argv[]) {
	
	//Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.
	
	int ano , idade , eano ;
	
	printf("Vamos descobrir o ano de seu nascimento!\n");
	printf("\n");
	
	printf("Digite a sua idade= ");
	 scanf("%d",&idade);
	
	printf("Digite o ano atual= ");
	 scanf("%d",&ano);
	
	eano = ano-idade;
	
	printf("Voce nasceu no ano = %d",eano);
	printf("\n");

	//Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo). A fórmula de conversão é M = K/3,6, sendo K a velocidade em km/h e M em m/s.
	
	float km, ms;
	
	printf("Vamos converter km/h em m/s \n");
	printf("\n");
	
	printf("Digite a velocidade em km/h =  ");
	 scanf("%f",&km);
	
	ms = km/3.6;
	
	printf("A velocidade %f em km/h tem valor de %f em m/s",km,ms);
	printf("\n");
	//Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
	
	float real , cota , dolar;
	
	printf("Calculadora de dolar \n");
	printf("\n");
	
	printf("Digite a cotacao do dolar = ");
	 scanf("%f",&cota);
	 
	printf("Digite o valor em reais = ");
	 scanf("%f",&real);
	 
	dolar = real/cota;
	 
	printf("Convertendo %.2f reais em dolar na cotacao atual voce tera um valor de = %.2f",real,dolar);
	printf("\n");
	//Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. 
	//A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
	
	float c , f;
	
	printf("Vamos converter graus celsius em fahrenheit \n");
	printf("\n");
	
	printf("Digite a temperatura em Celsius = ");
	 scanf("%f",&c);
	
    f = c*(9.0/5.0) + 32.0;
    
    printf("%.2f em celsius em fahrenheit tem valor de = %.2f",c,f);
    printf("\n");
    
    //Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é R = G * p/180, sendo G o ângulo em graus e R em radianos e p = 3.141592.
	 
    float grau , radiano ;
    
    printf("Vamos converter graus em radianos");
    printf("\n");
    
    printf("Digite o valor em graus = ");
    scanf("%f",&grau);
    
    radiano = grau*(pi/180);
    
    printf("O seu angulo %.2f em radianos tem valor de = %.2f",grau,radiano);
	printf("\n");
	
	//Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.
	
	int num , ant , suc ;
	
	printf("Digite um numero = ");
	scanf("%d,",&num);
	
	ant = num -1.0;
	suc = num +1.0;
	
	printf("O antecessor e o sucessor desse numero sao respectivamente = %d e %d",ant,suc);
	printf("\n");
	
	/*A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que:

   O primeiro receberá 46% do total.
   O segundo receberá 32% do total.
   O terceiro receberá o restante.

  Calcule e imprima a quantia recebida por cada um dos ganhadores.*/

    float g1 , g2 , g3 ;
    
    
    g1 = 780.000*0.46;
    g2 = 780.000*0.32;
    g3 = 780.000-(g1+g2);
    
    printf("O primeiro ganhador recebera = %f \no segundo ganhador recebera = %f \ne o terceiro ganhador ganhara= %f",g1,g2,g3);
	printf("\n");
	
	//Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos
	
	int tempo, hr , min , sec;
	
	printf("Digite um tempo em segundos= ");
	scanf("%d",&tempo);
	
	min = tempo/60;
	hr = min/60;
	sec = tempo;
	
	printf("Este tempo no formato de (00:00:00) e igual a = %.0d:%.0d:%.0d",hr,min,sec);
	printf("\n");
	
	/*Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L. 
	Para isso, ele gostaria que você o auxiliasse através de um simples programa. Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h). 
	Assim, pode-se obter a distância percorrida e, em seguida, calcular quantos litros seriam necessários. 
	Mostre o valor com 3 casas decimais após o ponto.*/

	float distancia , vlm , time, gasosa ;
	
	printf("Digite o tempo gasto na viagem em horas = ");
	scanf("%f",&time);
	
	printf("Digite a velocidade media (em km/h)= ");
	scanf("%f",&vlm);
	
    distancia = time*vlm;
    gasosa = distancia/12;
    
    printf("Joaozinho ira gastar %.3f litros de combustivel nessa viagem",gasosa);
	printf("\n");
	
	//Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”
	
    int x, y, z, maiorXY, maior;

    printf("Digite 3 valores a seguir e iremos ver qual eh o maior\n\n");

    printf("Valor 1 = ");
    scanf("%d", &x);

    printf("Valor 2 = ");
    scanf("%d", &y);

    printf("Valor 3 = ");
    scanf("%d", &z);

    maiorXY = (x + y + abs(x - y)) / 2;

    maior = (maiorXY + z + abs(maiorXY - z)) / 2;

    printf("%d eh o maior\n", maior);
	 
		 
	 
	
	
	
	 
	 
	 
	 
	
	
	
	return 0;
}
