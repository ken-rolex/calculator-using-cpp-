#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    // Taking input from the user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    // Performing the operation based on user input
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 <<" ";
            break;
        case '-':
            cout << "Result: " << num1 - num2 <<" ";
            break;
        case '*':
            cout << "Result: " << num1 * num2 <<" ";
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 <<" ";
            } else {
                cout << "Error: Division by zero!" <<" ";
            }
            break;
        default:
            cout << "Invalid operation!" <<" ";
            break;
    }

    return 0;
}
