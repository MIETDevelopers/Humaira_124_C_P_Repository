//Humaira
////To calculate area and perimeter of circle, square, rectangle 
#include<stdio.h> //header funcrion file
int main(){ //main body
	float radiusofcircle,sideofsquare,lengthofrectangle,breadthofrectangle; //Declaration of variables of data type
	scanf("%f %f %f %f", &radiusofcircle, &sideofsquare, &lengthofrectangle, &breadthofrectangle); //user input
	printf("Area of Circle : %f",(3.14*radiusofcircle*radiusofcircle)); //Printing Area of circle where Pie=3.14
	printf("\nperimeter of circle : %f",(2*3.14*radiusofcircle)); 
	printf("\nArea of square: %f",(sideofsquare*sideofsquare));
	printf("\nperimeter of square: %f",(4*sideofsquare));
	printf("\nArea of rectangle: %f",(lengthofrectangle*breadthofrectangle));
	printf("\nperimeter of rectangle: %f",(2*(lengthofrectangle+breadthofrectangle)));
	return 0; 
} //end of program
