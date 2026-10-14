#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14

void ex1 (){
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
	
	return main ();
}

void ex2 (){
float km, ms;
	
	printf("Vamos converter km/h em m/s \n");
	printf("\n");
	
	printf("Digite a velocidade em km/h =  ");
	 scanf("%f",&km);
	
	ms = km/3.6;
	
	printf("A velocidade %f em km/h tem valor de %f em m/s",km,ms);
	printf("\n");
	
	return main ();
}

void ex3 (){
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
	
	return main ();
}

void ex4 (){
	float c , f;
	
	printf("Vamos converter graus celsius em fahrenheit \n");
	printf("\n");
	
	printf("Digite a temperatura em Celsius = ");
	 scanf("%f",&c);
	
    f = c*(9.0/5.0) + 32.0;
    
    printf("%.2f em celsius em fahrenheit tem valor de = %.2f",c,f);
    printf("\n");
    
	return main ();
}

void ex5 (){
	
	float grau , radiano ;
    
    printf("Vamos converter graus em radianos");
    printf("\n");
    
    printf("Digite o valor em graus = ");
    scanf("%f",&grau);
    
    radiano = grau*(pi/180);
    
    printf("O seu angulo %.2f em radianos tem valor de = %.2f",grau,radiano);
	printf("\n");
	return main ();
}

void ex6 (){
	int num , ant , suc ;
	
	printf("Digite um numero = ");
	scanf("%d,",&num);
	
	ant = num -1.0;
	suc = num +1.0;
	
	printf("O antecessor e o sucessor desse numero sao respectivamente = %d e %d",ant,suc);
	printf("\n");
	return main ();
}

void ex7 (){
	float g1 , g2 , g3 ;
    
    
    g1 = 780.000*0.46;
    g2 = 780.000*0.32;
    g3 = 780.000-(g1+g2);
    
    printf("O primeiro ganhador recebera = %f \no segundo ganhador recebera = %f \ne o terceiro ganhador ganhara= %f",g1,g2,g3);
	printf("\n");
	return main ();
}

void ex8 (){
	int tempo, hr , min , sec;
	
	printf("Digite um tempo em segundos= ");
	scanf("%d",&tempo);
	
	min = tempo/60;
	hr = min/60;
	sec = tempo;
	
	printf("Este tempo no formato de (00:00:00) e igual a = %.0d:%.0d:%.0d",hr,min,sec);
	printf("\n");
	return main ();
}

void ex9 (){
	float distancia , vlm , time, gasosa ;
	
	printf("Digite o tempo gasto na viagem em horas = ");
	scanf("%f",&time);
	
	printf("Digite a velocidade media (em km/h)= ");
	scanf("%f",&vlm);
	
    distancia = time*vlm;
    gasosa = distancia/12;
    
    printf("Joaozinho ira gastar %.3f litros de combustivel nessa viagem",gasosa);
	printf("\n");
	return main ();
}

void ex10 (){
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
    return main ();
}


int main(int argc, char *argv[]) {
	
	int op;
	
	printf("Escolha uma das opcoes a seguir: \n");
	
	printf("1. Ano de nascimento\n");
	printf("2. Km/h para m/s\n");
	printf("3. Real para dolar\n");
	printf("4. Celcius para Fahrenheit\n");
	printf("5. Angulo para radiano\n");
	printf("6. Antecessor e sucessor\n");
	printf("7. Premio para 3 ganhadores\n");
	printf("8. Segundos para hora,minuto e segundos\n");
	printf("9. Quantidade de combustivel para viagem\n");
	printf("10. Comparacao entre 3 valores\n");
	
	scanf("%d",&op);
	
	switch (op){
		
		case 1:
			ex1();
		case 2:
			ex2();
		case 3:
			ex3();
		case 4:
			ex4 ();
		case 5:
			ex5 ();
		case 6:
			ex6 ();
		case 7:
			ex7 ();
		case 8:
			ex8 ();
		case 9:
			ex9 ();
		case 10:
			ex10 ();
		default:
			printf("ERRO!!!!");
			
	}
	
	return 0;
}
