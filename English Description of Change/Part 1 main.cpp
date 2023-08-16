#include "digits.h"				//linking header file
#include <iostream>				//used for input and output

using namespace std;

int main()
{
	int number;									//created a local variable
	digits n;									//created a class name/variable
	cout << " Please enter a number between 0 and 9999: ";
	cin >> number;												//asking the user to enter a number using cout and storing it to number variable using cin

	n.integer(number);											//using dot operator to connect to the function integer and pass number as an argument to function
	cout << " English description of the number: ";				//using cout to output the english description to the user.
	n.print();													//using dot operator to connect to the function print


 return 0;												//exiting/quitting program
}