#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int a, b , c , d , maior , maior_temp, maior_temp2;
	
	printf("Informe os valores a serem comparados:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	
	//conta
	
	maior_temp = (a+b+abs(a-b))/2;
	maior_temp2 = ((d+c+abs(d-c)))/2;
	maior = ((maior_temp+maior_temp2+abs(maior_temp -maior_temp2)))/2;
	
    printf("O maior entre |%d|%d|%d|%d| = %d",a , b , c , d, maior);
	return 0;
}
