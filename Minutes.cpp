#include <iostream>
using namespace std; 

int main()
{// 60 min in 1 hour
// 1140 min in 1 day
// 10,080 min in 1 week

double minutes, minHour, minDay, minWeek;

cout << "Enter a number of minutes: ";
cin >> minutes;

while (minutes < 1)
{
cout <<"The number of minutes must be at least one. ";
cin >> minutes;
}

if ( minutes >= 60)
{
minHour = minutes / 60 ;
cout << "Their are " << minHour << " hours in " << minutes << " minutes. " << endl;
}
if (minutes >= 1140)
{
minDay = minutes / 1140 ;
cout << "Their are " << minDay << " days in " << minutes << " minutes. " << endl;
}
if (minutes >= 10080)
{
minWeek = minutes / 10080;
cout << "Their are " << minWeek << " weeks in " << minutes << " minutes. " << endl;
}
return 0; 
}