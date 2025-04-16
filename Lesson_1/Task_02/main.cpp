#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double first_num1 = 0, second_num2 = 0, result = 0;
    char action = 0;
    int degree = 0;

    cout << "Simple calculator" << endl;
    cout << "Enter first num --> ";
    cin >> first_num1;

    cout << "Enter action (+, -, *, /, ^(for degree), s(for square root)): ";
    cin >> action;

    if (action == '+' || action == '-' || action == '*' || action == '/') {
        cout << "Enter second num --> ";
        cin >> second_num2;

        switch (action) {
        case '+':
            result = first_num1 + second_num2;
            cout << "Result: " << result;
            break;

        case '-':
            result = first_num1 - second_num2;
            cout << "Result: " << result;
            break;

        case '*':
            result = first_num1 * second_num2;
            cout << "Result: " << result;
            break;

        case '/':
            if (second_num2 != 0) {
            result = first_num1 / second_num2;
            cout << "Result: " << result;
            } else {
                cout << "Error: Division by zero." << endl;
                return 1;
            }
            break;

        default:
            cout << "Error: Invalid operation." << endl;
            return 1;
        }
    }

    else if (action == '^') {
        cout << "Enter the degree: ";
        cin >> degree;

        result = pow(first_num1, degree);
        cout << "\nNumber raised to the degree of " << degree << ": " << result << endl;
    }

    else if (action == 's') {
        if (first_num1 < 0) {
            cout << "\nError: Cannot take square root of the first number (negative)" << endl;
        } else {
            result = sqrt(first_num1);
            cout << "\nSquare root of the first number: " << result << endl;
        }
    } else {
        cout << "Error: Invalid operation." << endl;
        return 1;
    }

    return 0;
}
