// Online C++ compiler to run C++ program online// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enetr a size of your pyramid"<<endl;
    cin>>n;
for(int i=1;i<=n;i++){
    for(int k=n-i;k>=1;k--){
        cout<<" ";}
    
    for(int j=1;j<=i;j++){
        cout<<" *";
    }
    cout<<endl;}


    return 0;
}