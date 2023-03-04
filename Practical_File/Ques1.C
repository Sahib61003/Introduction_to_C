#include <math.h>
#include <stdio.h>
int main() {
    //declaring variables and taking user input.
    double a, b, c, D, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);    
    //equation to solve roots.
    D = b * b - 4 * a * c;
    //checking conditions using if else if and else.
    // if roots are greater than zero.
    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    // if roots are equal to zero.
    else if (D == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    // if roots are not real or less than zero.
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-D) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart,    imagPart, realPart, imagPart);
    }
    return 0;
}
