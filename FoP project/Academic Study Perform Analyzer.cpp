#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    // Define constants for the maximum number of students and number of days in the week
    const int max_students = 100;  
    const int days = 7;  

    // Arrays to store student information and their study hours
    string student_names[max_students];  
    string student_ids[max_students];  
    int study_hours[max_students][days] = {0};  
    int total_study_hours[max_students] = {0};  
    double daily_averages[days] = {0.0};  
    int num_students = 0;  

    // Input: Number of students
    cout << "Enter the number of students (max " << max_students << "): ";
    cin >> num_students;

    if (num_students < 1 || num_students > max_students) {
        cout << "Invalid number of students." << endl;
        return 1;
    }

    // Collect student data
    for (int i = 0; i < num_students; i++) {
        // Student name
        while (true) {
            cout << "Enter name of student " << (i + 1) << ": ";
            cin >> student_names[i];
            bool valid_name = all_of(student_names[i].begin(), student_names[i].end(), ::isalpha);
            if (valid_name) break;
            cout << "Invalid name. Please use alphabetic characters only." << endl;
        }

        // Student ID
        while (true) {
            cout << "Enter 4-digit ID: ";
            cin >> student_ids[i];
            if (student_ids[i].length() == 4 && all_of(student_ids[i].begin(), student_ids[i].end(), ::isdigit)) {
                // Check for uniqueness
                bool unique = true;
                for (int j = 0; j < i; j++) {
                    if (student_ids[j] == student_ids[i]) {
                        unique = false;
                        break;
                    }
                }
                if (unique) break;
                else cout << "ID already exists. Please enter a unique 4-digit ID." << endl;
            }
            cout << "Invalid ID. Please enter a 4-digit number." << endl;
        }

        // Study hours
        cout << "Enter daily study hours for " << student_names[i] << " (7 days): ";
        for (int j = 0; j < days; j++) {
            while (true) {
                cout << "Day " << (j + 1) << ": ";
                cin >> study_hours[i][j];
                if (study_hours[i][j] >= 0) {
                    total_study_hours[i] += study_hours[i][j];
                    daily_averages[j] += study_hours[i][j];
                    break;
                } else {
                    cout << "Please enter a non-negative number." << endl;
                }
            }
        }
    }

    // Calculate daily averages
    for (int j = 0; j < days; j++) {
        daily_averages[j] /= num_students;
    }

    // Main menu
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
            // Add student
            if (num_students >= max_students) {
                cout << "Maximum number of students reached!" << endl;
                continue;
            }

            // Add details
            cout << "\n--- Adding Student " << (num_students + 1) << " ---\n";
            while (true) {
                cout << "Enter name: ";
                cin >> student_names[num_students];


                if (all_of(student_names[num_students].begin(), student_names[num_students].end(), ::isalpha)) break;
                cout << "Invalid name. Please use alphabetic characters only." << endl;
            }while (true) {
                cout << "Enter 4-digit ID: ";
                cin >> student_ids[num_students];
                if (student_ids[num_students].length() == 4 && all_of(student_ids[num_students].begin(), student_ids[num_students].end(), ::isdigit)) {
                    // Check for uniqueness
                    bool unique = true;
                    for (int j = 0; j < num_students; j++) {
                        if (student_ids[j] == student_ids[num_students]) {
                            unique = false;
                            break;
                        }
                    }
                    if (unique) break;
                    else cout << "ID already exists. Please enter a unique 4-digit ID." << endl;
                }
                cout << "Invalid ID. Please enter a 4-digit number." << endl;
            }

            cout << "Enter daily study hours (7 days): ";
            for (int j = 0; j < days; j++) {
                while (true) {
                    cout << "Day " << (j + 1) << ": ";
                    cin >> study_hours[num_students][j];
                    if (study_hours[num_students][j] >= 0) {
                        total_study_hours[num_students] += study_hours[num_students][j];
                        daily_averages[j] += study_hours[num_students][j];
                        break;
                    } else {
                        cout << "Please enter a non-negative number." << endl;
                    }
                }
            }
            num_students++;
        } 
        else if (choice == 2) {
            // Delete student
            string id_to_delete;
            cout << "Enter the ID of the student to delete: ";
            cin >> id_to_delete;

            int index_to_delete = -1;
            for (int i = 0; i < num_students; i++) {
                if (student_ids[i] == id_to_delete) {
                    index_to_delete = i;
                    break;
                }
            }

            if (index_to_delete != -1) {
                // Shift students up to fill the gap
                for (int i = index_to_delete; i < num_students - 1; i++) {
                    student_names[i] = student_names[i + 1];
                    student_ids[i] = student_ids[i + 1];
                    total_study_hours[i] = total_study_hours[i + 1];
                    for (int j = 0; j < days; j++) {
                        study_hours[i][j] = study_hours[i + 1][j];
                    }
                }
                num_students--;
                cout << "Student with ID " << id_to_delete << " has been deleted." << endl;
            } else {
                cout << "No student found with ID " << id_to_delete << "." << endl;
            }
        } 
        else if (choice == 3) {
            // Edit student
            string id_to_edit;
            cout << "Enter the ID of the student to edit: ";
            cin >> id_to_edit;

            int index_to_edit = -1;
            for (int i = 0; i < num_students; i++) {
                if (student_ids[i] == id_to_edit) {
                    index_to_edit = i;
                    break;
                }
            }

            if (index_to_edit != -1) {
                // Edit details
                while (true) {
                    cout << "Enter new name: ";
                    cin >> student_names[index_to_edit];
                    if (all_of(student_names[index_to_edit].begin(), student_names[index_to_edit].end(), ::isalpha)) break;
                    cout << "Invalid name. Please use alphabetic characters only." << endl;
                }

                while (true) {
                    string new_id;
                    cout << "Enter new 4-digit ID: ";
                    cin >> new_id;if (new_id.length() == 4 && all_of(new_id.begin(), new_id.end(), ::isdigit)) {
                        bool unique = true;
                        for (int j = 0; j < num_students; j++) {
                            if (student_ids[j] == new_id && j != index_to_edit) {
                                unique = false;
                                break;
                            }
                        }
                        if (unique) {
                            student_ids[index_to_edit] = new_id;
                            break;
                        } else {
                            cout << "ID already exists. Please enter a unique 4-digit ID." << endl;
                        }
                    
                }

                // Update study hours
                for (int j = 0; j < days; j++) {
                    while (true) {
                        cout << "Day " << (j + 1) << ": ";
                        cin >> study_hours[index_to_edit][j];
                        if (study_hours[index_to_edit][j] >= 0) {
                            total_study_hours[index_to_edit] += study_hours[index_to_edit][j];
                            daily_averages[j] += study_hours[index_to_edit][j];
                            break;
                        } else {
                            cout << "Please enter a non-negative number." << endl;
                        }
                    }
                }
                
                cout << "Student with ID " << id_to_edit << " has been updated." << endl;

            } }else {
                cout << "No student found with ID " << id_to_edit << "." << endl;
            }
        } 
        else if (choice == 4) {
            // Search student
            string id_to_search;
            cout << "Enter the ID of the student to search: ";
            cin >> id_to_search;

            int index_to_search = -1;
            for (int i = 0; i < num_students; i++) {
                if (student_ids[i] == id_to_search) {
                    index_to_search = i;
                    break;
                }
            }

            if (index_to_search != -1) {
                // Print student's details
                cout << "\nStudent Found:\n";
                cout << "Name: " << student_names[index_to_search] << "\n";
                cout << "ID: " << student_ids[index_to_search] << "\n";
                cout << "Total Study Hours: " << total_study_hours[index_to_search] << "\n";
                for (int j = 0; j < days; j++) {
                    cout << "Day " << (j + 1) << ": " << study_hours[index_to_search][j] << "\n";
                }
            } else {
                cout << "No student found with ID " << id_to_search << "." << endl;
            }
        } 
        else if (choice == 5) {
            // Print all records
            cout << "\n---- Student Records ----\n";
            for (int i = 0; i < num_students; i++) {
                cout << "\nStudent Name: " << student_names[i]
                     << "\nStudent ID: " << student_ids[i]
                     << "\nTotal Study Hours: " << total_study_hours[i]
                     << "\nDaily Study Hours: ";
                
                for (int j = 0; j < days; j++) {
                    cout << study_hours[i][j] << " ";
                }
                
                cout << "\n";
            }
        } 
        else if (choice == 6) {
            // Sort records by total study hours
            for (int i = 0; i < num_students - 1; i++) {
                for (int j = i + 1; j < num_students; j++) {
                    if (total_study_hours[i] > total_study_hours[j]) {
                        swap(student_names[i], student_names[j]);
                        swap(student_ids[i], student_ids[j]);
                        swap(total_study_hours[i], total_study_hours[j]);for (int k = 0; k < days; k++) {
                            swap(study_hours[i][k], study_hours[j][k]);
                        }
                    }
                }
            }
            cout << "Records sorted by total study hours." << endl;
        } 
        else if (choice == 7) {
            // Exit program
            break;
        } 
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
