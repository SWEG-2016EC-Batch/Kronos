//4a
#include <iostream>
using namespace std;
int main(){
    char character ='a';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            char letter = character + j-1;
            cout<<letter<<" ";
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
    char character = 'a';

    
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    
    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= columns; j++) {
            char letter = character + j - 1;
            cout << letter << " ";
        }
        
        cout << endl;
    }

    return 0;
}
