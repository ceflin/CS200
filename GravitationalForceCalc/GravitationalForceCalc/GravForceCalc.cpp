/*Author: Chris Eflin
  Program: GravForceCalc*/

#include <iostream>;
#include <cmath>;
using namespace std;

const double G = 6.673e-8; 

double computeAttractiveForce(double m1, double m2, double d);

int main()
{
    char repeat;

    do
    {
        double m1, m2, d, force;
        cout << "Enter the mass of body 1 in grams: ";
        cin >> m1;
        cout << "Enter the mass of body 2 in grams: ";
        cin >> m2;
        cout << "Enter the distance between m1 and m2 in centimeters: ";
        cin >> d;

        force = computeAttractiveForce(m1, m2, d);
        cout << "The attractive force is " << force << " dynes.";
        cout << endl << endl;

        cout << "Enter 'r' to repeat the program, any other key to quit: ";
        cin >> repeat;
    } while (repeat == 'r');
    system("pause");
    return 0;
}

double computeAttractiveForce(double m1, double m2, double d)
{
    return(G * m1 * m2 / (d * d));
}