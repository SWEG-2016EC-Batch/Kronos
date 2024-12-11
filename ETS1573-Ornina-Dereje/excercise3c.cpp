#include <iostream>
using namespace std;
int main() {
  int number,reminder;
  long int product=1;
  
  cout<<"please enter an integer: ";
  cin>>number;
 while (number>0){
 reminder=number%10;
 number/=10;
 if(reminder%2==0){
     product*=reminder;
     cout<<"product of even integer numbers is "<<product<<endl;}
 }
     
 
     
 
 return 0;
}
