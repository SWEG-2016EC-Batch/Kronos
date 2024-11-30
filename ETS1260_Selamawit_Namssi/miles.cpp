#include <iostream>
using namespace std;

int main() {
    double tankcapacity;
    double milespergallon;

    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> tankcapacity;

    cout << "Enter the miles per gallon the automobile can drive: ";
    cin >> milespergallon;

    double totaldistance = tankcapacity * milespergallon;
    cout << "The automobile can be driven " << totaldistance << " miles without refueling." << endl;

    return 0;
}

