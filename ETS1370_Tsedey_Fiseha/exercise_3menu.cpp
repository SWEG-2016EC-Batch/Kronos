#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, choice;

    // Read the number
    cout << "Enter a number: ";
    cin >> num;

    
        // Display the menu
        cout << "\nMenu:\n";
        cout << "1. Reverse of the number\n";
        cout << "2. Number of digits\n";
        cout << "3. Product of even digits\n";
        cout << "4. First and last digit\n";
        cout << "5. Swap first and last digit\n";
        cout << "6. Palindrome\n";
        cout << "7. Frequency of each digit\n";
        cout << "8. Strong number\n";
        cout << "9. Perfect number\n";
        cout << "10. Exit\n";

        // Read the choice
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: { // Reverse of the number
                int temp = num, rev = 0;
                while (temp > 0) {
                    int digit = temp % 10;
                    rev = rev * 10 + digit;
                    temp /= 10;
                }
                cout << "Reverse of the number: " << rev << endl;
                break;
            }
            case 2: { // Number of digits
                int temp = num, count = 0;
                while (temp > 0) {
                    count++;
                    temp /= 10;
                }
                cout << "Number of digits: " << count << endl;
                break;
            }
            case 3: { // Product of even digits
                int temp = num, prod = 1;
                bool hasEven = false; // To check if there's at least one even digit
                while (temp > 0) {
                    int digit = temp % 10;
                    if (digit % 2 == 0) {
                        prod *= digit;
                        hasEven = true;
                    }
                    temp /= 10;
                }
                if (hasEven) {
                    cout << "Product of even digits: " << prod << endl;
                } else {
                    cout << "No even digits found." << endl;
                }
                break;
            }
            case 4: { // First and last digit
                int temp = num, first = 0, last = num % 10; // Last digit is easy
                while (temp > 0) {
                    first = temp % 10; // Update first on each iteration
                    temp /= 10;
                }
                cout << "First digit: " << first << ", Last digit: " << last << endl;
                break;
            }
            case 5: { // Swap first and last digit
                int temp = num, newNum = 0, first, last = num % 10; // Last digit
                string strNum = to_string(num); // Convert to string for easy manipulation
                first = strNum[0] - '0'; // First digit

                // Create new number with swapped first and last digits
                newNum += last; // Start with last digit
                for (size_t i = 1; i < strNum.length() - 1; i++) {
                    newNum = newNum * 10 + (strNum[i] - '0'); // Add middle digits
                }
                newNum = newNum * 10 + first; // End with first digit

                cout << "Number after swapping first and last digit: " << newNum << endl;
                break;
            }
            case 6: { // Palindrome check
                int temp = num, rev = 0, original = num;
                while (temp > 0) {
                    rev = rev * 10 + (temp % 10);
                    temp /= 10;
                }
                if (original == rev) {
                    cout << num << " is a palindrome." << endl;
                } else {
                    cout << num << " is not a palindrome." << endl;
                }
                break;
            }
            case 7: { // Frequency of each digit
                int freq[10] = {0}; // Array to hold frequency of digits from 0-9
                int temp = num;

                while (temp > 0) {
                    freq[temp % 10]++;
                    temp /= 10;
                }

                cout << "Digit Frequency Table:\n";
                for (int i = 0; i < 10; i++) {
                    if (freq[i] > 0) {
                        cout << "Digit " << i << ": " << freq[i] << endl;
                    }
                }
                break;
            }
            case 8: { // Strong number check
                int temp = num, strongSum = 0;

                while (temp > 0) {
                    int digit = temp % 10;
                    int fact = 1;

                    for (int i = 1; i <= digit; i++) {
                        fact *= i; // Calculate factorial of the digit
                    }
                    strongSum += fact; // Add factorial to strong sum
                    temp /= 10; // Remove last digit from temp
                }

                if (strongSum == num) {
                    cout << num << " is a Strong number." << endl;
                } else {
                    cout << num << " is not a Strong number." << endl;
                }
                break;
            }
            case 9: { // Perfect number check
                int sumOfDivisors = 0;

                for (int i = 1; i < num; i++) {
                    if (num % i == 0) {
                        sumOfDivisors += i; // Sum up divisors
                    }
                }

                if (sumOfDivisors == num) {
                    cout << num << " is a Perfect number." << endl;
                } else {
                    cout << num << " is not a Perfect number." << endl;
                }
                break;
            }
            case 10: { // Exit
                cout << "Exiting..." << endl;
                break;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    

    return 0;
}
