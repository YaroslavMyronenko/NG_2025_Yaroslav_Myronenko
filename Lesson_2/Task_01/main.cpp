#include <iostream>

using namespace std;

int main()
{
    const int num_account = 11;
    double account[num_account] = {0};
    int choice = 0;

    do {
        cout << "Menu Bank!" << endl;
        cout << "1. Put money in the bank" << endl;
        cout << "2. Withdraw money from the bank" << endl;
        cout << "3. Show all bank accounts" << endl;
        cout << "4. Amount in all bank accounts" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter the action you want --> ";
        cin >> choice;

        if (choice == 1) {
            int index = 1;
            double amaunt = 0;

            cout << "\nEnter an account number from 1 to 10 --> ";
            cin >> index;

            cout << "Enter the amount you want to deposit into the account --> " << endl;
            cin >> amaunt;

            account[index] += amaunt;
            cout << "Accounts: " << index << " now has " << account[index] << "$" << endl;
        }

        else if (choice == 2) {
            int index = 1;
            double amaunt = 0;

            cout << "\nEnter an account number from 1 to 10 --> ";
            cin >> index;

            cout << "Enter the amount to withdraw --> " << endl;
            cin >> amaunt;

            if (account[index] > amaunt) {
                account[index] -= amaunt;
                cout << "Funds successfully withdrawn " << "Account balance " << account[index] << " $" << endl;
            }
            else cout << "Insufficient funds";
        }

        else if (choice == 3) {
            cout << "\nAll accounts: " << endl;
            for (int index = 1; index < num_account; index++) {
                cout << index << " score: " << account[index] << " $" << endl;
            }
        }

        else if (choice == 4) {
            double sum = 0;

            for (int index = 1; index < num_account; index++) {
                sum += account[index];
            }
            cout << "\nThe amount of money in all accounts " << sum << " $" << endl;
        }

    } while (choice != 0);

    return 0;
}
