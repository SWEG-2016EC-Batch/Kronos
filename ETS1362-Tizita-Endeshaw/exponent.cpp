/*Write a program that find the result of the expression x^y where the value of X and Y are entered by the user.*/

#include <iostream>
#include<cmath>
using namespace std;
int main(){

//Declare variables
double x,y,x_the_power_of_y;

//Input x and y from the user
cout<<"Enter the value of x : ";
cin>>x;
cout<<"Enter the value of y : ";
cin>>y;

//calculate x the power of y
x_the_power_of_y=pow(x,y);

cout<<" x the power of y = "<< x_the_power_of_y<<endl;
return 0;
}