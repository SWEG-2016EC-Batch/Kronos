//This is a program that calculate the expression x^y where the user inputs both variables
#include <iostream>
#include <cmath>
using namespace std;
float x,y,result;
int main()
{
    cout<<"Enter the base of the number"<<endl;
    cin>>x;
  
    cout<<"By what power you want to raise the base of the number?"<<endl;
    cin>>y;
  
      result = pow(x,y);
      cout<<"The result of the number is: "<<result<<endl;

return 0;
}

