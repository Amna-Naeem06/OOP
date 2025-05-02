#include <iostream>
using namespace std;
class Bank
{
private:
    string name;
    int accountnumber;
    int accnumber;
    double openingbalance;
    double deposit;
    double withdraw;

public:
    Bank()
    {
        name = "unknown";
        accountnumber = 0;
        accnumber = 0;
        openingbalance = 0;
        deposit = 0;
        withdraw = 0.0;
    }
    void OpenAccount();
    void ShowAccount();
    void Deposit();
    void Withdrawal();
    void Search();
};
void Bank ::OpenAccount()
{
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter the account number: ";
    cin >> accountnumber;
    cout << "Enter the opening balance: ";
    cin >> openingbalance;
}
void Bank ::ShowAccount()
{
    cout << "Name: " << name << endl;
    cout << "Accountnumber: " << accountnumber << endl;
    cout << "Account Balance: " << openingbalance << endl;
}
void Bank ::Deposit()
{
    cout << "Enter the amount you want to deposit: ";
    cin >> deposit;
    cout << "Successfully deposited!" << endl;
    deposit = deposit + openingbalance;
    cout << "Your new balance is: " << deposit << endl;
}

void Bank ::Withdrawal()
{
    cout << "Enter the amount you want to withdraw: ";
    cin >> withdraw;
    if (withdraw <= deposit)
    {
        cout << "You have withdrawn: " << deposit - withdraw << endl;
    }
    else
    {
        cout << "Don't have enough balance" << endl;
    }
}
void Bank ::Search()
{
    cout << "Enter account number to show details: ";
    cin >> accnumber;
    if (accnumber == accountnumber)
    {
        cout << "Displaying account information: " << endl;

        ShowAccount();
    }
    else
    {
        cout << "Account not found!" << endl;
    }
}
int main()
{
    Bank b1;
    b1.OpenAccount();
    b1.ShowAccount();
    b1.Deposit();
    b1.Withdrawal();
    b1.Search();
}