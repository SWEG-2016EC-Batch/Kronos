//make a program that calculate the  body mass index(BMI) of a person and determine if a person is in normal weight,under weight or over weight.BMI is calculated as (BMI=w/(h*h). make the program to work for multiple person before terminated./*

include <iostream>
using namespace std;
int main() {
    char user;
    do{
   
    double height, weight;
    double BMI;
    cout<<"Enter your height(in meter): ";
    cin>>height;
    cout<<"Enter your weight(in kilogram): ";
    cin>>weight;
    BMI=weight/(height*height);
    cout<<"BMI: "<<BMI<<endl;
    
    if(BMI < 18.5){
        cout<<"Underweight"<<endl;
    }
    else if (BMI>= 18.5 && BMI<=24.5){
        cout<<"Normal weight"<<endl;
    }
    else if (BMI>= 25 && BMI<=29.5){
        cout<<"Overweight"<<endl;
    }
    else{ 
        cout<<"check your input"<<endl;
    }
    cout<<"do you want to continue?(choose y if you what to continue )  ";
    cin>>user;
    }
    while(user =='y');
        return 0;
    }
