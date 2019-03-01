/*Author: Chris Eflin
  Program: source.cpp*/

#include <iostream>;
using namespace std;

void getInput(int& feet, double& inches);

double convert(int feet, double inches);

void displayResults(int feet, double inches, double meters);

int main()
{
	//cout.setf(ios::fixed, ios::showpoint);
	//cout.precision(2);

	int feet;
	double inches, meters;

	getInput(feet, inches);
	meters = convert(feet, inches);
	displayResults(feet, inches, meters);

	system("pause");
	return 0;
}

void getInput(int& feet, double& inches)
{
	cout << "Enter the feet: ";
	cin >> feet;
	cout << endl;

	cout << "Enter the inches: ";
	cin >> inches;
	cout << endl;
}

double convert(int feet, double inches)
{
	return (feet + (inches / 12)) * 0.3048;
}

void displayResults(int feet, double inches, double meters)
{
	cout << feet << "ft " << inches << "in is " << meters << " meters." << endl;
}
