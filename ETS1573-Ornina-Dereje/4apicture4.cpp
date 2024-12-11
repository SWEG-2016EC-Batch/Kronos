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
