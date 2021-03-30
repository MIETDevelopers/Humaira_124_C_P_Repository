//Humaira
//1D and 2D arrays passed as arguments to a single function 
#include <stdio.h> //header fucntion file
void displayNumbers(int num[2][2]); // void return data type
int main() /// main function
{
    int num[2][2],i,j; //declarind an area of siz 4 
    printf("Enter 4 numbers:\n");
    for (i = 0; i < 2; ++i) //or loop
        for (j = 0; j < 2; ++j) //nested for loop for rows
            scanf("%d", &num[i][j]); //user input
    // passing multi-dimensional array to a function
    displayNumbers(num);
    return 0;
}
void displayNumbers(int num[2][2])
{
    printf("Displaying:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
           printf("%d\n", num[i][j]);
        }
    }