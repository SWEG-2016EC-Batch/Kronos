#include <iostream>
using namespace std;
int main() {
    for(int i=6;i>=1;i--){
        for(int h=6-i;h>0;h--)
            cout<<" ";
            for(int j=1;j<=i;j++){
                cout<<" *";
            }
cout<<endl;
}
    return 0;
}
