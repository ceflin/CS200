/* Author: Chris Eflin
   Project: WaterWellCapacity */

#include <iostream>;
using namespace std;

int main()
{
    //Variables
    const double GALLONS_PER_CUBIC_FOOT = 7.48;
    const double PI = 3.14159;
    int radiusInInches;
    double radiusInFeet;
    double depthInFeet;
    double volumeInCubicFeet;
    double gallons;

    //Ask the user for the radius and the depth
    cout << "What is the radius of the well casting in inches: ";
    cin >> radiusInInches;

    cout << "What is the depth of the well in feet: ";
    cin >> depthInFeet;

    //Convert the radius in inches to raduis in feet
    radiusInFeet = radiusInInches / 12.0;

    //Calculate the volume of the waterin the well casting
    //pi * (radius * radius) * depth
    volumeInCubicFeet = (PI * (radiusInFeet * radiusInFeet) * depthInFeet);

    //Convert cubic feet to gallons
    gallons = GALLONS_PER_CUBIC_FOOT * volumeInCubicFeet;

    cout << "The volume of your well is " << gallons << " gallons." << endl;

    system("pause");
    return 0;
}