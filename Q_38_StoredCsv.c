//Humaira
//Purpose:Program to write .csv filesS
#include <stdio.h> //stdio.h is the header file for standard input and output
#include <stdlib.h>	//Including standard library header files
#include <string.h>	//Including string header files
int main() { //main function body
    FILE* fp = fopen("C:\\Users\\Humaira\\Desktop\\code c\\Humaira_124_C_P_Repository\\Q_38_StoredCsv.c","a+"); //File path.
    char name[50]; //Variable declarartion of character data type
    int rollno, marks; //Variable declarartion of integer data type
    if (!fp) { //if not equal to fp
        printf("Can't open file\n"); //Printf function calling 
        return 0; 
    } 
    printf("\nEnter Student Name\n");//Printf function calling
    scanf("%s", &name);//scanf function calling 
    printf("\nEnter Roll Number\n"); //Printf function calling
    scanf("%d", &rollno); //scanf function calling 
    printf("\nEnter Attendance\n");
    scanf("%d", &mark);// 
    fprintf(fp, "%s, %d, %d\n", name, rollno, marks); // Saving data in file 
    printf("\nNew student deatils added.");     
    fclose(fp);
    return 0; 
    }