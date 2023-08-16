#ifndef DIGITS_H
#define DIGITS_H	//used guards to prevent multiple inclusions

#include <string>											//used for strings

using namespace std;

class digits									//created a class called digits
{
private:
	int number;
	static string lessThan20[20];
	static string tens[10];							//used private so my variables cant be changed
	static string hundred;
	static string thousand;

public:
	void print();
	void integer(int n);						//used public for my member functions
};

#endif
