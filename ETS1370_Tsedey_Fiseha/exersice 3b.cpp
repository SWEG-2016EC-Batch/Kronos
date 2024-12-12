 /* h) Find the frequency of each digit in a given integer and print in table format.*/
#include <iostream>
using namespace std;
int main(){
    int number,frequencey=0,count ;
    cout<<"enter number: ";
    cin>>number;
    while(number!=0){
        int remainder = number%10;
        count+=1;
        number/=10;
    } 
    cout<<"count"<<count;
    return 0;
}
