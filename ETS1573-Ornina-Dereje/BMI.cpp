/*Make a program that calculates the Body Mass Index (BMI) of a person and determine weather the person is
in normal weight, under weight, over weight or obesity . BMI is calculated as (BMI = w/h*h). Make the program to
work for multiple person before terminated.*/

#include <iostream>
using namespace std;
int main (){
    
//Declare variables
double height, weight, BMI;
int number_of_people;
char user;
do{
//Receive input(weight & height ) from the user
cout<<"please enter your weight in kilograms: ";
cin>> weight;
cout<<"please enter yout height in meter  : ";
cin>>height;

//calculate BMI
BMI = weight/(height*height);
cout<<"your BMI is : "<<BMI<<endl;

//Determine whether the person is normal weight, under weight, over weight
if(BMI < 18.5){
    cout<<"you are under weight." <<endl;}
else if(BMI>=18.5 && BMI<=24.9) {
    cout<<"you are normal weight."<<endl;}
else if(BMI>=25 && BMI <=29.9){
    cout<<"you are over weight."<<endl;}

else {cout<<"invalid input. "<<endl;}
cout<<"Do you want to continue ? (if you want to continue write Y  ) : ";
cin>>continue_;
    }
while(continue_==Y);
return 0;
}
