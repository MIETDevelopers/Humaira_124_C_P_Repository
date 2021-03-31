//Humaira
//Purpose:Program to write CSv 
#include <stdio.h> 	//stdio.h is the header file for standard input and output
#include <stdlib.h>	//Including standard library header files
#include <string.h>	//Including string header files 
int main() { //main function body
    FILE* fp = fopen("C:\\Users\\Humaira\\Desktop\\code c\\Humaira_124_C_P_Repository\\Q_35_ReadCommaSv.c","a+"); //File path
    char name[50]; //Variable declarartion of character data type
    int rollno, attendance, marks; //Variable declarartion of integer data type
    if (!fp) { 
        // Error in file opening 
        printf("Can't open file\n"); //Printf function calling 
        return 0; 
    } 
    printf("\nEnter Student Name\n"); //Printf function calling
    scanf("%s", &name); //scanf user input function 
    printf("\nEnter Roll Number\n"); //Printf function calling
    scanf("%d", &rollno); //scanf user input function 
    printf("\nEnter Attendance\n"); //Printf function calling 
    scanf("%d", &attendance);	
    printf("\nEnter Marks\n"); //Printf function calling 
    scanf("%d", &marks);   		 
    fprintf(fp, "%s, %d, %d, %d\n", name, rollno, attendance, marks); //Saving data in file 
    printf("\nNew student deatils added."); //Printf function calling
    fclose(fp); //fclose closes the file
    return 0; 
} //end