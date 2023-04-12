#include <iostream>
using namespace std;

int main()
{
double cost = 24.95; // Cost of the shoe to the company

double increase; // Declares increase variable

increase = cost * .42; // Calculates the increase

double selling_price = cost + increase; // Calculates the selling price 

cout << "The selling price is $" << selling_price << endl; //Displays the selling price

return 0; 
}