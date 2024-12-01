#include<iostream>
using namespace std;

int main()
{
    int  tank_capacity, miles_per_gallon, no_of_miles;
    cout <<"enter fule tank capacity  of your automobile in gallon"<<endl;
    cin>> tank_capacity;
    cout <<"input the miles per gallon your automobile can be driven"<<endl;
    cin>>miles_per_gallon;
   no_of_miles=(tank_capacity *miles_per_gallon);
   cout<< "the miles your automobile goes with out refueling is:  "<<no_of_miles;
    return 0;
}