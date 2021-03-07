#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    int people;
    cin >> people;
    cin.ignore();
    string namePresent;
    getline(cin,namePresent);
    
    double averageGrade = 0;
    double gradeCounter = 0;
    double counter = 0;
    double sumGrade = 0;
    double allGrade = 0;
    cout.setf(ios::fixed);
    cout.precision(2);
    while (namePresent != "Finish") {
        sumGrade = 0;
        for (gradeCounter = 1.00; gradeCounter <= people; gradeCounter++) {
            double grade;
            cin >> grade;
            cin.ignore();
            allGrade += grade;
            sumGrade += grade;
            counter++;
            if (gradeCounter == people) {
                averageGrade = sumGrade / people;
                break;
            }
        }
        if (namePresent != "Finish") {
            cout << namePresent << " - " << averageGrade << "." << endl;;
        }
        getline:getline(cin>>ws, namePresent);
    }
    if (namePresent == "Finish") {
        double totalGrade = allGrade / counter;
        cout << "Student's final assessment is " << totalGrade << ".";
    }
}
