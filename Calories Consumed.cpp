#include <iostream>
using namespace std;

int main()
{
double crackerCalorie = 25;
int cracker; 
double totalCalories;

cout << "How many crackers did you eat?" << endl; 
cin >> cracker;

totalCalories = cracker * crackerCalorie; 

cout << "You consumed " << totalCalories << " calories." << endl;
return 0;
}