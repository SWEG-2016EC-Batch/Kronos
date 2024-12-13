#include <iostream>
using namespace std;
int main(){
    int number, count=0;
    cout<<"Enter a number: ";
    cin>>number;
    while(number!=0){
        number = number/10;
        count++;
    }
    cout<<"The number of digits in the number is: "<<count;
    return 0;
}
