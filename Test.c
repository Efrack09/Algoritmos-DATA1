#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv){

	float num=atof(argv[1]);
	int count=atof(argv[2]);
	float mem=atof(argv[3]);
	float suma=0;
	float prom=atof(argv[4]);
	
	for(count=1; count<=num; count++){
	printf("Introduce las calificaciones: %d \n", count);
	&num;
	suma = suma + mem;
	prom=((suma/num));
	
	}
	
	printf("El promedio es: %.2f", prom);
	return 0;
	}
