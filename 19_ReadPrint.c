  
//Bharat Sharma
//Program: to read and print elements in two dimensional array. 

#include<stdio.h>     //Pre-processor directive to include standard input and output functions header file
int main(){        //Main function
   
   int disp[2][3]; // 2D array declaration
   
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
    //printf and scanf function calling    
         printf("Enter value for disp[%d][%d]:\n", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   printf("Two Dimensional array elements:\n");  //Printing array elements 
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;   //Return Function
} 