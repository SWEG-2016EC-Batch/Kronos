#include <iostream>
using namespace std;
int main() {
    int n;
     unsigned int number;
    int sum,remainder;
    int store=0;
    cout << "Enter an integer: ";
    cin >> number;
    int temp=number%10;
    while (number != 0) {
        remainder = number % 10;       
        store++;
       
        number /= 10;                     
    } if(remainder>0&&remainder<10){
            cout<<"the first digit is: "<<remainder<<endl;
            cout<<"the last digit is: "<<temp<<endl;
           
        sum = temp+remainder;
    }
    cout << "The sum of the first and last digit is: " << sum<< endl;

    return 0;
}
 

 
