//4a
#include <iostream>
using namespace std;
int main(){
    char character='A';
    for(int i=1;i<=4;i++){
        for(int j=1;j<=6;j++){
            cout<<character<<" ";
            character++;
        }
        cout<<endl;
    }
    return 0;
}
//4b
#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    char character = 'A';

    
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    
    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= columns; j++) {
            cout << character << " ";
            character++; 
        }
        cout << endl; 
    }

    return 0;
}
