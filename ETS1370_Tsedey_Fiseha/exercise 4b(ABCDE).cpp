#include<iostream>
using namespace  std;
int main(){
    char i, j, n;
    cout<<"enter size of your triangle in alphabet"<<endl;
    cin>>n;
    for (i='A';  i<=n;  i++){
     for(j='A';  j<=i;  j++){
         cout<< j<< " ";
}
cout<<endl;
    }
   return 0;
    }