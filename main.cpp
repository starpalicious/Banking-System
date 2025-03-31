#include <iostream>

using namespace std;

void showBalance(float& balance) {
    cout << "Your balance is: $" << balance << endl;
}
void deposit(float& balance) {
    float amount{};
    cout << "2. Deposit Cash\n";
    cin >> amount;
    //check input
    if (amount >= 0) {
        balance += amount;
    }
    else {
        cout << "no negatives ";
    }
}
void withdraw(float& balance) {
    float amount{};
    //print text
    cout << "3. Withdraw\n";
    cin >> amount;


    if (balance < amount) {
        cout << "Not enough money, trying to withdraw too much";
    }
    else {
        balance -= amount;
    }
}

int main() {
    float balance = 668.00;
    int choice = 0;

    bool stat = true;
    while (stat) {
        cout << "\n---- What would you like for us to take you? ---:" << endl;
        cout << "1. Show My Balance\n";
        cout << "2. Deposit Cash\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit Program!\n";
        cin >> choice;

        switch (choice) {
        case 1:
            showBalance(balance);
            break;
        case 2:
            deposit(balance);
            break;
        case 3:
            withdraw(balance);
            break;
        case 4:
            stat = false;
            cout << "Thank you come again!";
            break;
        default: cout << "ehh could you try that again?";
            break;
        }

    }


    return 0;
}

