//Program:To find max element and index in array
#include<stdio.h>
int main()
{
	int arr[6]={7, 3, 9, 13, 18, 12};//Declaring an array of size 3 float data type
	int i,large;//variable declaration 
	large=arr[0]; //assigning the value at 0th index of an array that is 7 to large
	int index;
	for (i = 1; i < 6; i++)//For Loop,intialization,condition,increment by 1
{
		if (arr[i] > large)//if array  i is greater then loop will continue 
    	{
    	large=arr[i]; //assigining array at 'i' index to large
    	index=i;
		}
}		
	printf("Largest element in the array is %d ", large);// printing Largest element 
	printf("Index %d",index);//printing index value of array

	return 0;
}