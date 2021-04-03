//Humaira
//Program to check whether the alphabet is a vowel or not
#include <stdio.h> //including all input output fumction
int main(){ //main body
	char ch;
	printf("Enter a character\n"); //printing 
	scanf("%c",&ch); //user input
	if(ch == 'a' || ch =='e' || ch =='i' || ch =='o' || ch =='u' ||
	ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') // if condition
	{
		printf("%c is Vowel\n",ch); //printing vowel if true
	}
	else //false
	{
		printf("%c is Consonant\n",ch); //printing consonant 
	}
	return 0;
}
