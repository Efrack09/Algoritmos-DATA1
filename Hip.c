#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

	int main(){
	float hipo, cat1, cat2;
	
	printf("Escriba los 2 catetos: ");
		scanf("%f %f", &cat1, &cat2);
		
	hipo = sqrt(pow(cat1,2)+pow(cat2,2));
	
	printf("La hipotenusa del triangulo es: %.2f", hipo);
	
	return 0;
	
	}
	
	
