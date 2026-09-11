#include <stdio.h>
#include <stdlib.h>
#define dedu1 169.44
#define dedu2 381.44
#define dedu3 662.77
#define dedu4 896.00

float calc_inss ( float salario){
	
	if (salario <= 1412.00) return salario*0.075;
	else if (salario <= 2666.68) return salario*0.09;
	else if (salario <= 4000.00) return salario*0.12;
	else return salario*0.14;
	
}

float calc_irpf (float salario_desc){
	    if (salario_desc <= 2259.20) return 0 ; 
   else if (salario_desc <= 2826.65) return (salario_desc * 0.075) - dedu1;
   else if (salario_desc <= 3751.05) return (salario_desc * 0.15) - dedu2;
   else if (salario_desc <= 4664.68) return (salario_desc * 0.225) - dedu3;
   else return (salario_desc * 2.75) - dedu4;
}




int main(int argc, char *argv[]) {
	
    float salario, salario_desc, desconto , salari_liq , hora , hora_mes;
    
    printf("\n========Holerite========\n");
    printf("\n");
	printf("Digite o valor de sua hora de trabalho= ");
    	scanf("%f", &hora);
    printf("Quantas horas no mes voce trabalhou ao total? = ");
    	scanf("%f", &hora_mes);
    	
    salario = hora * hora_mes ;
    salario_desc = salario - calc_inss(salario);
    salari_liq= salario_desc - calc_irpf(salario_desc);
   
    printf("==============================================\n");
	printf("        RECIBO DE PAGAMENTO DE SALARIO     \n");
	printf("==============================================\n");
	printf("SALARIO BRUTO (Horas x Valor):    R$ %f \n", salario);
	printf("(-) DESCONTO INSS:                R$ %f \n", calc_inss(salario));
	printf("(-) DESCONTO IRPF:                R$ %f \n" , calc_irpf(salario_desc));
	printf("---------------------------------------------- \n");
	printf("LIQUIDO A RECEBER:                R$ %f",salari_liq);
	
	
	
	
	
	
	
	
	return 0;
}
