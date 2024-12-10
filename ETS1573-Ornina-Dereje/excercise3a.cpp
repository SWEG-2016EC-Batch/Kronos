#include <iostream>
using namespace std;
int main() {
    int number,remainder,reversed_number;
    cout<<"please enter a number: ";
    cin>>number;
    while(number!=0){
        remainder=number%10;
        number/=10;
        reversed_number=(reversed_number*10)+remainder;
        
    }
    cout<<"the reverse is: "<<reversed_number;
    return 0;
}
