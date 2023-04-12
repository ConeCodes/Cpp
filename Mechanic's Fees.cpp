#include <iostream>
#include <string>
using namespace std;


const int LABOR_RATE = 12;

// Function Prototype
double noWarranty();

int main()
{   
    char warranty;
    string warrantyExp;
    double mileage, costofParts, laborHours, totalCharge, charge;

    cout << "Is your vehicle under warranty? Enter 'Y' or 'N'.";
    cin >> warranty; 

    if (warranty == 'y' || warranty == 'Y')
    {
        cout << "Please enter your warranty's numerical expiration date. Such as **/**/****. " ;
        cin >> warrantyExp;

        cout << "What is your car's mileage?" ;
        cin >> mileage;
        
        while (mileage < 0)
            {
                cout << "Error. Value must be at least 0. Enter another value.";
                cin >> mileage;
            }

        cout << "What was the cost of parts? (If applicable, enter '0.00' if no cost)";
        cin >> costofParts;
        
        while (costofParts < 0)
            {
                cout << "Error. Value must be at least 0. Enter another value.";
                cin >> costofParts; 
            }

        cout << "The warranty expiration date is " << warrantyExp << "." << endl;
        cout << "Your car's mileage is " << mileage << "." << endl;
        cout << "The cost of parts is " << costofParts << "." << endl; 

    }

    else if (warranty == 'n' || warranty == 'N')
    {
       totalCharge = double (noWarranty()); 

       cout << "Your car's mileage is " << mileage << "." << endl;
       cout << "The total hours of labor was " << laborHours << endl;
       cout << "The cost of parts was " << costofParts << endl;
       cout << "The total charge is " << totalCharge << endl; 
    }

    else
    {
        cout << "Error. Value must be 'Y' or 'N'. Enter another Value.";
        cin >> warranty; 
    }

    return 0;
}

double noWarranty()
{
    double mileage, costofParts, laborHours, laborCharge, totalCharge, charge;

   cout << "What is your car's mileage?";
   cin >> mileage;
   
   while (mileage < 0)
        {
            cout << "Error. Value must be at least 0. Enter another value.";
            cin >> mileage;
        }
 
    cout << "What was the total amount of labor hours?";
    cin >> laborHours;
    
    while (laborHours < 0)
        {
            cout << "Erro. Value must be at least 0. Enter another value.";
            cin >> laborHours; 
        }

    cout << "What was the cost of parts?";
    cin >> costofParts;
    
    while (costofParts < 0)
    {
        cout << "Error. Value must be at least 0. Enter another value.";
        cin >> costofParts; 
    }

    // Calculate
    laborCharge = laborHours * LABOR_RATE;
    totalCharge = laborCharge + costofParts;

    return totalCharge; 
}