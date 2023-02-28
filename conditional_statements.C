//Conditional Statements: if, if-else, if-else-if ladder, nested if-else, switch-case

/* BASIC:
Usage of if, else and else if
if (condition){
    //code to be executed if condition is true
}
else if (condition){
    //code to be executed if condition is true
}
else{
    //code to be executed if condition is false
}
*/


//Examples of some conditional statemnts.

/* Program to check whether you can vote or not in India
Rule: You should be 18 years old
*/

int main(){
    int age;
    printf("\nEnter the age:");
    scanf("%d", &age);
    if (age >= 18){
    printf("\nYou are eligible to vote");
    }
    else{
        printf("\nYou are not eligible to vote");
    }
    return 0;

}
*/

/* Program to check whether the given number is odd or even.
Rule: If the remainder of the number divided by 2 is 0, then the number is even.
*/

int main(){
    int num;
    printf("Enter any number: \n");
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("%d is even\n", num);
    }
    else{
        printf("%d is odd", num);
    }
    return 0;
}


/* Program to check inputted year is Leap year or not.
Rule: A year is a leap year if it is divisible by 4 and not divisible by 100 or divisible by 400.
*/

int main(){
    int year;
    printf("\nEnter any year: ");
    scanf("%d", &year);
    if (((year % 4 == 0)&&(year % 100 != 0)) || (year % 400 == 0)){
        printf("\nLeap Year");
    }
    else{
        printf("\nNot a leap year.");
    }

    return 0;

}

/*  
    Codes to see the significance of nested if and && relational operator
    Program to print largest number using nested if loops
*/

int main(){
    int num1, num2, num3, big = 0;
    printf("\nEnter the first number:");
    scanf("%d", &num1);
    printf("\nEnter the second number:");
    scanf("%d", &num2);
    printf("\nEnter the third number:");
    scanf("%d", &num3);

    if (num1 > num2){
        if (num1 > num3){
        printf("\n%d is greater than %d and %d.", num1, num2, num3);
        }
        else{
            printf("\n%d is greater than %d and %d.", num3, num2, num1);
        }
    } 
    else if (num2 > num1){
        if (num2 > num3){
        printf("\n%d is greater than %d and %d.", num2, num1, num3);
        } 
        else{
        printf("\n%d is greater than %d and %d.", num3, num1, num2);
        }
    }
    return 0;
}


// Program to print largest number using && operators without nested if
int main(){
    int num1, num2, num3, big = 0;
    printf("\nEnter the first number: ");
    scanf("%d", &num1);
    printf("\nEnter the second number: ");
    scanf("%d", &num2);

    printf("\nEnter the third number: ");
    scanf("%d", &num3);
    
    if ((num1 > num2) && (num1 > num3)){
        printf("\n%d is greater than %d and %d", num1, num2, num3);
    } else if ((num2 > num1) && (num2 > num3)){
        printf("\n%d is greater than %d and %d", num2, num1, num3);
    }
    else{
        printf("\n%d is greater than %d and %d", num3, num1, num2);
    }   
    return 0;
}


// Program to check vowel using if else, without switch.

int main(){
    char ch;
    printf("\nEnter any character: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||
        ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' ||ch == 'O' ||
        ch == 'U'){
            printf("\n%c is a vowel.", ch);
    } else {
        printf("\n%c is a consonant.", ch);
    }
    return 0;
}

/*  Usage of switch statement 
    Syntax:
    switch (expression){
        case constant1:
            // statements
            break;
        case constant2:
            // statements
            break;
        case constant3:
            // statements
            break;
        default:
            // statements
    }
*/

// Program to check vowel using switch

int main(){
    char ch;
    printf("\nEnter any character: ");
    scanf("%c", &ch);
    switch (ch){
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
        case 'A' :
        case 'E' :
        case 'I' :
        case 'O' :
        case 'U' :
            printf("\n%c is vowel", ch);
            break;
        default:
            printf("\n%c is consonant", ch);
        
        return 0;
    }
}


