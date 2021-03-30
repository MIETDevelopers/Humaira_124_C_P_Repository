//Humaira
//Binary search is an efficient algorithm for finding an item from a sorted list of items
//program:Binary search of number input by the user in an array 
#include <stdio.h> //header function file
int main() //main function
{
  int i, first, last, middle, n, search, array[100]; //Declaration of varaible and an array of size 100

  printf("Enter number of elements\n"); //printf function calling
  scanf("%d", &n); //user input for n

  printf("Enter %d integers\n", n); 

  for (i = 0; i < n; i++) //for loop for 'i' rows
    scanf("%d", &array[i]); 

  printf("Enter value to find\n"); //printf function calling
  scanf("%d", &search); //user input for search

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) { //using while loop  
    if (array[middle] < search) //conditional statements 
      first = middle + 1;
    else if (array[middle] == search) { //using else if
      printf("%d found at location %d.\n", search, middle+1); 
      break; //program stop
    }
    else //false
      last = middle - 1; 

    middle = (first + last)/2;
  }
  if (first > last) //true
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}