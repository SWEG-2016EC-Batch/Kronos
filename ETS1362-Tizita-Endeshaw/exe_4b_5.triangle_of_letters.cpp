#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"don't enter more than 26 because there are only 26 letters!"<<endl;
    cout<<"please enter n: ";
    cin>>n;
for (int i = 1; i <= n;i++){
    char letter = 'A';
for (int j = 1; j <= i;j++){
     
        

cout << letter++ <<" ";

}
cout << endl;
}
return 0;
}