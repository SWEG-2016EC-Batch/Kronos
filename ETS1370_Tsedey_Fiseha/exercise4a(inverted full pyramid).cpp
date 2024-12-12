// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
for(int i=6;i>=1;i--){
    for(int k=6-i;k>=1;k--){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<" *";
    }
    cout<<endl;
}

    return 0;
}