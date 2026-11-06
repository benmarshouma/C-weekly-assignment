#include <iostream>
using namespace std;

int main() 
{
    double balance, amount;

    cout << "Enter account balance: "<<endl;
    cin >> balance;

    while (balance > 0) {
        cout << "Enter withdrawal amount: "<<endl;
        cin >> amount;

        if (amount > balance) 
		{
            cout << "Insufficient balance!" << endl;
            break;
        }

        if (amount <= 0) {
            cout << "Enter a valid withdrawal amount!" << endl;
            continue;
        }

        balance = balance - amount;

        cout << "Withdrawal successful!" << endl;
        cout << "Remaining balance: " << balance << endl;

        if (balance == 0) {
            cout << "Your balance is zero. Transaction stopped." << endl;
            break;
        }
    }

    return 0;
}

