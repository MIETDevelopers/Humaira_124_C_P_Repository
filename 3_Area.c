#include<stdio.h> //To calculate area and perimeter of circle 
//Pie=3.14
int main(){
	float radiusofcircle,sideofsquare,lengthofrectangle,breadthofrectangle;
	scanf("%f %f %f %f", &radiusofcircle, &sideofsquare, &lengthofrectangle, &breadthofrectangle);
	printf("Area of Circle : %f",(3.14*radiusofcircle*radiusofcircle));
	printf("\nperimeter of circle : %f",(2*3.14*radiusofcircle));
	printf("\nArea of square: %f",(sideofsquare*sideofsquare));
	printf("\nperimeter of square: %f",(4*sideofsquare));
	printf("\nArea of rectangle: %f",(lengthofrectangle*breadthofrectangle));
	printf("\nperimeter of rectangle: %f",(2*(lengthofrectangle+breadthofrectangle)));
	return 0;
}