#include <iostream>
#include <string>
 
using namespace std;
 
 
 
int main() {
 
    int limitBadGrades;
    cin >> limitBadGrades;
    cin.ignore();
 
 
    string problemName;
    getline(cin >> ws, problemName);
    int gradeSum = 0;
    int gradeCount = 0;
    string lastProblemName = "";
    int badGradesCounter = 0;
 
    while (problemName != "Enough")
    {
        int grade;
        cin >> grade;
        cin.ignore();
 
        gradeSum += grade;
        gradeCount++;
        lastProblemName = problemName;
 
        if (grade <= 4)
        {
            badGradesCounter++;
        }
        if (badGradesCounter == limitBadGrades)
        {
            break;
        }
 
        getline(cin, problemName);
    }
 
    if (problemName == "Enough")
    {
        cout.setf(ios::fixed);
        cout.precision(2);
 
        double averageGrade = gradeSum * 1.0 / gradeCount;
        cout << "Average score: " << averageGrade << endl;
        cout << "Number of problems: " << gradeCount << endl;
        cout << "Last problem: " << lastProblemName;
    }
 
    if (badGradesCounter == limitBadGrades)
    {
        cout << "You need a break, " << badGradesCounter << " poor grades.";
    }
 
 
    return 0;
}