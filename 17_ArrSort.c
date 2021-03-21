//Name:Bharat Sharma    
//Program: Sorting an array using insertion sort

#include <stdio.h>    //Pre-processor directive to include standard input and output functions header file

int main(){        //Main function
    int n, i, j, temp; //Variable declaration 
    int arr[64];    //Array declaration
    
    printf("Enter number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (i = 1 ; i <= n - 1; i++){   //For loop.

	    j = i;
            while ( j > 0 && arr[j-1] > arr[j]){ 
            //Swap function will help for the purpose.       
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    printf("Sorted list in ascending order:\n");
    for (i = 0; i <= n - 1; i++){
        printf("%d\n", arr[i]);
    }
    return 0;  //Return function
}