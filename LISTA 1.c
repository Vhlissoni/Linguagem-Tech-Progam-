#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159

int main(int argc, char *argv[]) {

//faça um programa que leia o valor de dois numeros e escreva-os na ordem inversa que foram lidos,EX-1	
    int a,b,aux; 
    
    printf("Digite o primeiro valor= ");
      scanf("%d",&a);

    printf("Digite o segundo valor= ");
	  scanf("%d",&b);
	
	aux=a;
	a=b;
	b=aux;
	
	printf("%d \n %d\n",a,b);
	
	//faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica EX-2
	
    double t;
	
	printf("Digite um valor= ");
	 scanf("%lf",&t);
	 
    printf("Este valor em notacao cientifica tem valor de = %e \n",t);
    
    
    
    //implemente um programa que leia um numero n e mostre na tela o seu valor em base binária EX-3
    
    int bin;
    
    printf("Digite um valor inteiro positivo= ");
     scanf("%d",&bin);
     
    printf("Esse mesmo valor em binario tem valor de = ");
    //printf("\n");
    
    printf("%d", (bin / 64) % 2);
    printf("%d", (bin / 32) % 2);
    printf("%d", (bin / 16) % 2);
    printf("%d", (bin / 8) % 2);
    printf("%d", (bin / 4) % 2);
    printf("%d", (bin / 2) % 2);
    printf("%d" , bin % 2);
    
	
	
	
	
	/*faça um programa que leia, o salário fixo e o valor em vendas de um vendedor.
	Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, mostre o total a receber no final do mês, com duas casas decimais, EX-4*/
	
	float salario,comissao,salario_comissao,vendas;
	
	printf ("Digite o seu salario fixo= ");
	 scanf ("%f",&salario);
	
   	printf ("Digite o valor de suas vendas totais= ");
   	 scanf ("%f",&vendas);
   	 
   	comissao = vendas * (0.15);
   	salario_comissao = salario + comissao;
	   
	printf ("Somando o valor de seu salario e sua comissao de vendas ,voce ira receber %2.f ao final do mes!! \n ",salario_comissao);
	
	//Elabore um programa que peça ao usuário para digitar 4 valores. E mostre na tela a soma, a média e o produtório desses valores. EX-5
	
	float n1,n2,n3,n4,soma,media,produtorio;
	
	printf("Digite 4 valores a seguir:\n");
	scanf("%f",&n1);
	scanf("%f",&n2);
	scanf("%f",&n3);
	scanf("%f",&n4)
	;
	soma = n1+n2+n3+n4;
	media = (n1+n2+n3+n4)/4;
	produtorio = n1*n2*n3*n4;
	
	printf("A soma dos quatros numeros tem valor de = %f \n a media dos quatros numeros tem valor de = %f \n e o produtorio desses valores tem valor de = %f \n",soma,media,produtorio);
	
	//Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias.
	
	int idade,dias,anos,meses;
	
	printf("Digite sua idade em dias (Sua idade x 360) = ");
	 scanf("%d",&idade);
	
	anos = idade/360;
	meses = idade/12;
	
	printf("Sua idade em anos tem valor de = %d\n Sua idade em meses tem valor de = %d\n Sua idada em dias tem valor de = %d \n",anos,meses,idade);
	
	//Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor de 3.14159.
	
	float raio, volume;
	
	printf("Digite o raio da esfera para o calculo de seu volume = ");
	 scanf("%f",&raio);
	 
	volume = (4.0/3)*pi*pow(raio,3);
	
	printf("A esfera tem volume de = %f \n",volume);
	
	//Leia os quatro valores do usuário correspondentes às coordenadas em um plano cartesiano, p1(x1, y1) e p2(x2, y2) e calcule e mostre a distância entre eles, aplicando a distância euclidiana
	
	float x1 , y1 , x2 , y2 , distancia;
	
	printf("Vamos calcular a distancia entre dois pontos!\n");
	printf("\n");
	printf("Digite as duas coordenadas do primeiro ponto (x1,y1): \n");
	printf("x1=");
	 scanf("%f",&x1);
	  printf("y1=");
	   scanf("%f",&y1);
	   
	   printf("\n");
	   
	printf("Digite as duas coordenadas do segundo ponto (x2,y2): \n");
	 printf("x2=");
	  scanf("%f",&x2);
	   printf("y2=");
	    scanf("%f",&y2);
	    
	distancia = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	  printf("A distancia entre os pontos tem valor de = %f",distancia);
	  
	return 0;
	
}
