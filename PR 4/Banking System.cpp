#include <iostream>
#include <string.h>
using namespace std;

// Base Class
class BankAccount
{
protected:
    int accountNumber;
    char accountHolderName[50];

private:
    double balance;

public:
    void createAccount()
    {
        cout << endl
             << "Enter Account Number : ";
        cin >> accountNumber;

        fflush(stdin);

        cout << "Enter Account Holder Name : ";
        gets(accountHolderName);

        cout << "Enter Balance : ";
        cin >> balance;
    }

    void deposit(double amount)
    {
        balance += amount;

        cout << endl
             << "Amount Deposited Successfully..." << endl;
    }

    virtual void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;

            cout << endl
                 << "Withdraw Successful..." << endl;
        }
        else
        {
            cout << "Insufficient Balance..." << endl;
        }
    }

    double getBalance()
    {
        return balance;
    }

    void setBalance(double b)
    {
        balance = b;
    }

    virtual void displayAccountInfo()
    {
        cout << endl;
        cout << "Account Number      : " << accountNumber << endl;
        cout << "Account Holder Name : " << accountHolderName << endl;
        cout << "Balance             : " << balance << endl;
    }

    virtual void calculateInterest()
    {
        cout << "No Interest Available..." << endl;
    }
};

// Savings Account
class SavingsAccount : public BankAccount
{
private:
    double interestRate;

public:
    void createSavingsAccount()
    {
        createAccount();

        cout << "Enter Interest Rate : ";
        cin >> interestRate;
    }

    void calculateInterest()
    {
        double interest;

        interest = (getBalance() * interestRate) / 100;

        cout << endl
             << "Interest      : " << interest << endl;

        cout << "Total Balance : "
             << getBalance() + interest << endl;
    }
};

// Checking Account
class CheckingAccount : public BankAccount
{
private:
    double overdraftLimit;

public:
    void createCheckingAccount()
    {
        createAccount();

        cout << "Enter Overdraft Limit : ";
        cin >> overdraftLimit;
    }

    void withdraw(double amount)
    {
        if (amount <= getBalance() + overdraftLimit)
        {
            setBalance(getBalance() - amount);

            cout << endl
                 << "Withdraw Successful..." << endl;
        }
        else
        {
            cout << "Overdraft Limit Exceeded..." << endl;
        }
    }
};

// Fixed Deposit Account
class FixedDepositAccount : public BankAccount
{
private:
    int term;
    double interestRate;

public:
    void createFDAccount()
    {
        createAccount();

        cout << "Enter FD Term (Months) : ";
        cin >> term;

        cout << "Enter Interest Rate : ";
        cin >> interestRate;
    }

    void calculateInterest()
    {
        double interest;

        interest = (getBalance() * interestRate * term) / (100 * 12);

        cout << endl
             << "FD Interest  : " << interest << endl;

        cout << "Total Amount : "
             << getBalance() + interest << endl;
    }
};