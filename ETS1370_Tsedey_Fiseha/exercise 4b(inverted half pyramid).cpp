#include<iostream>
using namespace  std;
int main(){
    int i,j,n;
    cout<<"enter the amount of size of triangle you want"<<endl;
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
             cout<<" *";}
            cout<<endl;
            }
            return 0;
}
            