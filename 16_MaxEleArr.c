//Bharat Sharma
//Program to find max element and index in array.
#include<stdio.h> //Pre-processor directive to include standard input and output functions header file
int main() //main function
{
	int i;
	float arr[5];

	printf("Please enter five numbers:\n ");

	for (i = 0; i < 5; ++i)//for loop
	{
    scanf("%f", &arr[i]);
	}

		for (i = 1; i < 5; ++i) //loop
		{
    	if (arr[0] < arr[i])
        	arr[0] = arr[i];
		}
	printf("Largest element = %.2f", arr[0]); //output

	return 0;
}