// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
	int n,m;
	cout<<"how many row and column of character you want?\nenter row and column respectively"<<endl;
	cin>>n>>m;
   if(m*n<=26){
   
char character='A';
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cout<<" "<<character<<" ";
        character++;
    }
    cout<<endl;
}}
else
cout<<"There are only 26 alphabet!";

    return 0;
}