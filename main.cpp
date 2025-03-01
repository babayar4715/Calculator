#include <iostream>  // Include the iostream library for input/output operations

using namespace std;  // Use the standard namespace

/**
 * Function to draw a rectangle using asterisks ('*')
 *
 * @param width  The width of the rectangle
 * @param height The height of the rectangle
 */
void drawRectangle(int width, int height) {
    // Loop through each row of the rectangle
    for (int i = 0; i < height; i++) {
        // Loop through each column of the current row
        for (int j = 0; j < width; j++) {
            // Print an asterisk to represent part of the rectangle
            cout << "*";
        }
        // After completing a row, move to the next line
        cout << endl;
    }
}

/**
 * Function to draw a triangle using asterisks ('*')
 *
 * @param height The height of the triangle
 */
void drawTriangle(int height) {
    // Loop through each row of the triangle
    for (int i = 1; i <= height; i++) {
        // Loop through each column of the current row
        for (int j = 1; j <= i; j++) {
            // Print an asterisk to represent part of the triangle
            cout << "*";
        }
        // After completing a row, move to the next line
        cout << endl;
    }
}

int main() {
    // Print a welcome message
    cout << "Welcome to My Program" << endl;

    // Print the menu options
    cout << "\nChoose an option:" << endl;
    cout << "1. Calculator" << endl;
    cout << "2. Draw Rectangle" << endl;
    cout << "3. Draw Triangle" << endl;

    int choice;
    // Read the user's choice
    cin >> choice;

    if (choice == 1) {
        // Calculator functionality
        cout << "\nEnter your first number" << endl;
        double first_number, second_number, result;
        cin >> first_number;

        cout << "Enter your second number" << endl;
        cin >> second_number;

        cout << "Enter the operation you want between {+,-,*,/}" << endl;
        char operation;
        cin >> operation;

        // Perform the selected operation
        if (operation == '+') {
            result = first_number + second_number;
        } else if (operation == '-') {
            result = first_number - second_number;
        } else if (operation == '*') {
            result = first_number * second_number;
        } else if (operation == '/') {
            if (second_number != 0) {
                result = first_number / second_number;
            } else {
                // Handle division by zero
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;
            }
        } else {
            // Handle invalid operation
            cout << "Error: Invalid operation." << endl;
            return 1;
        }

        // Print the result
        cout << "Your answer is: " << result << endl;
    } else if (choice == 2) {
        // Draw Rectangle
        int width, height;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
        drawRectangle(width, height);
    } else if (choice == 3) {
        // Draw Triangle
        int height;
        cout << "Enter the height of the triangle: ";
        cin >> height;
        drawTriangle(height);
    } else {
        // Handle invalid choice
        cout << "Invalid choice." << endl;
    }

    return 0;
}
