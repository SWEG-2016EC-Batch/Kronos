// Prints the first and the last digit of the number and find their sum.
#include <iostream>
using namespace std;

int main() {
    int number, firstDigit, lastDigit, sum = 0;

    cout << "Enter number: ";
    cin >> number;

    
    lastDigit = number % 10;

    
    while (number >= 10) {
        number = number / 10;
    }
    firstDigit = number;


    sum = firstDigit + lastDigit;

    cout << "The sum of the first and last digit is: " << sum << endl;

    return 0;
}
