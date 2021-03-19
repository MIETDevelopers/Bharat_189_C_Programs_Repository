#include <stdio.h>    // Pre-processor directive to include standard input and output functions header file

int main()            //Main function 
{
  int i,num,n,large=0;   // variable declaration and initialisation 

  printf("How many numbers: ");
  scanf("%d",&n);
  
  for(i=0; i<n; i++)       // For loop
  {
    printf("\nEnter number %d: ",i+1);
    scanf("%d",&num);
    if(num>large)
    large=num;
  }

  printf("\n\nThe Largest Number is %d",large);    //print statement 
  return 0;       // return 0 to oprerating system

}