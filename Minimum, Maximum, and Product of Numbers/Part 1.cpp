#include <iostream>                               // used for input and output
#include <array>                                  // used for arrays

using namespace std;

int main()
{		
	int numArray[10];																	//declared the array of size 10
	int arraysize, max, min;															// listing all my variables
	int multi = 1;				
	
	//Elements of array:
	for (int i = 0; i < 10; i++)						//<<------             used for loop to input the elements of array
	{
		cout << " Please enter the 10 numbers: ";
		cin >> numArray[i];
		while (cin.fail())															// input validation to accept only integers.
		{
			cout << "Please enter numbers only! \n";
			return 0;
		}
	}
	cout << " Elements of array: ";													//cout statement to give display the user the answer
	for (int i = 0; i < 10; i++)						// <<-------       for loop to access the elements of array 
	{
		cout << " " << numArray[i];													//outputting the answer using cout statement
	}

	// Max and min values:
	max = numArray[0];
	for (int i = 0; i < 10; i++)
	{
		if (max < numArray[i])														//looking for the max number by comparing elements of array
			max = numArray[i];
	}
	cout << "\n The maximum value is: " << max << " \n";							//outputting the answer using cout statement
	
	min = numArray[0];
	for (int i = 0; i < 10; i++) 
	{
		if (min > numArray[i])														//looking for the min number by comparing elements of array
			min = numArray[i];
	}
	cout << " The minumum value is: " << min << "\n";								//outputting the answer using cout statement

	//Multiplying all the numbers:
	for (int i = 0; i < 10; i++)						//<<------            used for loop to read all the elements of the array
	{
		multi = multi * numArray[i];												 //Multiplying all the numbers
	}
	cout << " The product of all numbers is: " << multi << "\n";						//outputting the answer using cout statement
}