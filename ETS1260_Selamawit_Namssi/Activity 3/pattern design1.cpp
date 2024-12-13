#include <iostream>

using namespace std;
int main() {

    cout << "Pattern A:\n";
    for (int i = 0; i < 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "Pattern B:\n";
    char ch = 'A';
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    cout << "Pattern C:\n";
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "Decreasing Number Pattern:\n";
    for (int i = 1; i <= 5; ++i) {

        for (int j = 5; j > i; --j) {
            cout << "  ";
        }
        for (int j = i; j >= 1; --j) {
            cout << j << " ";
        }
        cout << endl;
    }

     cout << "\nLetter Pattern A:\n";
    for (char i = 'A'; i <= 'E'; ++i) {
        for (char j = 'A'; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }

     cout << "\nLetter Pattern B:\n";
    for (int i = 0; i < 5; ++i) {
        for (char j = 'a'; j <= 'e'; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }


    return 0;
}
