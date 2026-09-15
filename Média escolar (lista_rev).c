#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	float nota1 , nota2 , nota3 , media;
	char nome[100];
	
	printf("---------Boletim escolar---------\n");
	printf("\n");
	printf("Digite o nome do Aluno(a): ");
		scanf("%s",nome);
	
	printf("---------------------------------\n");
	
	printf("Digite a primeira nota =  ");
		scanf("%f",&nota1);
	printf("Digite a segunda nota  =  ");
		scanf("%f",&nota2);
	printf("Digite a terceira nota =  ");
		scanf("%f",&nota3);
		
	media = (nota1 + nota2 + nota3)/3.0 ;
	
	if ( media >=7 && media<=10){
		printf("O aluno %s esta APROVADO!!!",nome);
	}
	else if ( media <=4 && media <=6.9){
		printf("O aluno %s esta ESTA DE EXAME e falta %1.f para atingir a media 10",nome,media-10.0);
	}
	else if (media < 4){
		printf("O aluno %s esta REPROVADO ):",nome);
	}
	else {
		printf("NOTA INVALIDA");
		
	}
	
	
	return 0;
}
