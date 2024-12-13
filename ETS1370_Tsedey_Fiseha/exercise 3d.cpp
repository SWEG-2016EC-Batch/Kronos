#include <iostream>
using namespace std;

int main() {
    int number, firstDigit, lastDigit, sum = 0;

    cout << "Enter number: ";
    cin >> number;

    // Extract the last digit
    lastDigit = number % 10;

    // Extract the first digit
    while (number >= 10) {
        number = number / 10;
    }
    firstDigit = number;

    // Calculate the sum of first and last digits
    sum = firstDigit + lastDigit;

    cout << "The sum of the first and last digit is: " << sum << endl;

    return 0;
}
