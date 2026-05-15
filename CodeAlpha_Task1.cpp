#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int courses;
    
    cout << "Enter number of courses: ";
    cin >> courses;

    string grades[100];
    int creditHours[100];
    float gradePoints[100];

    float totalCredits = 0;
    float totalGradePoints = 0;

    for (int i = 0; i < courses; i++) {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter grade (A, B, C, D, F): ";
        cin >> grades[i];

        cout << "Enter credit hours: ";
        cin >> creditHours[i];

        // Convert grade to grade points
        if (grades[i] == "A")
            gradePoints[i] = 4.0;
        else if (grades[i] == "B")
            gradePoints[i] = 3.0;
        else if (grades[i] == "C")
            gradePoints[i] = 2.0;
        else if (grades[i] == "D")
            gradePoints[i] = 1.0;
        else
            gradePoints[i] = 0.0;

        totalCredits += creditHours[i];
        totalGradePoints += gradePoints[i] * creditHours[i];
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\n----- Result -----" << endl;

    for (int i = 0; i < courses; i++) {
        cout << "Course " << i + 1
             << " Grade: " << grades[i]
             << " | Credit Hours: " << creditHours[i]
             << endl;
    }

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;

    cout << fixed << setprecision(2);
    cout << "Final CGPA: " << cgpa << endl;

    return 0;
}
