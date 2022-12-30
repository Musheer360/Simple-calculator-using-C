#include <iostream>
using namespace std;

int main() {
    int x, y;
    char op;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter Operator: ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> y;

    switch (op) {
        case '+':
            cout << "Result: " << x + y << endl;
            break;
        case '-':
            cout << "Result: " << x - y << endl;
            break;
        case '*':
            cout << "Result: " << x * y << endl;
            break;
        case '/':
            cout << "Result: " << x / y << endl;
            break;
        case '%':
            cout << "Result: " << x % y << endl;
            break;
        case 'q':
            cout << "Result: " << x / y << endl;
            break;
        default:
            cout << "Invalid operator" << endl;
    }

    return 0;
}
