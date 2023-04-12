#include <iostream>
using namespace std;

int numofRooms;
double costperFoot;
double floorSpace, area, carpetCost, areaCarpeted, laborCost, totalCost, laborHours;
int rooms = 0;
int totalRooms = 0;
int totalArea = 0;

int getArea()
{
    
    
        cout << "What is the square feet of floor space in room " << rooms << " ?";
        cin >> floorSpace;
    
        while (floorSpace < 0)
        {
            cout << "Error. Value must be greater than 0. Please enter another value.";
            cin >> floorSpace; 
        }
    
    return floorSpace; 
}

int main()
{
    cout << "How many rooms would you like to be carpeted ?";
    cin >> numofRooms; 

    while (numofRooms < 1)
    {
        cout << "Error. You must enter at least 1. Please enter another value.";
        cin >> numofRooms; 
    }
    
    cout << "What is the price of the carpet per square foot ?";
    cin >> costperFoot; 

    while (costperFoot < 0)
    {
        cout << "Error. Value must be greater than 0. Please enter another value.";
        cin >> costperFoot; 
    }

    for (rooms = 1; rooms <= numofRooms; rooms ++)
    {
          
        getArea();
        totalArea += floorSpace;
    }

    // Calculate

    areaCarpeted = totalArea;
    carpetCost = costperFoot * areaCarpeted;
    laborHours = (areaCarpeted / 50) * 6;
    laborCost = laborHours * 30; 
    totalCost = laborCost + carpetCost;

    // Display

    cout << "\nThe area carpeted was " << areaCarpeted << " square feet." << endl;
    cout << "The cost of the carpet is " << carpetCost << " ." << endl;
    cout << "The cost of labor is " << laborCost << " ." << endl;
    cout << "The total cost is " << totalCost << " ." << endl;


    return 0; 
}