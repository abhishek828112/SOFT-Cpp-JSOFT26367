#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Exit\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Addition selected";
            break;

        case 2:
            cout << "Subtraction selected";
            break;

        case 3:
            cout << "Exiting";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}