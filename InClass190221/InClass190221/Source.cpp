/* Author: Chris Eflin
   Program: source.cpp*/

#include <iostream>;
#include <string>;
using namespace std;

/*
  Calculates the sum of 2 doubles.
  @param num1 - a double to add to another double
  @param num2 - another double to add to another double
  @return - the sum of the 2 double parameters
*/
double sumOf(double, double);

/*
  Concatonates 2 strings.
  @param str1 - a string to add to another string
  @param str2 - another string to add to a string
  @return - the sum of the 2 string parameters
*/
string sumOf(string, string);

int oneMore(int);

bool isASenior(int);

int main() 
{
	cout << "sumOf" << endl;
	cout << sumOf(10.5, 11.2) << endl;
	cout << sumOf(10, 11.2) << endl << endl; //Automatic Conversion of an int to a double
	cout << "sumOf (strings)" << endl;
	cout << sumOf("Hello", " World") << endl << endl;
	cout << "oneMore" << endl;
	cout << oneMore(10) << endl << endl;
	cout << "isASenior" << endl;
	cout << isASenior(60) << endl;
	cout << isASenior(66) << endl << endl;

	system("pause");
	return 0;
}

bool isASenior(int age)
{
	/*if (age >= 65)
		return true;
	else
		return false;*/
	return (age >= 65);
}

double sumOf(double num1, double num2)
{
	return num1 + num2;
}

string sumOf(string str1, string str2)
{
	return str1 + str2;
}

int oneMore(int num)
{
	return ++num;
}