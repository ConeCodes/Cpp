#include <iostream>
using namespace std;

// Function prototype
int linearSearch(const int[], int, int); 

int main()
{
    int userCode;
    const int SIZE = 10;
    int codes[SIZE] = {65482, 15975, 48758, 58698, 69618, 78965, 68416, 26489, 35498, 91651};
    int results; 

    cout << "Enter a 5 digit product code.";
    cin >> userCode; 

    results = linearSearch(codes, SIZE, userCode);

    if (results == -1)
    {
        cout << "\nError. Code not found. Try again.";
        cin >> userCode;
    }

    else
    {
        cout << "\nThe code you entered was valid!";
    }

    return 0;
}

int linearSearch(const int arr[], int size, int value)
{
    int index = 0;
    int position = -1;
    bool found = false; 

    while (index < size && !found)
    {
        if (arr[index] == value)
        {
            found = true;
            position = index;
        }
        index ++;
    }
    return position; 
}