#include <iostream>  // Include the iostream library for input/output operations

using namespace std;  // Use the standard namespace

void drawRectangle(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void drawTriangle(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    cout << "Welcome to My Program" << endl;
    cout << "\nChoose an option:" << endl;
    cout << "1. Calculator" << endl;
    cout << "2. Draw Rectangle" << endl;
    cout << "3. Draw Triangle" << endl;
    
    int choice;
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
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;
            }
        } else {
            cout << "Error: Invalid operation." << endl;
            return 1;
        }

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
        cout << "Invalid choice." << endl;
    }

    return 0;
}
