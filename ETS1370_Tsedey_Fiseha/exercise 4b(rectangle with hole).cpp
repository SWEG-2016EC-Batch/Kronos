//rectangle on assignment

#include <iostream>
	using namespace std;
int main()
{
    int n,m;
    cout<<"enter the amount of  row and column you want to print respectively"<<endl;
    cin>>n>>m;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(j==1 || j==m||i==1||i==n){
        cout<<"* ";}
        else cout<<"  ";}
        cout<<endl;}
        return 0;}