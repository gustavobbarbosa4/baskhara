#include <stdio.h>
#include <math.h>

   int main (){
    float a, b, c, d;
    
    printf("digite um valor para a: ");
    scanf("%f", &a);
   
    printf("digite um valor para b: ");
    scanf("%f", &b);
    
    printf("digite um valor para c: ");
    scanf("%f", &c );
    
    if(a == 0){
    	printf("\no coeficiente 'a' nao pode ser igual a 0 em uma equacao de segundo grau. \n");
    	return 1;
	}
    
    d = b * b - 4 * a * c;
    printf("delta = %.3f\n", d);
    
    if(d > 0){
    	
    float x1 = (-b + sqrt(d)) / (2 * a);
    float x2 = (-b - sqrt(d)) / (2 * a);
    printf("x = {%.2f, %.2f}\n", x1, x2);
}
   	else if(d == 0){
   	printf("x = {%.2f}\n", (-b)/(2*a));
   }
   	else {
   		printf("nao ha raizes reais");
	   }
    
	return 0;  
	   }
   

   
