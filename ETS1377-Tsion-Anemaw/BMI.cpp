//1. Make a program that calculates the Body Mass Index (BMI) of a person and determine weather the person is in normal weight, under weight or over weight. BMI is calculated as (BMI = w/h*h). Make the program to work for multiple person before terminated.
#include <iostream>
using namespace std;
int main() {
    char user;
    do{
   
    double height, weight;
    double BMI;
    cout<<"Enter your height: ";
    cin>>height;
    cout<<"Enter your weight: ";
    cin>>weight;
    BMI=weight/(height*height);
    cout<<"BMI: "<<BMI<<endl;
    
    if(BMI < 18.5){
        cout<<"Underweight"<<endl;
    }
    else if (BMI>= 18.5 && BMI<=24.5){
        cout<<"Normal weight"<<endl;
    }
    else{ 
        cout<<"Overweight"<<endl;
    }
    cout<<"do you want to continue?y/n  ";
    cin>>user;
    }
    while(user =='y');
    
    

    return 0;
}
