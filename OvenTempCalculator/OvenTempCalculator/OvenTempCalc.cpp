/*Author: Chris Eflin
  Program: OvenTempCalc.cpp*/

#include <iostream>;
using namespace std;

int main()
{
    //Variables
    int userTemp, nextLowestTemp, nextHighestTemp;
    int onesDigit, tensDigit, hundredsDigit;
    bool contains147;

    //Get the temp from the user
    cout << "Enter the desired temperature: ";
    cin >> userTemp;
    cout << endl;

    //Check if the temp contains 1, 4, or 7
    nextLowestTemp = userTemp;
    onesDigit = nextLowestTemp % 10;
    tensDigit = (nextLowestTemp / 10) % 10;
    hundredsDigit = nextLowestTemp / 100;

    if ((onesDigit == 1) || (onesDigit == 4) || (onesDigit == 7) ||
        (tensDigit == 1) || (tensDigit == 4) || (tensDigit == 7) ||
        (hundredsDigit == 1) || (hundredsDigit == 4) || (hundredsDigit == 7))
    {
        contains147 = true;
    }
    else 
    {
        contains147 = false;
    }
    while (contains147)
    {
        nextLowestTemp--;
        onesDigit = nextLowestTemp % 10;
        tensDigit = (nextLowestTemp / 10) % 10;
        hundredsDigit = nextLowestTemp / 100;

        if ((onesDigit == 1) || (onesDigit == 4) || (onesDigit == 7) ||
            (tensDigit == 1) || (tensDigit == 4) || (tensDigit == 7) ||
            (hundredsDigit == 1) || (hundredsDigit == 4) || (hundredsDigit == 7))
        {
            contains147 = true;
        }
        else
        {
            contains147 = false;
        }
    }
    //nextLowestTemp contains the next lowest temp without 1, 4, or 7.

    nextHighestTemp = userTemp;
    onesDigit = nextHighestTemp % 10;
    tensDigit = (nextHighestTemp / 10) % 10;
    hundredsDigit = nextHighestTemp / 100;

    if ((onesDigit == 1) || (onesDigit == 4) || (onesDigit == 7) ||
        (tensDigit == 1) || (tensDigit == 4) || (tensDigit == 7) ||
        (hundredsDigit == 1) || (hundredsDigit == 4) || (hundredsDigit == 7))
    {
        contains147 = true;
    }
    else
    {
        contains147 = false;
    }
    while (contains147)
    {
        nextHighestTemp++;
        onesDigit = nextHighestTemp % 10;
        tensDigit = (nextHighestTemp / 10) % 10;
        hundredsDigit = nextHighestTemp / 100;

        if ((onesDigit == 1) || (onesDigit == 4) || (onesDigit == 7) ||
            (tensDigit == 1) || (tensDigit == 4) || (tensDigit == 7) ||
            (hundredsDigit == 1) || (hundredsDigit == 4) || (hundredsDigit == 7))
        {
            contains147 = true;
        }
        else
        {
            contains147 = false;
        }
    }
    //nextHighestTemp contains the next higest temp without 1, 4, or 7.

    cout << "The next lowest temperature that doesn't contain a 1, 4, or 7 is "
        << nextLowestTemp << " degrees." << endl << endl;
    cout << "The next highest temperature that doesn't contain a 1, 4, or 7 is "
        << nextHighestTemp << " degrees." << endl << endl;

    system("pause");
    return 0;
}