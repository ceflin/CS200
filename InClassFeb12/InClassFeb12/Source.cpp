/* Author Chris Eflin
   Program Source.cpp*/

#include <iostream>;
using namespace std;

int main()
{
	//Varialbes
	int numOfStars;

	cout << "Enter a positive number: ";
	cin >> numOfStars;
	cout << endl;

	for (int i = 1; i <= numOfStars; i++) //rows
	{
		for (int j = 1; j <= numOfStars; j++) //columns
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl << endl;

	system("pause");
	return 0;
}