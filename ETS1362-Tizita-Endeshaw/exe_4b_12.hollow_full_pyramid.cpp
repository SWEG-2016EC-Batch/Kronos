#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"please enter n: ";
    cin>>n;
   for(int i=1;i<=n;i++){
        for(int h=n-i;h>0;h--)
            cout<<" ";
            for(int j=1;j<=i;j++){
                if(i==1||i==n||j==1||j==i){
                cout<<" * ";
                }
                else{
                    cout<<"   ";
                }
            
            }
        
    
cout<<endl;
}}