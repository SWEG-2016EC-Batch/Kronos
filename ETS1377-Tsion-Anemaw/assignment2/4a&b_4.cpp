//4a
#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 5; i++) {
        
        for (int k = 1; k <= (5 - i) * 2; k++) {
            cout << " ";
        }
       
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl; 
    }

    return 0;
}
//4b
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows for the pattern: ";
    cin >> rows;

   
    for (int i = 1; i <= rows; i++) {
        
        for (int k= 1; k<= (rows - i) * 2; k++) {
            cout << " ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
