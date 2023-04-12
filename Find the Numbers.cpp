#include <iostream>
using namespace std;

const int TOTAL_NUMBERS = 12;

int main ()
{   
    int numbers[TOTAL_NUMBERS];
    int sum, average, lowest, highest, max, min;

    int totalSum = 0;
    for (int i = 0; i < TOTAL_NUMBERS; i++)
    {
        cout << "Enter number " << (i +1) << ":";
        cin >> numbers[i]; 

        totalSum += numbers[i]; 
    }

    max = numbers[0];
    for (int i = 0; i < TOTAL_NUMBERS; i++)
    {
        if (max < numbers[i])
            max = numbers[i];
    }

    min = numbers[0];
    for (int i = 0; i < TOTAL_NUMBERS; i++)
    {
        if (min > numbers[i])
            min = numbers[i];
    }
    
    

    // Calculations
    sum = totalSum;
    average = sum /12; 
    lowest = min;
    highest = max; 

    // Display
    cout << "\nThe sum of your numbers is " << sum << "." << endl;
    cout << "The average of your numbers is " << average << "." << endl;
    cout << "The lowest of your numbers is " << lowest << "." << endl;
    cout << "The highest of your numbers is " << highest << "." << endl; 

    
    return 0;
}