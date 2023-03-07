#include <stdio.h>
// declaring function fibonacci.
int fibonacci(int n);
int main()
{
    // declaring variable.
   int n, i = 0, c;
   // taking user input for no. of elements to display.
   printf("\nEnter the number of elements you want to display in series: ");
   scanf("%d",&n);
   printf("Fibonacci series is \n"); 

   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", fibonacci(i));
      i++; 
   }
   return 0;
} 
int fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( fibonacci(n-1) + fibonacci(n-2) );
}
