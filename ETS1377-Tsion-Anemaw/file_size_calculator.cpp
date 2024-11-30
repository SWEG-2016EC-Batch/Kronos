//5.A serial transmission line can transmit 960 characters a second. Write a program that will calculate how long it will take to send a file, given the file size. Test your program on a 400MB (419,430,400 byte) file which may take days.
#include <iostream>
using namespace std;

int main() {
    
    int days,hours,minutes,seconds;
    const int transmission_rate = 960; 

    
    long long file_size;
    cout << "Enter the file size in bytes: ";
    cin >> file_size;

    
    long long total_seconds = file_size / transmission_rate;

    
     days = total_seconds / (24 * 3600); 
    total_seconds %= (24 * 3600); 
    hours = total_seconds / 3600; 
    total_seconds %= 3600; 
    minutes = total_seconds / 60; 
    seconds = total_seconds % 60;

    
    cout << "Transmission Time:" << endl;
    cout << days << " days, " << hours << " hours, "<< minutes << " minutes, " << seconds << " seconds" << endl;

    return 0;
}
