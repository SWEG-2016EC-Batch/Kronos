/* h) Find the frequency of each digit in a given integer and print in table format.*/
#include <iostream>

using namespace std;

int main() {
    int number, digit;
    int frequency[10] = {0};  

    cout << "Enter a positive integer: ";
    cin >> number;

    
    while (number != 0) {
        digit = number % 10;   
        frequency[digit]++;     
        number /= 10;           
    }


    cout << "Digit\tFrequency" << endl;
    for (int i = 0; i < 10; i++) {
        if (frequency[i] != 0) {  
            cout << i << "\t" << frequency[i] << endl;
        }
    }

    return 0;
}
