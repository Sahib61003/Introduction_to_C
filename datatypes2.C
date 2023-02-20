/* Program to check size of different datatypes. 
In General:
    short int = 2 bytes
    int = 4 bytes
    long int = 4 bytes
    char = 1 byte
    float = 4 bytes
    double = 8 bytes
    long double = 8 bytes
    signed integer = 4 bytes
    unsigned integer = 4 bytes
    signed char = 1 byte
    unsigned char = 1 byte
*/

int main(){
    printf("\nThe size of short integer is : %d", sizeof(short int)); 
    printf("\nThe size of unsigned integer is : %d", sizeof(unsigned int));
    printf("\nThe size of signed integer is : %d", sizeof(signed int));
    printf("\nThe size of integer is : %d", sizeof(int));
    printf("\nThe size of long integer is : %d", sizeof(long int));
    printf("\nThe size of character is : %d", sizeof(char));
    printf("\nThe size of unsigned character is : %d", sizeof(unsigned char));
    printf("\nThe size of signed character is : %d", sizeof(signed char));
    printf("\nThe size of floating point number is : %d", sizeof(float));
    printf("\nThe size of double number is : %d", sizeof(double));

    return 0;
}

/* Conversions of datatypes explicitly
1. Float to Int 
2. Int to Float
*/

//Code 1 
int main(){
    float f_num;
    int i_num;
    printf("\nEnter any floating point number:");
    scanf("%f", &f_num);
    
    i_num = (int)f_num;
    printf("\nThe integer variant of %f is =%d", f_num, i_num);

    return 0;
}

// Code 2
int main(){
    float f_num;
    int i_num;
    printf("\nEnter any integer:");
    scanf("%d", &i_num);
    
    f_num = (float)i_num;
    printf("\nThe float variant of %d is =%f", i_num, f_num);

    return 0;
}
