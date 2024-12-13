// 4a
#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=6;i++){
        for(int j=6-i;j>=1;j--){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            if(i==6 || k==1 || i==k)
                cout<<" *";
            else
                cout<<"  ";
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

    
    for (int i = 1; i <= rows; i++) {
       
        for (int j = rows - i; j >= 1; j--) {
            cout << " ";
        }
        
        for (int k = 1; k <= i; k++) {
            if (i == rows || k == 1 || i == k)
                cout << " *";
            else
                cout << "  ";
        }
        
        cout << endl;
    }

    return 0;
}
