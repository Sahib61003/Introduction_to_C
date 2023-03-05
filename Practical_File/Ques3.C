#include <stdio.h>
int main()
{
    // initialising variables and taking input from user.
    int a,b,c,d,e,n=0;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);
    printf("Enter 4th number: ");
    scanf("%d",&d);
    printf("Enter 5th number: ");
    scanf("%d",&e);
    int nums[5]={a,b,c,d,e};
    //initialising max variable to store final value.
    int max=a;
    // using while loop checking maximum value.
    while (n<5)
    {
        max = (nums[n] > max)? nums[n]: max;
        n=n+1;
    }
  
    printf("\nMax is %d", max);
  
    return 0;
}
