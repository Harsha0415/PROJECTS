#include "digits.h"       //linking header file 
#include <iostream>      //pre processor used for input and output
#include <cstdlib>       //used for exit function      

string digits::lessThan20[20] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                        "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };

string digits::tens[10] = { "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };

string digits::hundred = { "hundred" };                                                         //<<<<------  using scope resolution operator to link all 4 string variables to my class

string digits::thousand = { "thousand" };

void digits::integer(int n)                                                                     //using scope resolution operator to link my void function to the class
{
    if (n >= 0 && n <= 9999)
        number = n;
    else
    {                                                                           //used if and else statements to state that number variable is equal to parameter and to add a input validation
        cout << "Invalid! Please enter a number between 0 and 9999.\n";
        exit(EXIT_FAILURE);
    }
}

void digits::print()                                                                 //using scope resolution operator to link my void function to the class
{
    if (number == 0)                                                                    //used if and else statements to calculate individual digits of number entered by the user
    {
        cout << lessThan20[number];                                                 
    }                                                                                     //if the number is zero it will print zero
    else
    {
        int ones = number % 10;
        int tens2 = (number / 10) % 10;
        int hundreds = (number / 100) % 10;                                                 //calculating individual digits of the number entered by the user
        int thousands = number / 1000;

        if (thousands > 0)
        {
            cout << lessThan20[thousands] << " " << thousand << " ";                   //if the number is in thousands it will print the thousand digit in text with the word thousand right after
        }

        if (hundreds > 0)
        {
            cout << lessThan20[hundreds] << " " << hundred << " ";                  //if the number is in hundreds it will print the hundred digit in text with the word hundred right after
        }

        if (tens2 >= 2)
        {
            cout << tens[tens2 - 2] << " ";                                         //if the tens is greater than 2 it will print the ten digit using tens array
            if (ones > 0)                                                           
            {
                cout << lessThan20[ones];                                          //if the number has ones digit it will print that one digit from lessthan20[20] array
            }
        }
        else if (tens2 == 1)         
        {
            cout << lessThan20[10 + ones];                                      //if tens digit equals to 1 it will add 10 to the ones digit from lessthan20[20] array
        }
        else if (ones > 0)
        {
            cout << lessThan20[ones];                                           
        }
    }
}