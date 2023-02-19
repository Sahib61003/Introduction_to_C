//Code 1

/* Mathematical Operators in C 
    +, -, *, /, %
    + =  addition operator
    - =  subtraction operator
    * =  multiplication operator
    / =  int division operator
    % =  modulus operator
    Different Mathematical functions in C.
*/

int main(){
    int num1, num2;
    int add = 0; 
    int sub = 0;
    int mul = 0;
    int idiv = 0;
    int modiv = 0;
    float fdiv = 0.0;

    printf("\n Enter the first number: ");
    scanf("%d", &num1);

    printf("\n Enter the second number: ");
    scanf("%d", &num2);

    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    idiv = num1 / num2;
    modiv = num1 % num2;
    fdiv = (float)num1/num2;
    
    printf("\n%d+%d=%d", num1, num2, add);
    printf("\n%d-%d=%d", num1, num2, sub);
    printf("\n%d*%d=%d", num1, num2, mul);
    printf("\n%d/%d=%d (int division)", num1, num2, idiv);
    printf("\n%d %% %d =%d (modulus division)", num1, num2, modiv);
    printf("\n%d/%d=%.2f(normal division)", num1, num2, fdiv);

    return 0;
}

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Code 2

/* Illustrate the use of unary prefix increment and decrement 
++ implies 
    1. increment the value by 1
    2. return the new value
-- implies
    1. decrement the value by 1
    2. return the new value
*/

int main(){
    int num = 10;
    //increment 
    printf("\nThe value of num=%d", num);
    printf("\nThe value of ++num=%d", ++num);
    printf("\nThe new value of num=%d", num);
    //decrement 
    printf("\nThe value of num=%d", num);
    printf("\nThe value of --num=%d", --num);
    printf("\nThe new value of num=%d", num);

    return 0;
}


