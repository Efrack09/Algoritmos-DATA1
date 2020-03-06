#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

	float cal_hip(float cat1, float cat2);
	int main(int argc, char** argv){
		
		float cat1 = atof(argv[1]);
		float cat2 = atof(argv[2]);
		
		float result = cal_hip(cat1, cat2);
		printf("La hipotenusa es %.2f\n", result);
		
		return 0; 
	}
	
	float cal_hip(float cat1, float cat2){
		return sqrt(pow(cat1, 2)+pow(cat2,2));
	}
	
	
