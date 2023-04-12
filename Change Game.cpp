#include <iostream>
using namespace std;

int main()
{
double penniesCost, nickelsCost, dimesCost, quartersCost, onesCost, total;
int numPennies, numNickels, numDimes, numQuarters, numOnes;

cout << "Pennies: " ; 
cin >> numPennies;
while (numPennies < 0)
{
    cout << "Error. Value must be greater than 0.";
    cin >> numPennies;
}
cout << "Nickels: " ;
cin >> numNickels;
while (numNickels < 0)
{
    cout << "Error. Value must be greater than 0.";
    cin >> numNickels; 
} 
cout << "Dimes: " ;
cin >> numDimes;
while (numDimes < 0)
{
     cout << "Error. Value must be greater than 0.";
     cin >> numDimes;
}
cout << "Quarters: " ;
cin >> numQuarters;
while (numQuarters < 0)
{
    cout << "Error. Value must be greater than 0.";
    cin >> numQuarters;
}
cout << "Ones: " ;
cin >> numOnes;

while (numOnes < 0)
{
    cout << "Error. Value must be greater than 0.";
    cin >> numOnes;
} 

penniesCost = .01 * numPennies;
nickelsCost = .05 * numNickels;
dimesCost = .10 * numDimes;
quartersCost = .25 * numQuarters;
onesCost = 1 * numOnes;
total = penniesCost + nickelsCost + dimesCost + quartersCost + onesCost; 

if (total == 3)
{
    cout << "Congratulations! You win the game! " << endl; 
}
else if (total > 3)
{
    cout << "Your total was more than 3 dollars. " << endl;
}
else 
{
    cout << "Your total was less than 3 dollars. " << endl;
}
return 0; 
}
    
