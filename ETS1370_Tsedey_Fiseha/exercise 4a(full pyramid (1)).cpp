// Online C++ compiler to run C++ program online// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
for(int i=1;i<=6;i++){
    for(int k=6-i;k>=1;k--){
        cout<<" ";}
    
    for(int j=1;j<=i;j++){
    	if(j==1||j==i||i==6)
        cout<<" *";
        else
        cout<<"  ";
    }
    cout<<endl;}


    return 0;
}