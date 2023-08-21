#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    // Taking Input
    cout<< "Enter the first number: ";
    cin>> num1;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> num2;

    // Perform the operation By using switch case here 
    double result;
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                 cout << "Error: Division by zero is not allowed." << std::endl;
                return 1; // Exit with an error code
            }
            break;
        default:
             cout << "Error: Invalid operation." << std::endl;
            return 1; // Exit with an error code
    }

    // Here is our required result
    cout << "Result: " << result << std::endl;

    return 0; // Exit without errors
}
