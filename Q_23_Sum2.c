/* Name:Humaira Gani
Program purpose: To find the sum of two 2 dimensional arrays
*/
#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
int main(){ //Main function
    // Defining two Arrays of size 4 
    int arr1[2][2], arr2[2][2];
    int arr3[2][2];
    int i, j; //declaring two variables
    printf("Enter elements for first array:\n")
    for(i=0; i<2; ++i) //for loop
    {
        for(j=0; j<2; ++j) //Nested for loop to take inputs for second array
        {
            printf("Enter A[%d][%d]: ", i+1, j+1);
            scanf("%d", &arr1[i][j]);
            printf("\n");
        }
    }
    printf("\nEnter elements for second array:\n");
    for(i=0; i<2; ++i) //for loop
    {
        for(j=0; j<2; ++j) //Nested for loop to take inputs for second array
        {
            printf("Enter B[%d][%d]: ", i+1, j+1);
            scanf("%d", &arr2[i][j]);
            printf("\n");
        }
    } 
    //Adding corresponding elements of two arrays
    for(i=0; i<2; ++i)
    {
        for(j=0; j<2; ++j)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    //Nested for loop to display the sum
    printf("\nSum:\n");
    for(i=0; i<2; ++i)
    {
        for(j=0; j<2; ++j)
        {
            printf("%d\t", arr3[i][j]);
            if(j==1)
            {
                printf("\n");
            }
        }
    }
    return 0; //Return function
}