/*Design an algorithm and write a to read an employee name weekly working hours, bonus rate per hour and
base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%,
tax: 15%).*/

#include <iostream>
using namespace std;
int main(){

//Declare variables
double bonusrate,basesalary ,pension_rate=-0.05,taxrate=0.15;
double gross_salary, net_salary , bonus_payment;
int  weekly_working_hours;

//Recieve an input of basesalary,working_hours and bonusrate from the user
cout<<"Enter the weekly working hours : ";
cin>>weekly_working_hours;
cout<<"Enter the base salary : ";
cin>>basesalary;
cout<<"enter the bonus rate per hour : ";
cin>>bonusrate;

//calculate the employees gross-salary, net salary and bonus payment.
bonus_payment=weekly_working_hours*bonusrate;
cout<<"The bonus payment is : "<<bonus_payment<<endl;
gross_salary=basesalary + bonus_payment;
cout<<"The gross salary is : "<<gross_salary<<endl;
net_salary=gross_salary-pension_rate-taxrate;
cout<<"The total net salary is : "<<net_salary<<endl;
return 0;
}