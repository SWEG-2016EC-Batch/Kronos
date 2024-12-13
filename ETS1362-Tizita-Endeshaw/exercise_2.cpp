/*Write a program that read the various assessments, compute the total mark and print the
corresponding letter-grade based on the following scales.*/

#include <iostream>
using namespace std;
int main() {
    // Read assessments
    float test_mark, quiz_mark, project_mark, assignment_mark, final_exam_mark;

    cout << "Enter test mark out of 15 : ";
    cin >> test_mark;

    cout << "Enter quiz mark out of 5 : ";
    cin >> quiz_mark;

    cout << "Enter project mark out of 20: ";
    cin >> project_mark;

    cout << "Enter assignment mark out of 10: ";
    cin >> assignment_mark;

    cout << "Enter final exam mark out of 50: ";
    cin >> final_exam_mark;

    // Calculate total mark
    float total_mark = (test_mark * 0.15) + (quiz_mark * 0.05) + (project_mark * 0.20) + (assignment_mark * 0.10) + (final_exam_mark * 0.50);

    // Determine letter grade
    char letter_grade;

    if (total_mark >= 90) {
        letter_grade = 'A+';
    } else if (total_mark >= 80) {
        letter_grade = 'A';
    } else if (total_mark >= 75) {
        letter_grade = 'B+';
    } else if (total_mark >= 60) {
        letter_grade = 'B';
    } else if (total_mark >= 55) {
        letter_grade = 'C+';
    } else if (total_mark >= 45) {
        letter_grade = 'C';
    } else if (total_mark >= 30) {
        letter_grade = 'D';
    } else {
        letter_grade = 'F';
    }

    // Print total mark and letter grade
    cout << "Total mark: " << total_mark << endl;
    cout << "Letter grade: " << letter_grade << endl;

    return 0;
}