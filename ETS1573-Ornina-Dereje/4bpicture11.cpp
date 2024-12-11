#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"please enter n: ";
    cin>>n;
   for(int i=n;i>=1;i--){
        for(int h=n-i;h>0;h--)
            cout<<" ";
            for(int j=1;j<=i;j++){
                cout<<" *";
            }
cout<<endl;
}
    return 0;
}
