#include <stdio.h> 			//Pre-processor directive to include standard input and output functions header file
#include <stdlib.h> //Using standard library header file.
int main() {
	int* ptr = malloc(10 * sizeof(*ptr));
	if (ptr != NULL){
  		*(ptr + 2) = 50;
  		printf("Value of the 2nd integer is %d",*(ptr + 2));		//printf function calling
	}
	free(ptr);
}