//4a
#include <iostream>
using namespace std;
int main(){
   
    // inverted half pyramid
    for(int i=6;i>=1;i--){
        for(int j=i; j>=1;j--){
            cout<<" * ";
        }
    cout<<endl;
    }
    
  
    return 0;
} 
//4b
#include <iostream>
using namespace std;

int main() {
    int rows;

    
    cout << "Enter the number of rows: ";
    cin >> rows;

   
    for (int i = rows; i >= 1; i--) {
        
        for (int j = i; j >= 1; j--) {
            cout << " * ";
        }
        cout << endl; 
    }

    return 0;
}
