#include <iostream>

using namespace std;

int main() {
    int transmissionRate = 960;
    int bytesPerCharacter = 1; // 1 character = 8 bit = 1 byte

    long int fileSize;

    cout << "Enter the file size in bytes: ";
    cin >> fileSize;

    long int totalCharacters = fileSize / bytesPerCharacter;

    long int transmissionTime =(totalCharacters) / transmissionRate;

    long int hours =(transmissionTime) / 3600;
    long int minutes = (transmissionTime % 3600) / 60;
    long int seconds = (transmissionTime) % 60;

    cout << "Time to send the file: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;

    return 0;
}

