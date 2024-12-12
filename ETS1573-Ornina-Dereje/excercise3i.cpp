#include <iostream>
using namespace std;
int main(){
    int number,factorial=1,sum=0;
    cout<<"enter number: ";
    cin>>number;
    //using for loop to determine the factorial of a number
    for(int i=1;i<=number;i++){
        factorial*=i;
    }
    while(factorial!=0){
        int digit=factorial%10;
        sum+=digit;
        factorial/=10;
        }
    if(sum==number){
        cout<<"strong number";
    }
    else{
        cout<<"not strong number";
    }
    return 0;
}
