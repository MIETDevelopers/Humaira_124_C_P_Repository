//Humiara Gani
// Program: To read .csv files.
#include <stdio.h> //Including standard input output header files.
#include <stdlib.h>//Including standard library header files.
#include <string.h>//Including string header files. 

const char* getfield(char* line, int num)
{
    const char* tok;
    for (tok = strtok(line, ";");
            tok && *tok; // AND condition if both are true the output will be true otherwise faalse
            tok = strtok(NULL, ";\n")) //strtok is empty 
    {
        if (!--num) //conditional 'if' , if true it will return 'tok', otherwise 'NULL'
            return tok;
    }
    return NULL;
}
int main() //funtion starts here
{
    FILE* stream = fopen("E:\\Cprogrs\\Humaira_124_C_P_Repository.csv\\Read.csv", "r"); // 'fopen' used to open file, Path of the .csv file.

    char line[1024];
    while (fgets(line, 1024, stream)) //while loop using
    {
        char* tmp = strdup(line);
        printf("Field 3 would be %s\n", getfield(tmp, 3));
        free(tmp); //delocating 'temp'
    }
}
