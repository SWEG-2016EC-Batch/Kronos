//3. Write a program that find the result of the expression 𝑥^𝑦 where the value of X and Y are entered by the user.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base,exponent, result;

    
    cout << "Enter the base of a number: ";
    cin >> base;

    cout << "Enter the exponent: ";
    cin >> power;

    
    result = pow(base, exponent);

    
    cout << "The result is " << result << endl;

    return 0;
}
