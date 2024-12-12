// Online C++ compiler to run C++ program online// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<" how much size of pyramid you want"<<endl;
   cin>>n;
for(int i=1;i<=n;i++){
    for(int k=n-i;k>=1;k--){
        cout<<" ";}
    
    for(int j=1;j<=i;j++){
    	if(j==1||j==i||i==n)
        cout<<" *";
        else
        cout<<"  ";
    }
    cout<<endl;}


    return 0;
}