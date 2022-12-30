#include <iostream>
using namespace std;

int main() {
    int x, y;
    char op;
    char ch;

    cout << "\nSIMPLE CALCULATOR\n";

print:
    cout << "\nEnter first number: ";
    cin >> x;

    cout << "Enter Operator: ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> y;

    switch (op) {
        case '+':
            cout << "\nResult: " << x + y << endl;
            break;
        case '-':
            cout << "\nResult: " << x - y << endl;
            break;
        case '*':
            cout << "\nResult: " << x * y << endl;
            break;
        case 'x':
            cout << "\nResult: " << x * y << endl;
            break;
        case '/':
            cout << "\nResult: " << x / y << endl;
            break;
        case '%':
            cout << "\nResult: " << x % y << endl;
            break;
        case 'q':
            cout << "\nResult: " << x / y << endl;
            break;
        default:
            cout << "\n\nCannot display result!\nPlease enter a valid operator!" << endl;
    }

again:
    cout << "\nDo you want to repeat this operation? (Y/N) ";
    cin >> ch;

    if(ch == 'Y' || ch == 'y') {
        goto print;
    }

    else if(ch == 'N' || ch == 'n') {
        cout << "\nExiting the program..." << endl;
        cout << "Done!\n" << endl;
        return 0;
    }

    else {
        cout << "\nPlease enter 'Y' or 'N'";
        goto again;
    }

}
