//4a
#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=6;i++){
        for(int j=6-i;j>=1;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<" * ";
    }
    cout<<endl;
    }
    return 0;
}
//4b
int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i = 1; i <= rows; i++) {
        
        for (int j = rows - i; j >= 1; j--) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << " *";
        }
        
        cout << endl;
    }

    return 0;
}
