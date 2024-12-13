#include <iostream>
using namespace std;

int main() {
    int num, originalNum, firstDigit, lastDigit, divisor = 1, middlePart;

    cout << "Enter a number: ";
    cin >> num;

    
    if (num < 10) {
        cout << "Number after swapping first and last digits: " << num << endl;
        return 0;
    }

    originalNum = num;
    lastDigit = num % 10; 

    
    while (num >= 10) {
        num /= 10;
        divisor *= 10;
    }
    firstDigit = num; 
    middlePart = (originalNum % divisor) / 10; 

    
    int swappedNumber = lastDigit * divisor + middlePart * 10 + firstDigit;

    cout << "Number after swapping first and last digits: " << swappedNumber << endl;

    return 0;
}
