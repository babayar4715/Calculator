#include <iostream>  // Include the iostream library for input/output operations

using namespace std;  // Use the standard namespace

int main() {
    // Print a welcome message to the user
    cout << "Welcome to My calculator" << endl;
    cout << "\nEnter your first number" << endl;

    // Declare variables to store the input numbers and the result
    double first_number, second_number, result;

    // Read the first number from the user
    cin >> first_number;

    // Prompt the user to enter the second number
    cout << "Enter your second number" << endl;
    // Read the second number from the user
    cin >> second_number;

    // Prompt the user to enter the desired operation
    cout << "Enter the operation you want between {+,-,*,/}" << endl;
    char operation;
    // Read the operation character from the user
    cin >> operation;

    // Perform the appropriate operation based on user input
    if (operation == '+') {
        // Addition
        result = first_number + second_number;      
    } else if (operation == '-') {
        // Subtraction
        result = first_number - second_number;
    } else if (operation == '*') {
        // Multiplication
        result = first_number * second_number;
    } else if (operation == '/') {
        // Division
        if (second_number != 0) {
            // Check for division by zero
            result = first_number / second_number;
        } else {
            // Print an error message if division by zero is attempted
            cout << "Error: Division by zero is not allowed." << endl;
            return 1;  // Exit the program with an error code
        }
    } else {
        // Print an error message if an invalid operation is entered
        cout << "Error: Invalid operation." << endl;
        return 1;  // Exit the program with an error code
    }

    // Print the result of the operation
    cout << "Your answer is: " << result << endl;

    return 0;  // Exit the program successfully
}
