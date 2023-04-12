#include <iostream> 
#include <string>
#include <iomanip>
using namespace std;

struct Stats
{
    string name;
    int number;
    int hits;
    int runs;
    int errors;
};

int main()
{
    
    const int NUM_PLAYERS = 9;
    Stats baseball[NUM_PLAYERS];
    

    for (int i = 0; i < NUM_PLAYERS; i++)
    {
        cout << "Enter player " << (i + 1) << "'s name: "; 
        cin >> baseball[i].name; 

        cout << "Enter player " << (i + 1) << "'s number: "; 
        cin >> baseball[i].number;
        while (baseball[i].number < 0)
        {
            cout << "Error. Value must be 0 or greater. Enter another number.";
            cin >> baseball[i].number;
        }

        cout << "Enter player " << (i + 1) << "'s hits: ";
        cin >> baseball[i].hits;

        cout << "Enter player " << (i + 1) << "'s runs: ";
        cin >> baseball[i].runs;
        while (baseball[i].runs < 0)
        {
           cout << "Error. Value must be 0 or greater. Enter another value."; 
           cin >> baseball[i].runs;
        }

       cout << "Enter player " << (i + 1) << "'s errors: "; 
       cin >> baseball[i].errors;  
    }

    //For loop for the total.
    int totalRuns = 0;
    for (int i = 0; i < NUM_PLAYERS; i++)
    {
        totalRuns += baseball[i].runs;
    }

    // For loop for the player with the most runs. 
    int count, highest, hRun;
    string hName;
    highest = baseball[0].number;
    hName = baseball[0].name; 
    hRun = baseball[0].runs;

     for (count = 0; count < NUM_PLAYERS; count ++)
    {
        if (baseball[count].runs > hRun)
        {
            highest += baseball[count].number;
            hName += baseball[count].name;
            hRun += baseball[count].runs; 
        }
    }

    // Display Results
   for (int i = 0; i < NUM_PLAYERS; i ++)
   {
       cout << "\nPlayer " << (i+1) << "'s name: " << baseball[i].name << endl;
       cout << "Player " << (i+1) << "'s number: " << baseball[i].number << endl;
       cout << "Player " << (i+1) << "'s hits " << baseball[i].hits << endl;
       cout << "Player " << (i+1) << "'s runs" << baseball[i].runs << endl;
       cout << "Player " << (i+1) << "'s errors " << baseball[i].errors << endl; 
   } 

    cout << "\n" << hName << " has the most runs with " << hRun << ". His jersey number is " << highest << "." << endl;
    cout << "\nThe total runs scored by the team is " << totalRuns << "." << endl;
    
    return 0;
}