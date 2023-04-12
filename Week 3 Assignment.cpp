#include <iostream>
#include <string>
using namespace std;

struct Precipitation
{
    string monthName;
    double totalRainfall;
    double highTemp;
    double lowTemp;
    double avgTemp;
};



int main()
{
    int NUM_MONTHS = 12;
    Precipitation rainfall[NUM_MONTHS]; 
    

    for (int i = 0; i < NUM_MONTHS; i++) 
    {
    
    cout << " Month " << (i + 1) << "'s name: ";
    cin >> rainfall[i].monthName;


    cout << " \tTotal rainfall: ";
    cin >> rainfall[i].totalRainfall;

    cout << " \tHigh Temperature:";
    cin >> rainfall[i].highTemp;
    while (rainfall[i].highTemp < -100 || rainfall[i].highTemp > 140)
    {
        cout << " Error. Temperature must be between -100 and 140. Enter another temperature.";
        cin >> rainfall[i].highTemp;
    }

    cout << " \tLow Temp:";
    cin >> rainfall[i].lowTemp;
    while (rainfall[i].lowTemp < -100 || rainfall[i].lowTemp > 140)
    {
        cout << " Error. Temperature must be between -100 and 140. Enter another temperature.";
        cin >> rainfall[i].lowTemp;
    }
   
    rainfall[i].avgTemp = (rainfall[i].highTemp + rainfall[i].lowTemp) / 2;

    
        
    }
    

    

    //For loop for the total.
    int yearlyRain = 0;
    for (int i = 0; i < NUM_MONTHS; i++)
    {
        yearlyRain += rainfall[i].totalRainfall;
    }

    double avgRain = yearlyRain/12;

    // For loop for average monthly average temperature. 
    double yearlyAvgTemp = 0;
    for (int i = 0; i < NUM_MONTHS; i++)
    {
        yearlyAvgTemp += rainfall[i].avgTemp / 12;
    }

  
    int count, highest, lowest, hTemp, lTemp;
    string hMonth, lMonth; 
    // For loop for highest temp
    for (count = 0; count < NUM_MONTHS; count++)
    {
        if (rainfall[count].highTemp > hTemp)
        {
            hTemp = rainfall[count].highTemp;
            hMonth = rainfall[count].monthName; 
        }
    }

    for (count = 0; count < NUM_MONTHS; count++)
    {
        if (rainfall[count].lowTemp < lTemp)
        {
            lTemp = rainfall[count].lowTemp;
            lMonth = rainfall[count].monthName;
        }
    }

   


    // Display Results
    cout << " Total Rainfall: " << yearlyRain << endl;
    cout << " Average Monthly Rain: " << avgRain << endl; 
    cout << " Average Monthly Average Temperature: " << yearlyAvgTemp << endl;
    cout << " Highest Temperature: " << hTemp << " (Month " << hMonth << " )" << endl;
    cout << " Lowest Temperature: " << lTemp << " (Month " << lMonth << " )" << endl; 
    cout << " \nPress any key to continue ..." << endl;

    return 0;
    
} 