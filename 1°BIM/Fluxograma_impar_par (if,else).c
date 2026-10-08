#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a, b ,c , r ;
	
    printf("Digie os valores para A B C :");
     scanf("%d %d %d", &a , &b , &c );
    
    if(a>b){
    	r = a;
	} else{
		r = b;
	}
	
    if(r>c){
    	printf("%d eh o maior \n",r);
	}else{
		printf("%d eh o maior \n",c);
	}
	
	int n;
	
	printf("Digite um numero ae= ");
	scanf("%d",&n);
	
	if(n%2 == 0){
		printf("E esse numero e par");
	}else{
		printf("Esse numero e impar");
	}
	
	
	
	return 0;
}
