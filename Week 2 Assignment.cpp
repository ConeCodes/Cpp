#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;


bool testPassIfInvalid(char[], int);

bool testPassIfInvalid(char Pass[], int SIZE)
{
int i = 0;
bool Upper = false;
bool Lower = false;
bool Digit = false;
bool needtotry = false;

int LENGTH = strlen(Pass);
for (int i = 0; i < LENGTH; i++)
{
if (isdigit(Pass[i]))
Digit = true;
if (islower(Pass[i]))
Lower = true;
if (isupper(Pass[i]))
Upper = true;
}
if (LENGTH < 6)
{
cout << " The password must be 6 or more characters long." << endl;
needtotry = true;
}

if (Digit == false)
{
cout << " The password must contain a numerical digit." << endl;
needtotry = true;
}

if (Lower == false)
{
cout << " The password must have at least one lowercase letter." << endl;
needtotry = true;
}

if (Upper == false)
{
cout << " The password must have at least one uppercase letter." << endl;
needtotry = true;
}   

if (needtotry)
{
cout << " The password is not valid. \n Enter another password." << endl;
return true;
}
return false;
}


int main()
{


bool needtotry;

do
{
const int SIZE = 1000;
char Pass[1000];
needtotry = false;

cout << " The password must have:"
        "\n \t at least 6 characters"
        "\n \t at least one uppercase letter"
        "\n \t at least one lowercase letter"
        "\n \t at least one numeric digit"
        "\n Enter a password:";

cin.clear();
cin.getline(Pass, 1000);

if (!(testPassIfInvalid(Pass, SIZE))){
cout << " The password is valid. \n Press any key to continue...." << endl;
return 0;   
} 
else
{
needtotry = true;
}
  
} 
while (needtotry);

}
