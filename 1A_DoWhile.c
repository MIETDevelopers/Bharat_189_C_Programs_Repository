#include<stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){ //Main function
	int a = 1;
	printf("The numbers are:\n");
	//Do while loop to print numbers
	do{
		printf("Value of a %d\n", a);
		a = a+1;
	} while(a<=10);
	return 0; //Return function
}