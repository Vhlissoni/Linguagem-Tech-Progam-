#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	int dig1 , dig2 , n1 , n2 , n3 , n4 , n5 , n6 , n7 , n8 , n9 , n10 , n11 ;
	
	printf("Digite o numero de seu CPF no formato (xxx.xxx.xxx-xx):");
		scanf("%d %d %d . %d %d %d . %d %d %d - %d %d",&n1 , &n2 , &n3 , &n4 , &n5 , &n6 , &n7 , &n8 , &n9 , &n10 ,&n11);
	
	
	
	dig1 = (((n1*10) + (n2*9) + (n3*8) + (n4*7) + (n5*6) + (n6*5) + (n7*4) + (n8*3)+ (n9*2))*10 )%11 ;
	
	dig2=  (((n1*11) + (n2*10) + (n3*9) + (n4*8) + (n5*7) + (n6*6) + (n7*5) + (n8*4)+ (n9*3) + (n10*2))*10 )%11 ; //ta certo
	
	
	if (dig1==10 ){
    	
		dig1 = 0;
	
	}
    if (dig2==10 ){
    	
		dig2 = 0;
	
	}
	
	if (dig1 == n10 && dig2 == n11){
		printf("CPF VALIDO!!!");
	}
	else {
		printf("CPF INVALIDO");
	}
	
	return 0;
	
	
}
