//4a
#include <iostream>
using namespace std;
int main(){
    char character ='A';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
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
    int rows;
    char character = 'A';

    
    cout << "Enter the number of rows: ";
    cin >> rows;

    
    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= i; j++) {
            char letter = character + j - 1;
            cout << letter << " ";
        }
        
        cout << endl;
    }

    return 0;
}
