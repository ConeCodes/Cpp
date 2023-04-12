#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Constant that dictates size of the arrays. 
    const int NUM_PRODUCTS = 6;

    // Variables
    int totalSales, max, min;

    // Arrays
    int numbers[NUM_PRODUCTS];
    string productNames [] = {"lipstick", "eye shadow", "mascara",
                              "eye liner", "foundation", "rouge"};

    // For loop to load the array. 
    for(int i = 0; i < NUM_PRODUCTS; i++)
    {
        cout << "Enter the number of " << productNames[i] << " sold.";
        cin >> numbers[i];

        // Input validation.
        while (numbers[i] < 0)
        {
            cout << "Error. Value must be positive. Please enter another value.";
            cin >> numbers[i]; 
        } 
    }

    // For loop for the total.
    int total = 0;
    for (int i = 0; i < NUM_PRODUCTS; i++)
    {
        total += numbers[i];
    }

    // For loop for the highest sold item.
    int count, highest;
    string hName;
    highest = numbers[0];
    hName = productNames[0];
    
    for (count = 1; count < NUM_PRODUCTS; count ++)
    {
        if (numbers[count] > highest)
        {
            highest = numbers[count];
            hName = productNames[count];
        }
    }

    // For loop for the lowest sold item.
    int lowest;
    string lName;
    lowest = numbers[0];
    lName = productNames[0];

    for (count = 1; count < NUM_PRODUCTS; count ++)
   {
       if (numbers[count] < lowest)
       {
            lowest = numbers[count];
            lName = productNames[count];
       }
   } 

    // Calculations 
    totalSales = total;

    // Display
    cout << "\nThe sales for " << productNames[0] << " is " << numbers[0] << "." << endl;
    cout << "The sales for " << productNames[1] << " is " << numbers[1] << "." << endl;
    cout << "The sales for " << productNames[2] << " is " << numbers[2] << "." << endl;
    cout << "The sales for " << productNames[3] << " is " << numbers[3] << "." << endl;
    cout << "The sales for " << productNames[4] << " is " << numbers[4] << "." << endl;
    cout << "The sales for " << productNames[5] << " is " << numbers[5] << "." << endl;
     

    cout << "\nThe amount of total sales is " << totalSales << "." << endl;
    cout << "The highest sold item is " << hName << " with " << highest << "." << endl;
    cout << "The lowest sold item is " << lName << " with " << lowest << "." << endl; 

    return 0;
}