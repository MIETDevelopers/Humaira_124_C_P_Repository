//Humaira
//Program:To display String Function 
    // String Declaration 
    char nickname[20]; 
    // C String function – strlen
#include <stdio.h> //header function file
#include <string.h> //string function
int main() //main function
{
     char str1[20] = "Me";
     printf("Length of string str1 when maxlen is 30: %d", strnlen(str1, 30));
     printf("Length of string str1 when maxlen is 10: %d", strnlen(str1, 10));
     return 0;
}
// C String function – strcmp
#include <stdio.h>
#include <string.h>
int main()
{
     char s1[20] = "Me";
     char s2[20] = "Me";
     if (strcmp(s1, s2) ==0)
     {
        printf("string 1 and string 2 are equal");
     }else
      {
         printf("string 1 and 2 are different");
      }
     return 0;
}
//C String function – strcat
#include <stdio.h>
#include <string.h>
int main()
{
     char s1[10] = "Hello";
     char s2[10] = "World";
     strcat(s1,s2);
     printf("Output string after concatenation: %s", s1);
     return 0;
}
//C String function – strcpy
#include <stdio.h>
#include <string.h>
int main()
{
     char s1[30] = "string 1";
     char s2[30] = "string 2 : I’m gonna copied into s1";
     /* this function has copied s2 into s1*/
     strcpy(s1,s2);
     printf("String s1 is: %s", s1);
     return 0;
}
//C String function – strchr
#include <stdio.h>
#include <string.h>
int main()
{
     char mystr[30] = "I’m an example of function strchr";
     printf ("%s", strchr(mystr, 'f'));
     return 0;
}
//C String function – strstr
#include <stdio.h>
#include <string.h>
int main()
{
     char inputstr[70] = "String Function in C at Me ";
     printf ("Output string is: %s", strstr(inputstr, 'Me'));
     return 0;
}
