#include <iostream>
#include <string>

using namespace std;

    string FirstName,LastName;
    double workingHours, bonusRate, baseSalary;

int main() {

    cout<<" Enter the first name of the person"<<endl;
    cin>>FirstName;
     cout<<" Enter the last name of the person"<<endl;
    cin>>LastName;
     string FullName = (FirstName +" "+ LastName);

    cout << "Enter weekly working hours: "<<endl;
    cin >> workingHours;

    cout << "Enter bonus rate per hour: "<<endl;
    cin >> bonusRate;

    cout << "Enter base salary: "<<endl;
    cin >> baseSalary;

    double bonusPayment = bonusRate * workingHours;
    double grossSalary = baseSalary + bonusPayment;

    double pension = baseSalary * 0.05;
    double tax = baseSalary * 0.15;

    double netSalary = grossSalary - (pension + tax);

    cout <<"Dear "<< FullName <<" your payment for this month is "<< endl;

    cout << "Bonus Payment: $" << bonusPayment << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Net Salary: $" << netSalary << endl;
    return 0;
}

