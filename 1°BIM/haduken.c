#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
	int a , b , hp , ar ;
	
	printf("Digite dois valores= ");
	scanf("%d %d",&a,&b);
	
   if (a > 0 && b > 0){
      printf("Sao positivos! \n");
	        if (a < 10 && b < 10){
              printf("Sao menores que 10! \n");
      
	            if (a == 2 || a == 3 || a == 5 || a == 7 && b == 2 || b == 3 || b == 5 || b == 7){
	  	
	  	          hp = sqrt(pow(a , 2)+pow(b , 2));
	  	          ar = (a * b)/2;
	  	
	  	          printf("A area e a hipotenusa do triangulo formados por |%d|%d| sao respectivamente = %d %d",a , b , ar , hp);
	  	
	                }    
		       else {
	  	
	  	                  printf("As operacoes basicas entre %d %d sao = |%d|%d|%d|%d|", a , b , a+b , a-b , a*b , a/b);
	  	   
	            }
	  
      
	        }
	      else{
    
        printf("Sao maiores que 10! \n");
    
	    if (a%b == 0){
		
		printf("Sao multiplos!");
	 } 
	
	
     }

       }
else{
	printf("Sao negativos!");
	printf("Seus inversos sao = |%d|%d", a*(-1) , b*(-1));
} 

	
	
	
	
	
	
	
	return 0;
}
