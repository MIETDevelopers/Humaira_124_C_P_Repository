//Humaira
//Program:Euclidean distance 
#include <stdio.h> //pre processor directive to include standard input output header function file
#include <math.h> //including sqrt, pow etc

int main() { //main body 
	float x1, y1, x2, y2, distance; //declaration of variables of data type float
 	scanf("%f %f %f %f", &x1, &y1, &x2, &y2, &distance); //user input
 	printf("Input x1"); //printing 'x1'
 	printf("Input y1");
 	printf("Input x2");
 	printf("Input y2");
 	distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)); //Euclidean formulla o distance
 	printf("Distance between the said points: %.4f", sqrt(distance)); //printing square root of distance
 	printf("\n"); //for new line escape sequence 
 	return 0; //return integer type output
} //end of program
