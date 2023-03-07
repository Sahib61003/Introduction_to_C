#include <stdio.h>
//creating two functions.
void swap_call_by_val(int,int);
void swap_call_by_ref(int*,int*);

int main()

// initialising variables and inputting value.
{   int a = 1, b = 2, c = 3, d = 4;
    printf("\nIn main(), a=%d and b=%d", a,b);
    swap_call_by_val(a,b);
    //displaying swapped value.
    printf("\nIn main(), a=%d and b=%d", a,b);

    printf("\nIn main(), c=%d and d=%d", c,d);
    swap_call_by_ref(&c,&d);
    //displaying swapped value.
    printf("\nIn main(), c=%d and d=%d", c,d);
    return 0;
}

//swapping by call by value method.
void swap_call_by_val(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nIn function (call by value method) a=%d aand b=%d", a,b);
}

//swapping by call by referance method.
void swap_call_by_ref(int*c, int*d){
    int temp;
    temp = *c;
    *c = *d;
    *d = temp;
    printf("\nIn function (call by referance method) c=%d aand d=%d", *c,*d);
}

    
