/* About Different Datatypes

Different datatypes used are : 
int - integer
float - floating point number
char - character
double - double precision floating point number
long int - long integer
char array - array of characters

The program takes input from the user and prints it back to the user.
%d takes integer value as signed decimal integer.
%f takes floating point value as decimal floating point.
%e takes floating point value as scientific notation.
%c takes character value as character.
%s takes string value as string.
*/


int main(){
    int num;
    float amt;
    char code;
    double pi;
    long int population_of_india;
    char msg[10];

    printf("Enter the value of num: ");
    scanf("%d", &num);  

    printf("\nEnter the value of amt: ");
    scanf("%f", &amt);
    
    printf("\nEnter the value of pi: ");
    scanf("%e", &pi);

    printf("\nEnter the population_of_india: ");
    scanf("%d", &population_of_india);

    printf("\nEnter the value of code: ");
    scanf("%s", &code);

    printf("\nEnter the message: ");
    scanf("%s", msg);

    printf("\nNUM=%d \nAMT=%f \nPi=%e \nPOPULATION OF INDIA=%d \nCODE=%c \nMESSAGE=%s", num, amt, pi,
    population_of_india, code, msg);

    return 0;
}
