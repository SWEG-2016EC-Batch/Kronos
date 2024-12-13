#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, firstDigit, lastDigit, numDigits, swappedNumber;

    cout << "Enter an integer: ";
    cin >> number;
 
    int absNumber = abs(number);

    lastDigit = absNumber % 10;

    firstDigit = absNumber;
    numDigits = 0; 
    while (firstDigit >= 10) {
        firstDigit /= 10;
        numDigits++;
    }
    numDigits++; 
   
    swappedNumber = absNumber;
    swappedNumber -= firstDigit * pow(10, numDigits - 1); 
    swappedNumber -= lastDigit;                         
    swappedNumber += firstDigit;                        
    swappedNumber += lastDigit * pow(10, numDigits - 1); 

    // Handle sign if the input number is negative
    if (number < 0) {
        swappedNumber = -swappedNumber;
    }

   
    cout << "Number after swapping first and last digits: " << swappedNumber << endl;

    return 0;
}
