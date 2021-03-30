//Name:Humaira                               Dated:29-03-21
//Sum of 10 elements of Array
#include <stdio.h> //pre processor directive to include heade function files
int main() { //main function
	int sum=0,i,a[20]; //intializing and declaring
	for(i=0;i<10;i++){ //using for loop 
		scanf("%d",&a[i]); //user input
		}
	for(i=0;i<10;i++) // for loop
	{
		sum=sum+a[i]; //sum plus sum of array 'a' at 'i'
	}
	printf("%d",sum); //total sum of 10 elements
    return 0; //output statement 
			} //end