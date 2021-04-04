//Humaira
//Program:To display String Function
#include <stdio.h> //header function file
#include <string.h> //string function
int main() //main function
{
    // String Declaration 
    char nickname[20]; 

    printf("Enter your Nick name:"); //printf calling function

    /* I am reading the input string and storing it in nickname
      Array name alone works as a base address of array so
      we can use nickname instead of &nickname here
     */
    scanf("%s", nickname); //user inputs 'nickname'

    //Displaying String
    printf("%s",nickname);

    return 0;
}