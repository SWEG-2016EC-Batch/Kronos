#include <iostream>
using namespace std;
int main() {
  int number,numdigits=0;
  
  cout<<"please enter an integer: ";
  cin>>number;
  while(number>0){
      number/=10;
      numdigits++;
  }
  cout<<"the number of digits is: "<<numdigits;
  
    return 0;
}
