#include <stdio.h>
// initialising variables and taking input from user.
int main(){
    int i, num; 
    printf("\nEnter the value of number: "); 
    scanf ("%d", &num); 

    printf("Number  Square  Cube\n");
    i=1; 
    //using do while loop
    do 
    { 
       printf("\n %d \t  %d \t  %d \t ", i,i*i ,i*i*i); 
       i++; 
    } 
       while(i<=num);
          printf("\n"); 
          return 0; 
 }