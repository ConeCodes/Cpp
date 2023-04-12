#include <iostream>
using namespace std; 

void sort(float * testScore, int numScores);

int main()
{
    float * testScore; 
    int numScores; 
    float average;
    float total = 0; 

    cout << "Please input the number of test scores." << endl;
    cin >> numScores; 
    while (numScores < 1)
    {
        cout << "Error. Value must be greater than 0. " << endl; 
        cin >> numScores; 
    }

    testScore = new float[numScores];
    if (testScore == NULL)   // always test for null unless compiler handles this exception
 
	{
	   cout << "Error allocating memory!\n";
	   return 1;
	}

	for (int count = 0;  count < numScores; count++)
	{

	    cout << "Please enter a score  "<< endl;
	    cin  >> testScore[count];
        while (testScore[count] < 0)
        {
            cout << "Error. Value must be 0 or greater." << endl;
            cin >> testScore[count];
        }
		total = total + testScore[count];
	}

   
    average = total / numScores; 
    
   
    sort(testScore,numScores);
    cout << "Here are ths scores in ascending order" << endl;
    for (int count1 = 0;  count1 < numScores;  count1++)

       cout << testScore[count1] <<  endl; 
       cout << "The average test score is " << average << endl;

    return 0; 
}


void sort(float * testScore, int size)

{

	int swap_occured = 1;
	int bottom = size-1;
    float temp;
	
	while (swap_occured)
    {
	
	  swap_occured = 0;
	  for (int pos = 0;  pos < bottom; pos++)

		if (testScore[pos] > testScore[pos + 1])
		{
			temp = testScore[pos];
			testScore[pos] = testScore[pos + 1];
			testScore[pos + 1] = temp;
			swap_occured = 1;
		}
		bottom--;
	}
}


