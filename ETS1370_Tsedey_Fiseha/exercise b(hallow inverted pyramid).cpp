#include<iostream>
using namespace  std;
int main(){
    int i,j,n;
    cout<<"enter the size of your pyramid"<<endl;
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            if (j==1||i==n ||j==i){
        cout<<"* ";}
        else cout<<"  ";}
            cout<<endl;
            }
            return 0;
}