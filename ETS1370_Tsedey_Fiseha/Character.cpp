#include <iostream>
using namespace std;

int main() {
    
    const int transmission_rate = 960; 

    
    long long file_size;
    long long total_seconds;
    int days, hours, minutes, seconds;

    
    cout << "Enter the file size in bytes: ";
    cin >> file_size;

    
    total_seconds = file_size / transmission_rate;

    
    days = total_seconds / (24 * 3600);               
    total_seconds %= (24 * 3600);                     
    hours = total_seconds / 3600;                     
    total_seconds %= 3600;                           
    minutes = total_seconds / 60;                     
    seconds = total_seconds % 60;                     

   
    cout << "Transmission Time:" << endl;
    cout << days << " days, " << hours << " hours, "
         << minutes << " minutes, " << seconds << " seconds" << endl;

    return 0;
}
