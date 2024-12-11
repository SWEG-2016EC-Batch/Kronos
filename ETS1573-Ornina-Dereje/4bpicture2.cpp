#include <iostream>

using namespace std;
int main() {
    int n;
    cout<<"please enter n: ";
    cin>>n;
    char character  = 'A';
   
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(isupper(character)){
        
            
            cout<<" "<<character<<" ";
            character++;}
           
        }
        cout<<endl;
    }
 
    return 0;
}
