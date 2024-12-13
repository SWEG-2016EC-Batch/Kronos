#include <iostream>
using namespace std;
int main(){
    char character='A';
    for(int i=1;i<=4;i++){
        for(int j=1;j<=6;j++){
            cout<<character<<" ";
            character++;
        }
        cout<<endl;
    }
    return 0;
}
