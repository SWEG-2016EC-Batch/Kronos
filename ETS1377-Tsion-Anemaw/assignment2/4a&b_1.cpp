//4a
#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// 4b
#include <iostream>
using namespace std;

int main() {
    int rows, columns;

    
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
