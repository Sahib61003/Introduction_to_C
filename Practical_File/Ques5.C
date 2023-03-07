#include <stdio.h>
int main()
{   // initialising variables and taking input from user.
    int i,fact=1,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    //checking if user input is not zero then calculate factorial
    if(num==0){
        fact=1;
        printf("Factorial is 1.");
    }
    else{
        for(i=1;i<=num;i++){
            fact=fact*i;
        }
        //printing result
        printf("Factorial of %d is: %d \n",num,fact);
    }
    return 0;
    }
