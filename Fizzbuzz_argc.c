#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
	int count = atoi(argv[1]);
	int i;
	for(i=1; i<=count; i++){
		if(i%5==0 && i%3==0){
			printf("FizzBuzz\n");
		}else if(i%3==0){
			printf("Fizz\n");
		}else if(i%5==0){
			printf("Buzz\n");
		} else {
			printf("%d\n", i);
		}
	}

}
