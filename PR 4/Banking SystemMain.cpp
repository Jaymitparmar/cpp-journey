#include "Banking System.cpp"
int main()
{
    SavingsAccount s1;
    CheckingAccount c1;
    FixedDepositAccount f1;

    int choice;
    double amount;

    do
    {
        cout << endl;
        cout << "========== Banking System ==========" << endl;
        cout << "1. Savings Account" << endl;
        cout << "2. Checking Account" << endl;
        cout << "3. Fixed Deposit Account" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            s1.createSavingsAccount();

            cout << endl
                 << "Enter Deposit Amount : ";
            cin >> amount;

            s1.deposit(amount);

            cout << endl
                 << "Enter Withdraw Amount : ";
            cin >> amount;

            s1.withdraw(amount);

            s1.displayAccountInfo();

            s1.calculateInterest();

            break;

        case 2:

            c1.createCheckingAccount();

            cout << endl
                 << "Enter Deposit Amount : ";
            cin >> amount;

            c1.deposit(amount);

            cout << endl
                 << "Enter Withdraw Amount : ";
            cin >> amount;

            c1.withdraw(amount);

            c1.displayAccountInfo();

            break;

        case 3:

            f1.createFDAccount();

            cout << endl
                 << "Enter Deposit Amount : ";
            cin >> amount;

            f1.deposit(amount);

            f1.displayAccountInfo();

            f1.calculateInterest();

            break;

        case 4:

            cout << "Thank You for Visiting..." << endl;
            break;

        default:

            cout << "Invalid Choice..." << endl;
        }

    } while (choice != 4);

    return 0;
}