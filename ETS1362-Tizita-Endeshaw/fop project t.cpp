#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    const int max_students = 100;
    const int days = 7;

    string student_names[max_students];
    string student_ids[max_students];
    int study_hours[max_students][days] = {0};
    int total_study_hours[max_students] = {0};
    double daily_averages[days] = {0.0};
    int num_students = 0;

    // Welcome Message
    cout << "  📕📖📓📔📘Welcome to the Study Tracker📚📙📗📒🔖📑";
    cout << "==============================================\n";
    cout << "✍🏽Track and manage students' daily study hours!✍🏽";
    cout << "----------------------------------------------\n\n";

    cout << "Enter the number of students (max " << max_students << "): ";
    cin >> num_students;
    cin.ignore(); // Clear input buffer before reading full names.

    if (num_students < 1 || num_students > max_students) {
        cout << "Invalid number of students." << endl;
        return 1;
    }

    for (int i = 0; i < num_students; i++) {
        while (true) {
            cout << "Enter full name of student " << (i + 1) << ": ";
            getline(cin, student_names[i]); // Read the full name, including spaces.

            // Validate that the name contains only alphabetic characters and spaces.
            bool valid_name = all_of(student_names[i].begin(), student_names[i].end(), [](char c) {
                return isalpha(c) || isspace(c);
            });

            if (valid_name && find(student_names, student_names + i, student_names[i]) == student_names + i) {
                break;
            }

            if (!valid_name) {
                cout << "Invalid name. Please use alphabetic characters and spaces only." << endl;
            } else {
                cout << "Duplicate name. Please enter a unique name." << endl;
            }
        }

        while (true) {
            cout << "Enter 4-digit ID: ";
            cin >> student_ids[i];
            if (student_ids[i].length() == 4 && all_of(student_ids[i].begin(), student_ids[i].end(), ::isdigit)) break;
            cout << "Invalid ID. Please enter a 4-digit number." << endl;
        }

        cout << "Enter daily study hours for " << student_names[i] << " (7 days): ";
        for (int j = 0; j < days; j++) {
            while (true) {
                cout << "Day " << (j + 1) << ": ";
                cin >> study_hours[i][j];
                if (study_hours[i][j] >= 0 && study_hours[i][j] <= 24) {
                    total_study_hours[i] += study_hours[i][j];
                    daily_averages[j] += study_hours[i][j];
                    break;
                } else {
                    cout << "Invalid input. Please enter a number between 0 and 24." << endl;
                }
            }
        }
        cin.ignore(); // Clear input buffer before the next iteration.
    }

    for (int j = 0; j < days; j++) {
        daily_averages[j] /= num_students;
    }

    int choice;
    while (true) {
        cout << "\n---- Menu ----\n";
        cout << "1. Add student\n";
        cout << "2. Delete student\n";
        cout << "3. Edit student\n";
        cout << "4. Search student\n";
        cout << "5. Print all records\n";
        cout << "6. Sort records\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (num_students >= max_students) {
                cout << "Maximum number of students reached!" << endl;
                continue;
            }

            cout << "\n--- Adding Student " << (num_students + 1) << " ---\n";
            cin.ignore();
            while (true) {
                cout << "Enter full name: ";
                getline(cin, student_names[num_students]);
                if (all_of(student_names[num_students].begin(), student_names[num_students].end(), [](char c) {
                        return isalpha(c) || isspace(c);
                    }) &&
                    find(student_names, student_names + num_students, student_names[num_students]) == student_names + num_students) {
                    break;
                }
                cout << "Invalid or duplicate name. Please enter a valid, unique name." << endl;
            }

            while (true) {
                cout << "Enter 4-digit ID: ";
                cin >> student_ids[num_students];
                if (student_ids[num_students].length() == 4 && all_of(student_ids[num_students].begin(), student_ids[num_students].end(), ::isdigit)) break;
                cout << "Invalid ID. Please enter a 4-digit number." << endl;
            }

            cout << "Enter daily study hours (7 days): ";
            for (int j = 0; j < days; j++) {
                while (true) {
                    cout << "Day " << (j + 1) << ": ";
                    cin >> study_hours[num_students][j];
                    if (study_hours[num_students][j] >= 0 && study_hours[num_students][j] <= 24) {
                        total_study_hours[num_students] += study_hours[num_students][j];
                        daily_averages[j] += study_hours[num_students][j];
                        break;
                    } else {
                        cout << "Invalid input. Please enter a number between 0 and 24." << endl;
                    }
                }
            }
            num_students++;
        } else if (choice == 2) {
            string search_id;
            cout << "Enter 4-digit ID of the student to delete: ";
            cin >> search_id;
            bool found = false;
            for (int i = 0; i < num_students; i++) {
                if (student_ids[i] == search_id) {
                    for (int j = i; j < num_students - 1; j++) {
                        student_names[j] = student_names[j + 1];
                        student_ids[j] = student_ids[j + 1];
                        for (int k = 0; k < days; k++) {
                            study_hours[j][k] = study_hours[j + 1][k];
                        }
                        total_study_hours[j] = total_study_hours[j + 1];
                    }
                    num_students--;
                    cout << "Student deleted successfully.\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Student not found.\n";
            }
        } else if (choice == 3) {
            string search_id;
            cout << "Enter 4-digit ID of the student to edit: ";
            cin >> search_id;
            bool found = false;
            for (int i = 0; i < num_students; i++) {
                if (student_ids[i] == search_id) {
                    cin.ignore();
                    cout << "Editing " << student_names[i] << " (" << student_ids[i] << ").\n";
                    cout << "Enter new full name: ";
                    getline(cin, student_names[i]);
                    cout << "Enter new daily study hours (7 days):\n";
                    total_study_hours[i] = 0;
                    for (int j = 0; j < days; j++) {
                        while (true) {
                            cout << "Day " << (j + 1) << ": ";
                            cin >> study_hours[i][j];
                            if (study_hours[i][j] >= 0 && study_hours[i][j] <= 24) {
                                total_study_hours[i] += study_hours[i][j];
                                break;
                            } else {
                                cout << "Please enter a non-negative number within 24.\n";
                            }
                        }
                    }
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Student not found.\n";
        } else if (choice == 4) {
            string search_query;
            cout << "Enter student name or ID: ";
            cin.ignore();
            getline(cin, search_query);
            bool found = false;
            for (int i = 0; i < num_students; i++) {
                if (student_names[i] == search_query || student_ids[i] == search_query) {
                    cout << "Details for " << student_names[i] << " (" << student_ids[i] << "):\n";
                    for (int j = 0; j < days; j++) {
                        cout << "Day " << (j + 1) << ": " << study_hours[i][j] << " hours\n";
                    }
                    cout << "Total: " << total_study_hours[i] << " hours\n";
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Student not found.\n";
        } else if (choice == 5) {
            cout << left << setw(20) << "Name" << setw(10) << "ID";
            for (int j = 1; j <= days; j++) {
                cout << setw(10) << "Day " + to_string(j);
            }
            cout << setw(10) << "Total\n";
            for (int i = 0; i < num_students; i++) {
                cout << setw(20) << student_names[i] << setw(10) << student_ids[i];
                for (int j = 0; j < days; j++) {
                    cout << setw(10) << study_hours[i][j];
                }
                cout << setw(10) << total_study_hours[i] << "\n";
            }
        } else if (choice == 6) {
            cout << "Sort by:\n1. Name\n2. ID\n";
            int sort_choice;
            cin >> sort_choice;
            if (sort_choice == 1) {
                for (int i = 0; i < num_students - 1; i++) {
                    for (int j = i + 1; j < num_students; j++) {
                        if (student_names[i] > student_names[j]) {
                            swap(student_names[i], student_names[j]);
                            swap(student_ids[i], student_ids[j]);
                            swap(total_study_hours[i], total_study_hours[j]);
                            for (int k = 0; k < days; k++) {
                                swap(study_hours[i][k], study_hours[j][k]);
                            }
                        }
                    }
                }
            } else if (sort_choice == 2) {
                for (int i = 0; i < num_students - 1; i++) {
                    for (int j = i + 1; j < num_students; j++) {
                        if (student_ids[i] > student_ids[j]) {
                            swap(student_names[i], student_names[j]);
                            swap(student_ids[i], student_ids[j]);
                            swap(total_study_hours[i], total_study_hours[j]);
                            for (int k = 0; k < days; k++) {
                                swap(study_hours[i][k], study_hours[j][k]);
                            }
                        }
                    }
                }
            } else {
                cout << "Invalid choice.\n";
            }
        } else if (choice == 7) {
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }
    return 0;
}
