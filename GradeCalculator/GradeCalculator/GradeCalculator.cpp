/*Author: Chris Eflin
  Program: Grade Calculator*/

#include <iostream>;
using namespace std;

int main()
{
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);

    //Variables
    double totalExercisePoints;
    double actualExercisePoints;
    double totalPossiblePoints = 0.00;
    double actualPoints = 0.00;
    double gradePercentage = 0.00;

    int numOfExercises = 0;
    int numOfLoops = 1;

    //Ask the user for the numOfExercises
    cout << "How many exercises do you want to input? ";
    cin >> numOfExercises;
    cout << endl;

    //Loop numOfExercises times
    do
    {
        cout << "Total possible score for exercise " << numOfLoops << ": ";
        cin >> totalExercisePoints;
        cout << "Score recieved for exercise " << numOfLoops << ": ";
        cin >> actualExercisePoints;
        cout << endl;

        totalPossiblePoints += totalExercisePoints;
        actualPoints += actualExercisePoints;

        numOfExercises--;
        numOfLoops++;

    } while (numOfExercises >= 1);

    gradePercentage = (actualPoints / totalPossiblePoints) * 100;

    cout << "Your total is " << totalPossiblePoints
        << " out of " << actualPoints << ", or "
        << gradePercentage << "%. ";

    if (gradePercentage >= 60)
    {
        cout << "You passed!" << endl;
    }
    else
    {
        cout << "Sorry, you failed." << endl;
    }

    cout << endl;
    cout << "Thank you for using this program" << endl;

    system("pause");
    return 0;
}