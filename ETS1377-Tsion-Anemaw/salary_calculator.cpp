// 4. Design an algorithm and write a to read an employee name weekly working hours, bonus rate per hour and 
base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%, 
tax: 15%).
#include <iostream>
using namespace std;

int main() {
    int basic_salary, weekly_work_hours, bonus_rate, extra_hours;
    double gross_salary, pension, tax, net_salary, bonus = 0;
    string name;
    cout<<"Enter your name : ";
    cin>>name;
    cout << "Enter your basic salary: ";
    cin >> basic_salary;
    cout << "Enter your weekly work hours: ";
    cin >> weekly_work_hours;
    cout << "Enter the weekly extra hours you work: ";
    cin >> extra_hours;

    
    if (extra_hours > 0) {
        cout << "Enter your over-time bonus rate per hour: ";
        cin >> bonus_rate;
        bonus = extra_hours * bonus_rate;
    }

    
    gross_salary = basic_salary + bonus;

    
    tax = gross_salary * 0.15;          
    pension = basic_salary * 0.05;     

    
    net_salary = gross_salary - tax - pension;

    
    cout << "Results"<<endl;
    cout<<"Your name is  "<<name<<endl;
    cout << "Basic Salary: " << basic_salary << " Birr"<< endl;
    cout << "Bonus: " << bonus << " Birr"<< endl;
    cout << "Gross Salary: " << gross_salary << " Birr" << endl;
    cout << "Tax Deduction : " << tax << " Birr"<<endl;
    cout << "Pension Deduction : " << pension << " Birr"<< endl;
    cout << "Net Salary: " << net_salary << " Birr"<< endl;

    return 0;
}
