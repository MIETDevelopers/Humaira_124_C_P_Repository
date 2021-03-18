//Humaira Gani
//To calculate the area of circle, rectangle and square on user based input
#include <stdio.h>
int main(){ //main function
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle; //variable declaration
	//variable intialization
	raduisOfCircle=2;
	sideOfSquare=10;
	legthOfRectangle=9;
	breadthOfRectangle=11;
	//printf calling function
		printf("Area of Circle: %f",(3.14*raduisOfCircle*raduisOfCircle));
		printf("\nPerimeter of Circle: %f",(2*3.14*raduisOfCircle));
		printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));
		printf("\nPerimeter of Square: %f",(4*sideOfSquare));
		printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));
		printf("\nPerimeter of Rectangle: %f",(2*(legthOfRectangle+breadthOfRectangle)));
return 0; // output
}
