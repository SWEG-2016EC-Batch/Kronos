#include <iostream>

using namespace std;

int printPatternA(int rows) {
    cout << "Pattern A:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 1; j <= rows; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

int printPatternB() {
    cout << "\nPattern B:\n";
    char ch = 'A';
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 6; ++j) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}


int printPatternC(int rows) {
    cout << "\nPattern C:\n";
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}


int printInvertedNumberPattern(int rows) {
    cout << "\nInverted Number Pattern:\n";
    for (int i = rows; i >= 1; --i) {
        for (int j = i; j >= 1; --j) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

int hollowRectangle(int rows, int cols) {
    cout << "\nHollow Rectangle:\n";
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= cols; ++j) {
            if (i == 1 || i == rows || j == 1 || j == cols) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}


int invertedHalfPyramid(int height) {
    cout << "\nInverted Half Pyramid:\n";
    for (int i = height; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}


int hollowInvertedHalfPyramid(int height) {
    cout << "\nHollow Inverted Half Pyramid:\n";
    for (int i = height; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            if (j == 1 || j == i || i == height) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}


int fullPyramid(int height) {
    cout << "\nFull Pyramid:\n";
    for (int i = 1; i <= height; ++i) {
        for (int j = height; j > i; --j) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}


int invertedFullPyramid(int height) {
    cout << "\nInverted Full Pyramid:\n";
    for (int i = height; i >= 1; --i) {
        for (int j = height; j > i; --j) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}


int hollowFullPyramid(int height) {
    cout << "\nHollow Full Pyramid:\n";
    for (int i = 1; i <= height; ++i) {
        for (int j = height; j > i; --j) {
            cout << " ";
        }
        if (i == height) {
            for (int j = 1; j <= (2 * i - 1); ++j) {
                cout << "*";
            }
        } else {
            cout << "*";
            for (int j = 1; j <= (2 * i - 3); ++j) {
                cout << " ";
            }
            if (i > 1) {
                cout << "*";
            }
        }
        cout << endl;
    }
    return 0;
}


int printNumberPattern(int rows) {
     cout << "Decreasing Number Pattern:\n";
    for (int i = 1; i <= rows; ++i) {

        for (int j = rows; j > i; --j) {
            cout << "  ";
        }
        for (int j = i; j >= 1; --j) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}


int printLetterPatternA(int rows) {
    cout << "\nLetter Pattern A:\n";
    for (char i = 'A'; i < 'A' + rows; ++i) {
        for (char j = 'A'; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}


int printLetterPatternB(int rows) {
    cout << "\nLetter Pattern B:\n";
    for (char i = 'a'; i < 'a' + rows; ++i) {
        for (char j = 'a'; j <= 'e'; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

int main() {
    int choice, rows, cols;

    do {
        cout << "\nMenu:\n";
        cout << "1. Print Pattern A\n";
        cout << "2. Print Pattern B\n";
        cout << "3. Print Pattern C\n";
        cout << "4. Print Inverted Number Pattern\n";
        cout << "5. Print Hollow Rectangle\n";
        cout << "6. Print Inverted Half Pyramid\n";
        cout << "7. Print Hollow Inverted Half Pyramid\n";
        cout << "8. Print Full Pyramid\n";
        cout << "9. Print Inverted Full Pyramid\n";
        cout << "10. Print Hollow Full Pyramid\n";
        cout << "11. Print Number Pattern\n";
        cout << "12. Print Letter Pattern A\n";
        cout << "13. Print Letter Pattern B\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the number of rows for Pattern A: ";
                cin >> rows;
                printPatternA(rows);
                break;
            case 2:
                printPatternB();
                break;
            case 3:
                cout << "Enter the number of rows for Pattern C: ";
                cin >> rows;
                printPatternC(rows);
                break;
            case 4:
                cout << "Enter the number of rows for Inverted Number Pattern: ";
                cin >> rows;
                printInvertedNumberPattern(rows);
                break;
            case 5:
                cout << "Enter dimensions for Hollow Rectangle (rows cols): ";
                cin >> rows >> cols;
                hollowRectangle(rows, cols);
                break;
            case 6:
                cout << "Enter height for Inverted Half Pyramid: ";
                cin >> rows;
                invertedHalfPyramid(rows);
                break;
            case 7:
                cout << "Enter height for Hollow Inverted Half Pyramid: ";
                cin >> rows;
                hollowInvertedHalfPyramid(rows);
                break;
            case 8:
                cout << "Enter height for Full Pyramid: ";
                cin >> rows;
                fullPyramid(rows);
                break;
            case 9:
                cout << "Enter height for Inverted Full Pyramid: ";
                cin >> rows;
                invertedFullPyramid(rows);
                break;
            case 10:
                cout << "Enter height for Hollow Full Pyramid: ";
                cin >> rows;
                hollowFullPyramid(rows);
                break;
            case 11:
                cout << "Enter the number of rows for Number Pattern: ";
                cin >> rows;
                printNumberPattern(rows);
                break;
            case 12:
                cout << "Enter the number of rows for Letter Pattern A: ";
                cin >> rows;
                printLetterPatternA(rows);
                break;
            case 13:
                cout << "Enter the number of rows for Letter Pattern B (5 rows): ";
                cin >> rows;
                printLetterPatternB(5);
                break;
            case 0:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
