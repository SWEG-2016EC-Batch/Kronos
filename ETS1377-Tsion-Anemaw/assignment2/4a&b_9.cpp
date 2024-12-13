#include <iostream>
using namespace std;
int main(){
    
    for(int i=6;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(i==1 || i==6 || j==1 || i==j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        
        }
        cout<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int rows;

    
    cout << "Enter the number of rows: ";
    cin >> rows;

    
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            
            if (i == 1 || i == rows || j == 1 || i == j) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl; 
    }

    return 0;
}
