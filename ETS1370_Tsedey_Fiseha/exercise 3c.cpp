#include <iostream>
using namespace std;
int main(){
    int number,count=0,product=1;
    cout<<"Enter a number: ";
    cin>>number;
    while(number!=0){
        int digit = number%10;
        if(digit%2==0){
            product*=digit;
        }
        number = number/10;

    }
    cout<<"The product of even digits in the number is: "<<product;
    return 0;
}
