#include <string.h>
#include <stdlib.h>
#include <stdio.h>


int add_two_nums(int A, int B);

int main(int argc, char** argv) {

	int A = atoi(argv[1]);
	int B = atoi(argv[2]);

	int result = add_two_nums(A, B);

	printf("La suma de %d + %d es %d\n", A, B, result);
	return 0;
}

int add_two_nums(int A, int B) {
	
	return A + B;

}
