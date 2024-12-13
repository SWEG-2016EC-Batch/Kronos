/*Develop a program that find the Net-Pay of an employee after
deduction of pension (7%) and tax based on tax rate provided. The
program should read the basic salary, worked hours, and bonus
rate. If the employee worked hours exceed 40 hrs., the program
prompts the user to enter an over-time bonus rate/hour. */

#include <iostream>
using namespace std;

int main() {
    float basic_salary, worked_hours, bonus_rate, overtime_bonus_rate, bonus, gross_salary, pension, tax, net_salary;

    cout << "Enter basic salary: ";
    cin >> basic_salary;

    cout << "Enter worked hours: ";
    cin >> worked_hours;

    cout << "Enter bonus rate: ";
    cin >> bonus_rate;

    if (worked_hours > 40) {
        cout << "Enter overtime bonus rate/hour: ";
        cin >> overtime_bonus_rate;
        bonus = (worked_hours - 40) * overtime_bonus_rate;
    } else {
        bonus = 0;
    }

    gross_salary = basic_salary + bonus;
    pension = basic_salary * 0.07;

    if (gross_salary <= 200) {
        tax = 0;
    } else if (gross_salary <= 600) {
        tax = gross_salary * 0.1;
    } else if (gross_salary <= 1200) {
        tax = gross_salary * 0.15;
    } else if (gross_salary <= 2000) {
        tax = gross_salary * 0.2;
    } else if (gross_salary <= 3500) {
        tax = gross_salary * 0.25;
    } else {
        tax = gross_salary * 0.3;
    }

    net_salary = gross_salary - pension - tax;

    cout << "Net salary: " << net_salary << endl;

    return 0;
}
