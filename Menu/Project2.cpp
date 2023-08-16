#include <iostream> //used for input and output stream
#include <string>	//used for strings
#include <iomanip>	//used to set number of decimals
#include <cmath>	//used for power function

using namespace std;

void dollartopesos();
void fahrenheittocelsius();
void lettercount();						//listing all the voids so I can recall them to main later
void raiseXtopowerY();
void evenorodd();

int main()
{
	char repeat;											//using do while loop to ask the user if they want to repeat the program later
	do
	{
		int choice;																//using int choice since my options are numbers

		cout << "Our menu has 6 options: \n";
		cout << "1: Convert dollar to pesos \n";
		cout << "2: Convert fahrenheit to celsius \n";
		cout << "3: Count the letters in your name \n";
		cout << "4: Raise X to the power Y \n";										//displaying all my options to the user using cout object
		cout << "5: Find if a number is even or odd \n";
		cout << "6: Quit the program \n";
		cout << "Please choose one of the option from 1 to 6. \n";
		cin >> choice;																	//asking the user to input their choice

		switch (choice)																	//using switch so I can make the user enter numbers from 1-6
		{
			case 1:
				dollartopesos();
				break;
			case 2:
				fahrenheittocelsius();
				break;
			case 3:
				lettercount();												//using cases so when the user chooses a number from 1-6 the program knows what to do
				break;														
			case 4:
				raiseXtopowerY();											//recalling my voids into main 
				break;
			case 5:															// Also used break; so the porgram doesn't do other cases
				evenorodd();
				break;
			case 6:
				cout << "Bye! \n";
				return 0;
			default:																	//using default to tell user to enter number form 1-6 if they enter something else
				cout << "Invalid. Please enter a number between 1-6. \n";		
		}
		cout << "Would you like to repeat the program? ( Y/N ) \n";
		cin >> repeat;
	} while (repeat == 'Y' || repeat == 'y');		//telling program if the user enters Y or y the program should repeat and if not it should end
	return 0;
}

void dollartopesos()											//calculating void dollartopesos which gets recalled to case 1 in main
{
	double pesos, exchangerate;									//double so I can use decimals
	int dollar;
	dollar = 1;
	
	cout << "Hello please enter the exchange rate: \n";					
	cin >> exchangerate;
																				//using if and else statements so I can do input validation
	if (cin.fail() || exchangerate <= 0)										//using cin.fail to make sure user enters only numbers. And used <=0 to make sure user enters positive numbers.
	{ 
		cout << "Invalid. Please enter a positive number. \n";
		cin.clear();															//if user enters negative number or non integers the program will ask user to enter positive number.
		cin.ignore(200, '\n');
		return;
	}
	else
	{ 
	pesos = dollar * exchangerate;																			//converting and giving the answer to user uaing cout object

	cout << "Hello, 1 dollar converted to pesos is: " << fixed << setprecision(2) << pesos << " $ \n";		//also limiting answer to 2 decimal places using setprecision.
	}
}

void fahrenheittocelsius()
{
	double fahrenheit, celsius;

	cout << "Please enter the fahrenheit: \n";
	cin >> fahrenheit;

	if (cin.fail())																	//using if and else statements so I can do input validation
	{	
		cout << "Invalid. Please enter numbers. \n";								//using cin.fail to make sure user enters only numbers.
		cin.clear();
		cin.ignore(200, '\n');
		return;
	}
	else
	{
		celsius = (fahrenheit - 32) * 5 / 9.0;								//if user enters numbers then I used else to tell program to calculate for celsius
		cout << "Hello " << fahrenheit << " degrees converted into celsius is " << celsius << " degrees. \n";		//used cout object to give user the answer
	}
}

void lettercount()
{
	string name;													//used string to remember name

	cout << "Please enter your name: \n";			
	cin >> name;													//asked user to input the name

	cout << "Hello " << name << ", your name has " << name.length() << " letters! \n";		//used name.length() to find how mnay letters the name has
}

void raiseXtopowerY()
{
	double x, y, answer;

	cout << "Hello, enter your X: \n";
	cin >> x;														//asking the user to enter X and Y

	cout << "Hello, enter your Y: \n";
	cin >> y;

	if (cin.fail())
	{																	//used if/else statement to make sure user only inputs number
		cout << "Invalid. Please enter numbers. \n";					//if user enters anything other than numbers it will say invalid
		cin.clear();
		cin.ignore(200, '\n');
		return;
	}
	else
	{
		answer = pow(x, y);
		cout << "Hello, " << x << " raised to " << y << " is: " << answer << ". \n";	//if the user enters numbers for x and y it will raise x to y using pow function and output the answer with cout object
	}
}

void evenorodd()
{
	int number;

	cout << "Hello, Please enter a number:  \n";					//asking the user to input the number
	cin >> number;

	if (cin.fail())
	{															//used if statement to make sure user enters only numbers
		cout << "Please enter numbers: \n";
		cin.clear();
		cin.ignore(200, '\n');
		return;
	}
	else if (number % 2 == 0)
		cout << "Hello, " << number << " is an even number. \n";	//used else if statements to tell program if the number is divisible by 2 it's even number
	else
	{
			cout << "Hello, " << number << " is an odd number. \n";			//if the number is not divisible by 2 its an odd number. I used cout object to output the final answer
	}
}