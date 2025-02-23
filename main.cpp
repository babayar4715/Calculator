#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to My calculator" << endl;
    cout << "\nEnter your first number" << endl;

    double first_number, second_number, result;

    cin >> first_number;

    cout << "Enter your second number" << endl;
    cin >> second_number;

    cout << "Enter the operation you want between {+,-,*,/}" << endl;
    char operation;
    cin >> operation;

    if(operation == '+') {
        result = first_number + second_number;      
    } else if (operation == '-') {
        result = first_number - second_number;
    } else if (operation == '*') {
        result = first_number * second_number;
    } else if (operation == '/') {
        if (second_number != 0) {
            result = first_number / second_number;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 1;
        }
    } else {
        cout << "Error: Invalid operation." << endl;
        return 1;
    }

    cout << "Your answer is: " << result << endl;

    return 0;
}
    