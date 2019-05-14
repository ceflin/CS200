#include <iostream>
#include <cstdlib>
using namespace std;

int factorial(int base);
int product(int x, int y);

int main()
{
	//cout << factorial(4);
	cout << product(3, 5);

	cin.ignore();
	cin.get();
	return 0;
}

int factorial(int base) 
{
	int result;

	if (base < 0)
		exit(1);
	else if (base == 0)
		result = 1;
	else
		result = base * factorial(base - 1);

	return result;
}

int product(int x, int y)
{
	if (x == 1)
		return y;
	else
		return y + product(x - 1, y);
}