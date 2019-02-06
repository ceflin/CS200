/*Author : Chris Eflin
  File : ChangeCounter.cpp
*/
#include <iostream>;
using namespace std;

int main()
{
    //Variables
    int numQuarters, numDimes, numNickels, total;

    //Number of quarters
    cout << "Enter the number of quarters: ";
    cin >> numQuarters;
    cout << endl;

    //Number of dimes
    cout << "Enter the number of dimes: ";
    cin >> numDimes;
    cout << endl;

    //Number of nickels
    cout << "Enter the number of nickels: ";
    cin >> numNickels;
    cout << endl;

    //The total amount of change in cents
    total = numQuarters * 25 + numDimes * 10 + numNickels * 5;
    cout << "The total amout is " << total << " cents." << endl;

    //system("stop");
    cout << "Enter any character to continue...";
    char ch;
    cin >> ch;
    return 0;
}