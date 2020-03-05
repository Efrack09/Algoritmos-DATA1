#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
/*float add_two_int(float x, float y){
	return x+y;
}*/

float distance (float x, float y){
	return sqrt(x*x + y*y);

}

int main(int argc, char** argv) {
	//int num1 = atoi(argv[1]);
	//int num2 = atoi(argv[2]);
	float x = atof(argv[1]);
	float y = atof(argv[2]);
	printf("the distance is %f\n", distance(x,y));
	return (0);
}
