/*Humaira Gani
Program:Sorting an array using inertion sort
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a[] = {16, 19, 11, 15, 10, 12, 14};
    int i,j;

    for(i=0;i<7;i++)
    {
        j = i;

        //i is not the first element
        while(j>0)
        {
            //not in order
            if(a[j-1] > a[j])
            {
                //swapping
                int temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
            //in order
            else
            {
                break;
            }
            j--;
        }
    }

    for(i=0;i<7;i++)
        printf("%d\n",a[i]);

    return 0;
}