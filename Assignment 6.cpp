#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Numbers
{
    private:
    int number;

    public:
    Numbers(int x)
    {
        number = x;
    }

    const static string lessThan20[];
    const static string tens[];
    const static string hundred;
    const static string thousand;

    void print();
};

const string Numbers::lessThan20[] = 
{
    "zero","one","two","three","four","five","six","seven",
    "eight","nine","ten","eleven","twelve","thirteen",
    "fourteen", "fifteen","sixteen","seventeen","eighteen","nineteen"
};

const string Numbers::tens[] = 
{
   "zero","ten","twenty","thirty","forty",
    "fifty","sixty", "seventy","eighty","ninety"
};

const string Numbers::hundred = "hundred";
const string Numbers::thousand = "thousand";

void Numbers::print()

{
    // Thousands
    string str = "";
    if (number > 999)
    {
        str = str +" "+ lessThan20[number/1000] +" "+ thousand+" ";
        number = number % 1000;
    }
           
    if(number > 99)//hundreds place
    {
        str = str +" "+ lessThan20[number/100] + " "+hundred+" ";
        number = number % 100;
    }
           
    if (number < 20) //if less than 20 then directly get from array
    {
        str += lessThan20[number]+" ";
    }    
           
    else //otherwise break into tens and ones places
    {
        str += tens[number/10];
        if(number % 10 > 0)
        {  
            str += lessThan20[number % 10];
        }           
    }
               
    
    cout << str;   
       
}

int main()

{
int num;

cout << "This program translates whole dollar amounts into words for the \npurpose of writing checks. ";
cout << "Entering a negative number will terminate the program.\n";
cout << "Enter an amount to be translated into words: (0 - 9999)" << endl;
cin >> num;



while (num >= 0)
{

//Start the loop to check the number.
while (num<0)
{
    break; 
}

// Creates an object of the number class. 
Numbers number(num);

//Call the print function.
number.print();

//Prompt the user to enter another number.
cout << "\n\nEnter another number (negative number to stop):";
cin >> num;

}

return 0;

}