/*Write a program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallons
the automobiles can be driven. The program outputs the number miles the automobile cam be driven
without refueling.*/

#include <iostream>
using namespace std;
int main(){

//Declare variables
double fuel_tank_capacity,miles_per_gallons,miles_driven;

//Input the fuel_tank_capacity,miles per gallons from the user
cout<<"please enter the fuel tank capacity in gallons : ";
cin>>fuel_tank_capacity;
cout<<"enter miles per gallon of the automobile in gallon per miles : ";
cin>>miles_per_gallons;

//calculate the miles that tha automobile can be driven without refueling
miles_driven=fuel_tank_capacity*miles_per_gallons;
cout<<"This automobile can be driven for "<<miles_driven<<" miles";

return 0;
    
}