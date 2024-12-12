//the shaps d/

//triangle with hole inside
#include<iostream>
using namespace  std;
int main(){
    int i,j;
    for(i=6;i>=1;i--){
        for(j=1;j<=i;j++){
            if (j==1||i==6 ||j==i){
        cout<<"*";}
        else cout<<" ";}
            cout<<endl;
            }
            return 0;
}
            
