#include <iostream>
using namespace std; 

int main ()
{
    double startingPop, avgPopIncrease, predictedPopIncrease, predictedPop;
    int days, x;

    cout << "What is the current city's population? ";
    cin >> startingPop;
     
     while (startingPop < 100000)
    {
        cout << "Error. Population must be at least 100,000. Enter another value. ";
        cin >> startingPop;
    }
    
    cout<< "What is your city's average daily population increase? (Enter in decimal format)";
    cin >> avgPopIncrease;
   
     while (avgPopIncrease < 0)
    {
        cout << "Error. Value must be greater than 0. Enter another value. ";
        cin >> avgPopIncrease;
    }
   
    cout << "How many days do you want to be evaluated? ";
    cin >> days;

    while (days < 1)
    {
        cout << "Error. Number of days must be at least 1. Enter another value. ";
        cin >> days;
    }

for (x = 1; x <= days; x++)
{
    double increase;
    increase = startingPop * avgPopIncrease;
    startingPop += increase;
    

}
 
 predictedPopIncrease = startingPop * avgPopIncrease; 
 predictedPop = startingPop + predictedPopIncrease;
 cout << "The predicted population is " << predictedPop << ". " << endl;  

return 0; 
}