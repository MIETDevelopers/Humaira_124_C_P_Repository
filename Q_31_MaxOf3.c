//Humaira 
//To check maximum of 3 numbers entered by User
#include <stdio.h> //header function file
int main() //main function
{
  int i,num,n,large=0;//Variable intialization and declaration

  printf("1,2,3: ");//printf calling function
  scanf("%d,%d,%d",&n);//reads the number entered by user
  
  for(i=0; i<n; i++)//using for loop
  {
    printf("\nEnter number %d: ",i+1);
    scanf("%d",&num);
    if(num>large) /*using conditional if, if 'num' is larger than 'large' then
    'True' large 'equals' to 'num'*/
    large=num;
  }

  printf("\n\nThe Largest Number is %d",large);//printing the largest required number
  return 0;
}