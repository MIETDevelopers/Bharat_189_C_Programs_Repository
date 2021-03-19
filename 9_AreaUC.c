
// Bharat Sharma
// Area of Circle, Square and Rectangle based on user choice
/* Formulas:
	Area of Square: side*side
	Area of Rectangle: Length * Breadth
	Area of Circle: (22/7)*radius*radius 
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){
	char operation;  //Variable declared of char data type
	float radius, sideOfSquare, sideOfRectangle1, sideOfRectangle2;  //Variables declared of float data type
	printf("Choose any one of the follwing :\n 1.Area of circle.\n 2.Area of square.\n 3.Area of rectangle.\n");
	scanf("%c",&operation);//It will scan the operation entered by user.
	switch(operation){ //Switch case function
		case'1':
			printf("Enter radius of circle\n");
			scanf("%f",&radius);	//It will scan the values entered by user.
			printf("Area of circle is %f", ((22*radius*radius)/7));
			break;
		case'2':
			printf("Enter size of side\n");
			scanf("%f",&sideOfSquare);	//It will scan the values entered by user.
			printf("Area of square is %f",sideOfSquare*sideOfSquare);
			break;
		case'3':
			printf("Enter size of sides\n");
			scanf("%f %f",&sideOfRectangle1, &sideOfRectangle2);  //It will scan the values entered by user.
			printf("Area of rectangle = %f", sideOfRectangle1*sideOfRectangle2);
			break;
		default: //Statement to be executed if input doesn't match any cases.
			printf("Error 404");
	}
	return 0;
}