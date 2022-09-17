// Simple calculator project in C
// Included math.h because C doesn't support modulus between double/float values

# include <stdio.h>
# include <math.h>

int main() {

    // Taking the first number as an input from the user

    double x;
    printf("Enter the first number: ");
    scanf("%lf", &x);

    // Taking the operator as an input from the user as +, -, *, x, /, r (for remainder) and q (for quotient)

    char operator;
    printf("Enter the operator: ");
    scanf("%s", &operator);
    
    // Taking the second number as an input from the user

    double y;
    printf("Enter the second digit: ");
    scanf("%lf", &y);

    double result;
    int quotient;

    switch(operator) {
        case '+' : result = x + y;
        printf("Result: %lf", result);
                break;
        case '-' : result = x - y;
        printf("Result: %lf", result);
                break;
        case 'x' : result = x * y;
        printf("Result: %lf", result);
                break;
        case '*' : result = x * y;
        printf("Result: %lf", result);
                break;
        case '/' : result = x / y;
        printf("Result: %lf", result);
                break;
        case 'r' : result = fmod(x, y);
        printf("Result: %lf", result);
                break;
        case 'q' : quotient = x / y;
        printf("Result: %d", quotient);
                break;
        default : printf("Please enter a valid operator!");
    }

    return 0;
}
