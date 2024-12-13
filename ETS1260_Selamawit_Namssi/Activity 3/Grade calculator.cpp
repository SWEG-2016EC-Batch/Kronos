#include <iostream>

using namespace std;

int main() {
    float test, quiz, project, assignment, finalExam;

    cout << "Enter the score for Test : "<<endl;
    cin >> test;

    cout << "Enter the score for Quiz : "<<endl;
    cin >> quiz;

    cout << "Enter the score for Project : "<<endl;
    cin >> project;

    cout << "Enter the score for Assignment : "<<endl;
    cin >> assignment;

    cout << "Enter the score for Final Exam : "<<endl;
    cin >> finalExam;

    float totalMark = (test * 0.15) + (quiz * 0.05) + (project * 0.20) + (assignment * 0.10) + (finalExam * 0.50);

    cout << "Total Marks: " << totalMark << endl;

    if (totalMark >= 90) {
        cout << " A+" << endl;
    } else if (totalMark >= 80) {
        cout << " A" << endl;
    } else if (totalMark >= 75) {
        cout << " B+" << endl;
    } else if (totalMark >= 60) {
        cout << " B" << endl;
    } else if (totalMark >= 55) {
        cout << " C+" << endl;
    } else if (totalMark >= 45) {
        cout << " C" << endl;
    } else if (totalMark >= 30) {
        cout << " D" << endl;
    } else {
        cout << " F" << endl;
    }

    return 0;
}

