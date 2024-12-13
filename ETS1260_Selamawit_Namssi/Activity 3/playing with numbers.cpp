#include <iostream>
#include <cmath>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}


int countDigits(int num) {
    int count = 0;
    if (num == 0) return 1;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

int productOfEvenDigits(int num) {
    int product = 1;
    bool foundEven = false;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            product *= digit;
            foundEven = true;
        }
        num /= 10;
    }
    return foundEven ? product : 0;
}

void firstAndLastDigits(int num, int &first, int &last, int &sum) {
    last = num % 10;
    while (num >= 10) {
        num /= 10;
    }
    first = num;
    sum = first + last;
}

int swapFirstAndLast(int num) {
    if (num < 10) return num;

    int last = num % 10;
    int first = num;

    while (first >= 10) {
        first /= 10;
    }

    int numDigits = log10(num);

    num = num - first * pow(10, numDigits);
    num = num - last;
    num = num + first * pow(10, 0);
    num = num + last * pow(10, numDigits);

    return num;

}


bool isPalindrome(int num) {
    return num == reverseNumber(num);
}


void digitFrequency(int num) {
    int freq[10] = {0};
    while (num > 0) {
        freq[num % 10]++;
        num /= 10;
    }
    cout << "\nDigit Frequency:\n";
    cout << "Digit   Frequency\n";
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            cout << i << "       " << freq[i] << endl;
        }
    }
}

bool isStrong(int num) {
    int original = num, sum = 0;
    while (num > 0) {
        int digit = num % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        num /= 10;
    }
    return sum == original;
}


bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int choice, number;

    do {
        cout << "\nMenu:\n";
        cout << "1. Reverse the number\n";
        cout << "2. Count the number of digits\n";
        cout << "3. Product of even digits\n";
        cout << "4. First and last digits and their sum\n";
        cout << "5. Swap first and last digits\n";
        cout << "6. Check if palindrome\n";
        cout << "7. Digit frequency\n";
        cout << "8. Check if Strong number\n";
        cout << "9. Check if Perfect number\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice != 0) {
            cout << "Enter an integer: ";
            cin >> number;
        }

        switch (choice) {
            case 1:
                cout << "Reversed Number: " << reverseNumber(number) << endl;
                break;
            case 2:
                cout << "Number of Digits: " << countDigits(number) << endl;
                break;
            case 3:
                cout << "Product of Even Digits: " << productOfEvenDigits(number) << endl;
                break;
            case 4: {
               int first, last, sum;
                firstAndLastDigits(number, first, last, sum);
                cout << "First Digit: " << first << ", Last Digit: " << last << ", Sum: " << sum << endl;
                break;
            }
            case 5:
                cout << "Number after swapping first and last digits: " << swapFirstAndLast(number) << endl;
                break;
            case 6:
                cout << (isPalindrome(number) ? "The number is a palindrome." : "The number is not a palindrome.") << endl;
                break;
            case 7:
                digitFrequency(number);
                break;
            case 8:
                cout << (isStrong(number) ? "The number is a Strong number." : "The number is not a Strong number.") << endl;
                break;
            case 9:
                cout << (isPerfect(number) ? "The number is a Perfect number." : "The number is not a Perfect number.") << endl;
                break;
            case 0:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
