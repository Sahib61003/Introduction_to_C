#include <math.h>
#include <stdio.h>
int main()
{
    // declaring variable and taking input from user
    int n1;
    printf("Enter a number between 1 to 10: ");
    scanf("%d", &n1);
    
    //checking whether number is between 1 to 10 or not.
    if(n1>10){
        printf("Invalid");
    }
    else if(n1<=0){
        printf("Invalid");
    } 

    // using switch case checking whether number is odd or not.
    else{
    switch (n1%2){
        case 0:
        printf("The number is Even");
        break;
        case 1:
        printf("The number is Odd");
        break;
    }
    }
}
    
