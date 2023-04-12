#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double totalFloors, floors, sharedOffices;
    double percentage;
    double totalOffices = 0;
    double totalPrivateOffices = 0;

cout << "How many floors are in the building? " ;
cin >> totalFloors;

while (totalFloors < 1)
{
    cout << "Error. The number of floors must be at least 1. Enter another value. ";
     cin >> totalFloors;
}

for (floors = 1; floors <= totalFloors; floors++)
{
     double offices;
    cout << "How many offices are on the floor " << floors << "? ";
    cin >> offices;
    totalOffices += offices; 
   
    while (offices < 1)
    {
       cout << "Error. The number of offices must be at least 1. Enter another value. "; 
       cin >> offices;
    }
    
    double privateOffices;
    cout << "How many are private offices? ";
    cin >> privateOffices;
    totalPrivateOffices += privateOffices;
}

//Calculations
sharedOffices = totalOffices - totalPrivateOffices; 
percentage = (totalPrivateOffices / totalOffices) * 100;

//Outputs
cout << "\nThe building has " << totalOffices << " offices. " << endl; 
cout << "The building has " << totalPrivateOffices << " private offices. " << endl;
cout << "The building has " << sharedOffices << " shared offices. " << endl;
cout << fixed << showpoint << setprecision(2);
cout << "The percentage of private offices is " << percentage << " %. " << endl;

return 0;
}