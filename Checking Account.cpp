#include <iostream>
using namespace std; 

int main()
{
    int numMonths, months;
    double monthlyFees, currentBalance, monthlyDeposit, monthlyWithdraw, endingBalance;
    double accountPositives, accountNegatives;
    double totalMonthlyFees = 0;
    double totalDeposits = 0;
    double totalWithdrawals = 0;

    cout << "How many months do you wish to calculate? ";
    cin >> numMonths;

    while (numMonths < 1 )
    {
        cout << "Error. Value must be at least 1. Please enter another value. ";
        cin >> numMonths;
    }

    cout << "What are your monthly fees? ";
    cin >> monthlyFees;

    while (monthlyFees < 0)
    {
       cout << "Error. Negative values are not accepted. Please enter another value. ";
       cin >> monthlyFees;  
    }

    cout << "What is your current balance? ";
    cin >> currentBalance;

    while (currentBalance < 0)
    {
        cout << "Error. Negative values are not accepted. Please enter another value. ";
        cin >> currentBalance;
    }

        for (months = 1; months <= numMonths; months++)
        {
            cout << "How much was deposited into the account in month " << months << "? ";
            cin >> monthlyDeposit;

        while (monthlyDeposit < 0)
        {
            cout << "Error. Negative values are not accepted. Please enter another value. ";
            cin >> monthlyDeposit;
        }

            cout << "How much was withdrawn from the account in month " << months << "? ";
            cin >> monthlyWithdraw;

        while (monthlyWithdraw < 0)
        {
            cout << "Error. Negative values are not accepted. Please enter another value. ";
            cin >> monthlyWithdraw; 
        }

            totalMonthlyFees += monthlyFees;
            totalDeposits += monthlyDeposit;
            totalWithdrawals += monthlyWithdraw;
        }

    //Calculations
    accountPositives = currentBalance + totalDeposits;
    accountNegatives = totalMonthlyFees + totalWithdrawals;
    endingBalance = accountPositives - accountNegatives; 

    //Output
    cout << "\nThe beginning balance is " << currentBalance << endl;
    cout << "The total monthly fees is " << totalMonthlyFees << endl;
    cout << "The total amount of deposits is " << totalDeposits << endl;
    cout << "The total amount of withdrawals is " << totalWithdrawals << endl;
    cout << "The ending balance is " << endingBalance << endl;


return 0;
}