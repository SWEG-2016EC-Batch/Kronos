#include <iostream>
using namespace std;
int main(){

// declare and accept gross salary,tax rate,overtime bonus rate,work hour,extra work hour, bonus rate, pension, tax, bonus, net income and employee name 

double gross_salary, work_hour,extra_work_hour,tax_rate, bonus_rate, pension, tax, bonus, over_time_bonus_rate, net_income, income_salary;
cout<<"please enter employee name: ";
char employee_name [40];
cin>> employee_name;
cout<<"please enter employee's base salary in birr: ";
cin>> gross_salary;
cout<<"please enter employee's bonus rate: ";
cin>> bonus_rate;



cout<<"please enter employee's work hour in hour: ";
cin>> work_hour;

//accepting an overtime bonus rate if the work hour is above 40 hours

if(work_hour > 40)
{
    

	cout<<"please enter overtime bonus per hour: ";
	cin>>over_time_bonus_rate;
	extra_work_hour=work_hour-40;
} 

 //calculating the tax rate based on the gross salary
 
 if(gross_salary <= 200)
 {
	tax_rate= 0;
 }
 else if (gross_salary >= 200 && gross_salary <= 600)
 {
	tax_rate= 0.1;
 }
 else if(gross_salary >= 600 && gross_salary <= 1200)
 {
	tax_rate= 0.15;
 }
else if(gross_salary >= 1200 && gross_salary <= 2000)
 {
	tax_rate= 0.2;
 }
 else if(gross_salary >= 2000 && gross_salary <= 3500)
 {
	tax_rate= 0.25;
 }
 else 
 {
	tax_rate= 0.3;
 }
 
// calculate bonus rate, income salary, pension, tax and net salary

if (work_hour > 40)
{
	
bonus = extra_work_hour * bonus_rate;
}
else {
    bonus=0;
}

income_salary = bonus + gross_salary;
pension = gross_salary * 0.07;
tax = income_salary * tax_rate;
net_income = income_salary - ( tax+ pension);

//print the results

 cout<<employee_name<<"'s gross salary: "<<gross_salary<<endl; 
cout<<employee_name<<"'s bonus payment: "<< bonus<<endl;
cout<<"dear Mr/s "<<employee_name<<" your net income is "<<net_income<<" in birr"<<endl;

return 0;
}
