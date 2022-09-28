#include <stdio.h>
#include <math.h>

int main() {

char ch;
double x;
char operator;
double y;
double result;
int quotient;

print:
    printf("\nEnter the first number: ");
    scanf("%lf", &x);

    printf("\nOperator: ");
    scanf("%s", &operator);

    printf("\nEnter the second number: ");
    scanf("%lf", &y);

    switch(operator) {
        case '+' : result = x + y;
        printf("\nResult: %lf\n", result);
                break;
        case '-' : result = x - y;
        printf("\nResult: %lf\n", result);
                break;
        case 'x' : result = x * y;
        printf("\nResult: %lf\n", result);
                break;
        case '*' : result = x * y;
        printf("\nResult: %lf\n", result);
                break;
        case '/' : result = x / y;
        printf("\nResult: %lf\n", result);
                break;
        case 'r' : result = fmod(x, y);
        printf("\nResult: %lf\n", result);
                break;
        case 'q' : quotient = x / y;
        printf("\nResult: %d\n", quotient);
                break;
        default : printf("\nCannot display result!\nPlease enter a valid operator!");
    }

again:
    printf ("\nDo you want to repeat the operation? (Y/N) ");
    scanf (" %c", &ch);

    if(ch == 'y' || ch == 'Y') {
        goto print;
    }
    
    else if(ch == 'n' || ch == 'N') {
        printf("\nExiting the program...\n");
        printf("\nDone!\n\n");
        return 0;
    }
    
    else {
        printf("\nPlease enter Yes or No!\n");
        goto again;
    }

    return 0;
}
