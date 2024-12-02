#include <iostream>
using namespace std;
int main() {
    float base_salary,bonus_rate,bonus=0,pension,gross_salary;
    int working_hours;
    string name;
    
    cout<<"enter your name\n";
    cin>>name;
    cout<<"Dear Mr/s "<< name<<endl;
    cout<<"enter your base_salary=";
    cin >>base_salary;
    cout<<"enter your weekly working hours\n=";
    cin>>working_hours;
    cout<<"enter your bonus_rate per hour=";
    cin>>bonus_rate; 
     bonus=working_hours*bonus_rate;
     cout<<"your bonus="<<bonus<<endl;
     gross_salary=base_salary+bonus;
     cout<<"your gross_salary=: "<<gross_salary<<endl;
      pension=base_salary*0.05;
     cout<<"pension="<<pension<<endl;
    double tax=((base_salary-pension)+(bonus))*0.15;
    cout<<"tax="<<tax<<endl;
    int net_salary;
     net_salary=((base_salary-pension)+(bonus))-tax;
    cout<<"your net salary="<<net_salary<<endl;

    return 0;
}
