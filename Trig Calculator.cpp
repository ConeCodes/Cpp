// Created by Dalton Cone 

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    int OGnumber;
    string reply;

    cout << "Enter a value in radians or degrees.";
    cin >> OGnumber; 
    
    cout << "Is this number in radians or degrees?";
    cin >> reply;

    if (reply == "degrees")
    {
        double outputRadian;
        outputRadian = OGnumber * M_PI / 180; 
        cout << "This is your number converted into radians " << outputRadian << "r."; 
    }
    else if (reply == "radians")
    {
        double outputDegrees; 
        outputDegrees = OGnumber * 180 / M_PI;
        cout << "This is your number converted into degrees " << outputDegrees << "°.";
    }
    else 
    {
        cout << " Invalid response! Please try again! ";
        cin >> reply; 
    }
    return 0; 
}
