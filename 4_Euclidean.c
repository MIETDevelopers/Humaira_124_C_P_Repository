#include <stdio.h>
#include <math.h>

int main() {
	float x1, y1, x2, y2, distance;
 	scanf("%f %f %f %f", &x1, &y1, &x2, &y2, &distance);
 	printf("Input x1");
 	printf("Input y1");
 	printf("Input x2");
 	printf("Input y2");
 	distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
 	printf("Distance between the said points: %.4f", sqrt(distance));
 	printf("\n");
 	return 0;
}