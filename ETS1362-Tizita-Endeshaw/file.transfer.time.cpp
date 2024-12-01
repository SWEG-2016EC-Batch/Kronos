/*A serial transmission line can transmit 960 characters a second. Write a program that will calculate how long
it will take to send a file, given the file size. Test your program on a 400MB (419,430,400 byte) file which may
take days.*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){

//Declare variables
int transmissionrate=960,filesize;
double time_in_seconds;
int time_in_minutes , time_in_hours;

//recieve file size from the user
cout<<"Enter the file size : ";
cin>>filesize;

//calculate the time it takes to transfer the file in second
time_in_seconds=static_cast<double>(filesize)/transmissionrate;

//converting the time in seconds in to hours and minutes
time_in_minutes=static_cast<int>(ceil(time_in_seconds/60));
time_in_hours=static_cast<int>(ceil(time_in_minutes/60));

cout<<"The time takes to send the file size of " <<filesize<< " bytes with transmission rate of "<<transmissionrate<<" character/second is "<<endl;
 cout<<"Seconds : "<<time_in_seconds<<" seconds"<<endl;
 cout<<"Miinutes : "<<time_in_minutes<<" minutes"<<endl;
 cout<<"Hours : "<<time_in_hours<<" hours"<<endl;
return 0;
}
