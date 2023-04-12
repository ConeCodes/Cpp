#include <iostream>
using namespace std;

int main()
{
double tvWeight = 14.75;
double palletWeight, tvAndPallet;

cout << "How much does the pallet weigh by itself? " << endl; 
cin >> palletWeight; 

cout << "How much does the pallet weigh with the television sets stacked on it? " << endl;
cin >> tvAndPallet; 

double numberOfSets = (tvAndPallet - palletWeight) / tvWeight;

cout << "There are " << numberOfSets << " television sets on the pallet. " << endl; 

return 0;

}