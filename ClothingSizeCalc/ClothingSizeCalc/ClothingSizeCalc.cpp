/*Author: Chris Eflin
  Program: ClothingSizeCalc.cpp*/
#include <iostream>;
using namespace std;

const double JACKET_ADJUSTMENT = 1 / 8.0;

void getInput(double& height, double& weight, int& age);

double calcHatSize(double height, double weight);

double calcJacketSize(double height, double weight, int age);

double calcWaistSize(double weight, int age);

void showResults(double hatSize, double jacketSize, double waistSize);



int main()
{
    double height, weight, hatSize, jacketSize, waistSize;
    int age;

    getInput(height, weight, age);
    hatSize = calcHatSize(height, weight);
    jacketSize = calcJacketSize(height, weight, age);
    waistSize = calcWaistSize(weight, age);
    showResults(hatSize, jacketSize, waistSize);

    system("pause");
    return 0;
}

void getInput(double& height, double& weight, int& age)
{
    bool validHeight = true;
    bool validWeight = true;
    bool validAge = true;

    do
    {
        cout << "Please enter your height in inches: ";
        cin >> height;
        if (height > 24 && height < 107)
            validHeight = true;
        else
            validHeight = false;
    } while (validHeight == false);
    do
    {
        cout << "Please enter your weight in pounds: ";
        cin >> weight;
        if (weight > 25 && weight < 400)
            validWeight = true;
        else
            validWeight = false;
    } while (validWeight == false);
    do
    {
        cout << "Please enter your age: ";
        cin >> age;
        if (age > 5 && age < 110)
            validAge = true;
        else
            validAge = false;
    } while (validAge == false);
}

double calcHatSize(double height, double weight)
{
    return (weight / height) * 2.9;
}

double calcJacketSize(double height, double weight, int age)
{
    int numYears = age / 10;
    double jacketSize = (height * weight) / 288;
    for (int i = 0; i < numYears; i++)
    {
        jacketSize += JACKET_ADJUSTMENT;
    }
    return jacketSize;
}

double calcWaistSize(double weight, int age)
{
    int numYears = age / 10;
    double waistSize = weight / 5.7;
    return waistSize;
}

void showResults(double hatSize, double jacketSize, double waistSize)
{
    cout << "Presently your clothing sizes are:" << endl
        << "\tHat: " << hatSize << endl
        << "\tJacket: " << jacketSize << endl
        << "\tWaist: " << waistSize << endl;
}