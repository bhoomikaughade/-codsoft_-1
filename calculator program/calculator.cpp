#include <iostream>

using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "Select an operation to perform:" << endl;
    cout << "1. Addition (+)" << endl;
    cout << "2. Subtraction (-)" << endl;
    cout << "3. Multiplication (*)" << endl;
    cout << "4. Division (/)" << endl;
    cout << "5. Exit" << endl;
}

int main() {
    int choice;
    double num1, num2, result;
    
    while (true) {
        displayMenu();
        
        // Get user choice
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice == 5) {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        }

        // Get the two numbers from the user
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        
        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid choice. Please select a valid operation." << endl;
        }
        
        cout << endl;
    }

    return 0;
}
