#include <iostream>
using namespace std;

int main() {
    float basic_salary, worked_hours, bonus_rate;
    float bonus = 0, gross_salary, pension, income_tax, net_salary;
    float tax_rate;

    cout << "Enter basic salary: ";
    cin >> basic_salary;
    cout << "Enter worked hours: ";
    cin >> worked_hours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonus_rate;

    if (worked_hours > 40) {

        float extra_hours = worked_hours - 40;
        bonus = extra_hours * bonus_rate;

    }

     gross_salary = basic_salary + bonus;

     pension = basic_salary * 0.07;

    if (gross_salary <= 200) {
        tax_rate = 0;
    } else if (gross_salary <= 600) {
        tax_rate = 0.10;
    } else if (gross_salary <= 1200) {
        tax_rate = 0.15;
    } else if (gross_salary <= 2000) {
        tax_rate = 0.20;
    } else if (gross_salary <= 3500) {
        tax_rate = 0.25;
    } else {
        tax_rate = 0.30;
    }


    income_tax = gross_salary * tax_rate;

    net_salary = gross_salary - pension - income_tax;


    cout << "Gross Salary: " << gross_salary << " Br" << endl;
    cout << "Pension Deduction: " << pension << " Br" << endl;
    cout << "Income Tax Deduction: " << income_tax << " Br" << endl;
    cout << "Net Salary: " << net_salary << " Br" << endl;

    return 0;
}
