# include <iostream>
using namespace std;
int main(){
 long 
 double base_salary,bonus_rate,bonus,pension,tax,deductions,gross_salary,net_salary;
 int working_hours;
 string name;
 cout<<"enter your name"<<endl;
 cin>>name;
 cout<<"enter your base salary"<<endl;
 cin>>base_salary;
 cout<<"enter your weekly working hours"<<endl;
 cin>>working_hours;
 cout<<"enter your company bonus rate"<<endl;
 cin>>bonus_rate;
 bonus = bonus_rate * working_hours;
 gross_salary = base_salary + bonus; 
 pension = 0.05 * base_salary;
 tax = 0.15 * base_salary;
 net_salary = gross_salary -pension-tax ;
 cout<<"dear mr/s "<<name<<endl;
 cout<<"your bonus payment is :" <<bonus<<endl;
 cout<<"your gross salary is :" <<gross_salary<<endl;
cout<<"your net salary is :"  <<net_salary<<endl; 
 
     
return 0;
 }
