#include <stdio.h>
int main(){
	int number;
	printf("Enter a number");
	scanf("%d",&number);
	if(number%2==0){
		printf("Entered number %d is Even",number);
	}
		else{
		printf("Enterd number %d is odd",number);
	}
	return 0;
}