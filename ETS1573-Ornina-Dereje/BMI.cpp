//1. Make a program that calculates the Body Mass Index (BMI) of a person and determine weather the person is in normal weight, under weight or over weight. BMI is calculated as (BMI = w/h*h). Make the program to work for multiple person before terminated
#include <iostream>
using namespace std;

int main() {
   
     double height,weight,BodyMassIndex;
     int number_of_people;

cout<<" please enter no of people that wants to check BMI: ";
cin>> number_of_people ;
cout<<"here is the BMI of"<<number_of_people << " people"<<endl;
for(int i=1;i<=number_of_people;i++){
    cout<<"person no"<<i<<endl;
   cout<<"please enter your height in meter: ";
   cin>>height;
   cout<<"please enter your weight in kilogram: ";
   cin>>weight;
   BodyMassIndex=weight/(height*height);
   cout<<"your BodyMassIndex is: "<<BodyMassIndex<<endl;
   if(BodyMassIndex<18.5 ){
       cout<<"underweight"<<endl;
   }
       else if(BodyMassIndex>=25 && BodyMassIndex<=29.9 ){
           cout<<"overweight"<<endl;
       }
           else if(BodyMassIndex>=18.5 && BodyMassIndex<=24.9){
               cout<<"normal"<<endl;
           }
           else{
           cout<<"please check your input"<<endl;
           }
}
    return 0;
}
    
    
    
    
