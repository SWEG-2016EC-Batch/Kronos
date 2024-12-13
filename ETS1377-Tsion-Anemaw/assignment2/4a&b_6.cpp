#include <iostream>
using namespace std;
int main(){
    char character ='a';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            char letter = character + j-1;
            cout<<letter<<" ";
        }
        cout<<endl;
    }
    return 0;
}
