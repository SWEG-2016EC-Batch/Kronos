//4a
#include <iostream>
using namespace std;
int main(){
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
//4b
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i = rows; i >= 1; i--) {
      
        for (int k = rows - i; k >= 1; k--) {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++) {
            cout << " *";
        }
        
        cout << endl;
    }

    return 0;
}
