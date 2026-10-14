#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14
void ex1 (){
	int a,b,aux; 
    
    printf("Digite o primeiro valor= ");
      scanf("%d",&a);

    printf("Digite o segundo valor= ");
	  scanf("%d",&b);
	
	aux=a;
	a=b;
	b=aux;
	
	printf("%d \n %d\n",a,b);
	
	return main();
}

void ex2 (){
	double t;
	
	printf("Digite um valor= ");
	 scanf("%lf",&t);
	 
    printf("Este valor em notacao cientifica tem valor de = %e \n",t);
    return main();
}

void ex3 (){
	int bin;
    
    printf("Digite um valor inteiro positivo= ");
     scanf("%d",&bin);
     
    printf("Esse mesmo valor em binario tem valor de = \n");
    //printf("\n");
    
    printf("%d", (bin / 64) % 2);
    printf("%d", (bin / 32) % 2);
    printf("%d", (bin / 16) % 2);
    printf("%d", (bin / 8) % 2);
    printf("%d", (bin / 4) % 2);
    printf("%d", (bin / 2) % 2);
    printf("%d" , bin % 2);
    return main();
}

void ex4 (){
	
	float salario,comissao,salario_comissao,vendas;
	
	printf ("Digite o seu salario fixo= ");
	 scanf ("%f",&salario);
	
   	printf ("Digite o valor de suas vendas totais= ");
   	 scanf ("%f",&vendas);
   	 
   	comissao = vendas * (0.15);
   	salario_comissao = salario + comissao;
	   
	printf ("Somando o valor de seu salario e sua comissao de vendas ,voce ira receber %2.f ao final do mes!! \n ",salario_comissao);
	return main();
}

void ex5 (){
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
	return main();
	
}

void ex6 (){
	int idade,dias,anos,meses;
	
	printf("Digite sua idade em dias (Sua idade x 360) = ");
	 scanf("%d",&idade);
	
	anos = idade/360;
	meses = idade/12;
	
	printf("Sua idade em anos tem valor de = %d\n Sua idade em meses tem valor de = %d\n Sua idada em dias tem valor de = %d \n",anos,meses,idade);
	return main();
	
}

void ex7 (){
	float raio, volume;
	
	printf("Digite o raio da esfera para o calculo de seu volume = ");
	 scanf("%f",&raio);
	 
	volume = (4.0/3)*pi*pow(raio,3);
	
	printf("A esfera tem volume de = %f \n",volume);
	return main();
	
}

void ex8 (){
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
	  printf("A distancia entre os pontos tem valor de = %.2f\n",distancia);
	  return main();
}


int main(int argc, char *argv[]) {
	
	int op;
	
	printf("Escolha uma opcao a seguir: \n");
	
	
	printf("1. Ordem inversa de dois numeros\n");
	printf("2. Numero em notacao cientifica\n");
	printf("3. Conversao de inteiro para binario\n");
	printf("4. Salario com 15 porcento de aumento ate 2k\n");
	printf("5. Media, Soma e produtorio de 4 valores\n");
	printf("6. Idade em dias, anos e meses\n");
	printf("7. Volume da esfera\n");
	printf("8. Distancia entre dois pontos\n");
	printf("\n");
	
	scanf("%d",&op);
	switch (op){
		
		case 1:
		    ex1 ();
		case 2:
			ex2 ();
		case 3:
			ex3 ();
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
		default:
			printf("ERRO!");
	        break;
	}
	
	
	return 0;
	
}
