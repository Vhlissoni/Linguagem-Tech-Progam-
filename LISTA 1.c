#include <stdio.h>
#include <stdlib.h>


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
	
	printf("%d \n %d",a,b);
	
	//faça um programa que leia um valor do tipo double e depois o imprima na forma de notação científica EX-2
	
    /*int t;
	
	printf("Digite um valor com virgula=");
	 scanf("%d",&t);
	
	t = t*10^6;
	
	printf("%d",t); 
	 
	
	 
    printf("numero = ",t);*/
    
    
    
    //implemente um programa que leia um numero n e mostre na tela o seu valor em base binária EX-3
    
    /*int bin;
    
    printf("Digite um valor inteiro positivo= ")
    scanf("%d",&bin)*/
    
    /*faça um programa que leia, o salário fixo e o valor em vendas de um vendedor.
	Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, mostre o total a receber no final do mês, com duas casas decimais, EX-4*/
	
	float salario,comissao,salario_comissao,vendas;
	
	printf ("Digite o seu salario fixo= ");
	 scanf ("%f",&salario);
	
   	printf ("Digite o valor de suas vendas totais= ");
   	 scanf ("%f",&vendas);
   	 
   	comissao = vendas * (0.15);
   	salario_comissao = salario + comissao;
	   
	printf ("Somando o valor de seu salario e sua comissao de vendas ,voce ira receber %2.f ao final do mes!!",salario_comissao);
	
	//Elabore um programa que peça ao usuário para digitar 4 valores. E mostre na tela a soma, a média e o produtório desses valores. EX-5
	
	float n1,n2,n3,n4,soma,media,produtorio;
	
	printf("Digite 4 valores a seguir:\n")
	scanf("%f",&n1)
	scanf("%f",&n2)
	scanf("%f",&n3)
	scanf("%f",&n4)
	
	
	
	
   	
   	 
   	
   	
   	
   	
   	
	

	
    
    
    
	 
	

	
	
	
	
	
	
	
	
	return 0;
	
}
