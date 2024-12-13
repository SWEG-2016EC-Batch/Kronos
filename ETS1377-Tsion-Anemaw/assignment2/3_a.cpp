#include <iostream>
using namespace std;
int main(){
    int number, reverse=0, remainder;
    cout<<"Enter a number: ";
    cin>>number;
    while(number!=0){
        remainder = number%10;
        reverse = reverse*10 + remainder;
        number = number/10;
    }
    cout<<"The reverse of the number is: "<<reverse;
    
    return 0;
}
