#include <iostream>
using namespace std;

//Assigns variable
int main()
{
int fourteen = 14, thirtyTwo = 32, oneHundredFour = 104, 
sixtyThree = 63, eightyNine = 89, oneHundredTwentyFive = 125, 
twoHundredThirteen = 213; 
    
//Calculates total    
double total = fourteen + thirtyTwo + oneHundredFour + sixtyThree + eightyNine + 
oneHundredTwentyFive + twoHundredThirteen;

double average = total / 7;  //Calculates average

cout << "The average is " << average << endl; //Displays average
return 0; 

}