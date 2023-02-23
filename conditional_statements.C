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
