//g) Check whether a number is palindrome or not.
#include <iostream>
using namespace std;
int main(){
    int number,reverse=0;
    cout<<"Enter a number: ";
    cin>>number;
    int original =number;
    while(number!=0){
        int digit = number%10;
        reverse = reverse*10 + digit;
        number = number/10;

    }
    if(original==reverse){
        cout<<"it is palindrome number";

    }
    else{
        cout<<"it is not palindrome number";
    }
    return 0;
}
