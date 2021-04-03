/*Humaira 
Program:Searching an element in an array using linear search
Linear search means finding an element within the list of Array 
If x is the number and belongs an element in the list then return index
If x does not belong to any element then return -1
*/
#include<stdio.h>
  
int main()
{
    int a[20],i,x,n;// declaring and intializing an array(a) of size 20,Declaring i, x, n variables of integer data type

    printf("How many elements?");//Printf calling function
    scanf("%d",&n);//reads number 
     
    printf("Enter array elements:n");
    for(i=0;i<n;++i)//using for loop 
        scanf("%d",&a[i]);//reads the user input 
     
    printf("nEnter element to search:");
    scanf("%d",&x);
     
    for(i=0;i<n;++i)//using for loop (element to search) 
        if(a[i]==x)
            break;//it terminates the loop
     
    if(i<n)//if i less than n then true means Element is in the array list
        printf("Element found at index %d",i);
    else//if the above condition is not satisfied then false means Element is not in the list 
        printf("Element not found");
    return 0;
}
