#include <iostream>
#include <string>

using namespace std;

class Bank {
private:
    string name, address;
    char acc_type;
    float balance;

public:
    void open_account() {
        cin.ignore(); // Clear the newline character left in the buffer
        cout << "Enter your full name: ";
        getline(cin, name);
        cout << "Enter your address: ";
        getline(cin, address);
        cout << "What type of account you want to open saving(S) or Current(C): ";
        cin >> acc_type;
        cout << "Enter how much money you want to deposit: ";
        cin >> balance;
        cout << "Account Created Successfully";
    }

    void deposit_money() {
        int Amount;
        cout << "Enter how much money you want to deposit: ";
        cin >> Amount;
        balance += Amount;
        cout << "\nAvailable Balance: " << balance;
    }

    void withdraw_money() {
        float amount;
        cout << "Enter how much money you want to withdraw: ";
        cin >> amount;
        balance -= amount;
        cout << "\nAvailable balance: " << balance;
    }

    void display_account() {
        cout << "Name: " << name << endl
             << "Address: " << address << endl
             << "Type: " << acc_type << endl
             << "Balance: " << balance << endl
             << endl;
    }
};

int main() {
    int choice, account_number;
    Bank customer1, customer2;

    do {
        cout << "\n1) Open account 1" << endl;
        cout << "2) Open account 2" << endl;
        cout << "3) Deposit account" << endl;
        cout << "4) Withdraw money" << endl;
        cout << "5) Display Account" << endl;
        cout << "6) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear the newline character from the buffer

        switch (choice) {
            case 1:
                cout << "Opening account 1...\n";
                customer1.open_account();
                break;
            case 2:
                cout << "Opening account 2...\n";
                customer2.open_account();
                break;
            case 3:
                cout << "Enter account number (1 or 2): ";
                cin >> account_number;
                if (account_number == 1) {
                    customer1.deposit_money();
                } else if (account_number == 2) {
                    customer2.deposit_money();
                } else {
                    cout << "Invalid account number.\n";
                }
                break;
            case 4:
                cout << "Enter account number (1 or 2): ";
                cin >> account_number;
                if (account_number == 1) {
                    customer1.withdraw_money();
                } else if (account_number == 2) {
                    customer2.withdraw_money();
                } else {
                    cout << "Invalid account number.\n";
                }
                break;
            case 5:
                cout << "Enter account number (1 or 2): ";
                cin >> account_number;
                if (account_number == 1) {
                    customer1.display_account();
                } else if (account_number == 2) {
                    customer2.display_account();
                } else {
                    cout << "Invalid account number.\n";
                }
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 6);

    return 0;
}