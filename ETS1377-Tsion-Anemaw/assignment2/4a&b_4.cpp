//4a
#include <iostream>
using namespace std;
int main() {
   
   for(int i=1;i<=5;i++){
       for(int h=5-i;h>0;h--)
       cout<<" ";
       for(int j=i;j>=1;j--){
           cout<<j;
       }
       cout<<endl;
   }
 
 

    return 0;
}
//4b
#include <iostream>
using namespace std;
int main() {
      int n;
    
    cout<<"please enter number of n:";
    cin>>n;
   
   for(int i=1;i<=n;i++){
       for(int h=n-i;h>0;h--)
       cout<<" ";
       for(int j=i;j>=1;j--){
           cout<<j;
       }
       cout<<endl;
   }
 
 

    return 0;
}
