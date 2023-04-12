#include <iostream>
#include <string> 
using namespace std; 

int main()
{
string runner1, runner2, runner3;
int runner1Time, runner2Time, runner3Time, month, day;

cout << "Enter the name of runner #1: ";
getline(cin, runner1);
cout << "What was his or her time? ";
cin >> runner1Time;
while (runner1Time < 1)
{
    cout << "Time must be at least 1. Enter a valid time. ";
    cin >> runner1Time; 
}
cin.ignore();

cout << "Enter the name of runner #2: ";
getline(cin, runner2);
cout << "What was his or her time? ";
cin >> runner2Time;
while (runner2Time < 1)
{
    cout << "Time must be at least 1. Enter a valid time. "; 
    cin >> runner2Time;
}
cin.ignore();

cout << "Enter the name of runner #3: ";
getline(cin, runner3);
cout << "What was his or her time? ";
cin >> runner3Time;
while (runner3Time < 1)
{
    cout << "Time must be at least 1. Enter a valid time. "; 
    cin >> runner3Time;
}
cin.ignore();

 if (runner1Time < runner2Time)
    {
        if (runner1Time < runner3Time)
        {
            cout << "First Place: " << runner1 << " @ "<< runner1Time << " minutes." << endl;

            if (runner2Time < runner3Time)
            {
               cout << "Second Place: " << runner2 << " @ " << runner2Time << " minutes." << endl;
               cout << "Third Place: " << runner3 << " @ " << runner3Time << " minutes." << endl;
            }
            else
            {
               cout << "Second Place: " << runner3 << " @ " << runner3Time << " minutes." << endl;
               cout << "Third Place: " << runner2 << " @ " << runner2Time << " minutes." << endl; 
            }
        }
    }
    if (runner2Time < runner3Time )
    {
        if (runner2Time < runner1Time)
        {
            cout << "First Place: " << runner2Time << " @ " << runner2Time << " minutes." << endl;

            if (runner1Time < runner3Time )
            {
                cout << "Second Place: " << runner1 << " @ " << runner1Time << " minutes." << endl;
                cout << "Third Place: " << runner3 << " @ " << runner3Time << " minutes." << endl;
            }
            else
            {
                cout << "Second Place: " << runner3 << " @ " << runner3Time << " minutes." << endl;
                cout << "Third Place: " << runner2 << " @ " << runner2Time << " minutes." << endl; 
            }
        }
    }
    if (runner3Time < runner2Time)
    {
        if (runner3Time < runner1Time)
        {
            cout << "First Place: " << runner3 << " @ " << runner3Time << " minutes." << endl; 

            if (runner1Time < runner2Time)
            {
                cout << "Second Place: " << runner1 << " @ " << runner1Time << " minutes." << endl;
                cout << "Third Place: " << runner2 << " @ " << runner2Time << " minutes." << endl;
            }
            else 
            {
                cout << "Second Place: " << runner2 << " @ " << runner2Time << " minutes." << endl; 
                cout << "Third Place: " << runner1 << " @ " << runner1Time << " minutes." << endl; 
            }
        }
        
    }
    return 0;
}
 
