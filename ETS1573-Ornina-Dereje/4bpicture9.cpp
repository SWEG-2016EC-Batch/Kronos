#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"please enter n: ";
    cin>>n;
  for (int i=n;i>=1;i--){

for(int j=1;j<=i;j++){ 
    if(i==n ||i==1 || j==i ||j==1){
        cout<<"*";
    }
  else{
      cout<<" ";
  }
}

cout<<endl;
}
return 0;
}
