//2. Write a program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallons the automobiles can be driven. The program outputs the number miles the automobile cam be driven without refueling.

#include <iostream>
using namespace std;
int main() {
    double fuel_in_gallon, miles_per_gallons, mile ;
    
    cout<<"Enter your fuel in gallon: ";
    cin>>fuel_in_gallon;
    cout<<"Enter the amount of mile per gallon: ";
    cin>>miles_per_gallons;
    mile = fuel_in_gallon*miles_per_gallons;
    cout<<"The program outputs the number miles the automobile cam be driven without refueling is "<<mile<< " mile.";

    return 0;
}
