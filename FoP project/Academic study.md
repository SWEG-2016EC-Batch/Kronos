# Problem Analysis

## Input:
- **Student name:** Alphabetic characters only.
- **Student ID:** 4-digit numeric input.
- **Daily study hours:** Non-negative integers for seven days.

## Output:
- Display all student records, including daily and total study hours.
- Average study hours per day across all students.
- Search results for specific students.

## Operations:
- Input validation for names, IDs, and hours.
- Calculate the total and average study hours.
- CRUD operations (Create, Read, Update, Delete).
- Sorting of records based on name or ID.

  # Pseudocode

BEGIN

    SET max_students = 100  
    SET days = 7  
    DECLARE student_names[max_students], student_ids[max_students]  
    DECLARE study_hours[max_students][days], total_study_hours[max_students], daily_averages[days]  
    SET num_students = 0  

    
    PRINT "Enter number of students: "  
    INPUT num_students  
    IF num_students < 1 OR num_students > max_students THEN RETURN  

     
    FOR i FROM 0 TO num_students - 1 DO  
        REPEAT  
            PRINT "Enter name: "  
            INPUT student_names[i]  
        UNTIL all characters in student_names[i] are alphabetic  

        REPEAT  
            PRINT "Enter 4-digit ID: "  
            INPUT student_ids[i]  
        UNTIL valid 4-digit ID  

        PRINT "Enter study hours for 7 days: "  
        FOR j FROM 0 TO days - 1 DO  
            REPEAT  
                PRINT "Day " + (j + 1) + ": "  
                INPUT study_hours[i][j]  
            UNTIL study_hours[i][j] >= 0  
            total_study_hours[i] += study_hours[i][j]  
            daily_averages[j] += study_hours[i][j]  
        END FOR  
    END FOR  

    
    FOR j FROM 0 TO days - 1 DO  
        daily_averages[j] /= num_students  
    END FOR  

    // Main menu  
    WHILE TRUE DO  
        PRINT menu options  
        INPUT choice  

        IF choice = 1 THEN  
             
            IF num_students >= max_students THEN PRINT "Limit reached." CONTINUE  
            // Repeat input steps for new student  
            num_students += 1  

        ELSE IF choice = 2 THEN  
            
            INPUT "Enter ID to delete: "  
            // Search and remove student  

        ELSE IF choice = 3 THEN  
              
            INPUT "Enter ID to edit: "  
            // Update student details  

        ELSE IF choice = 4 THEN  
           
            INPUT "Enter name or ID: "  
            // Display student details  

        ELSE IF choice = 5 THEN   
            PRINT all student records  

        ELSE IF choice = 6 THEN  
            // Sort records  
            INPUT sort preference  

        ELSE IF choice = 7 THEN  
            BREAK  

        ELSE  
            PRINT "Invalid choice."  
        END IF  
    END WHILE  

END

 # Flowchart
```mermaid
 

flowchart TD
    A((Start)) --> B[/Input number of students/]
    B -->|Valid| C[Collect student data]
    B -->|Invalid| AE((End))  
    C --> D[/Input student name/]
    D -->|Valid| E[/Input student ID/]
    E -->|Valid| F[/Input daily study hours/]
    F --> G[Calculate total study hours]
    G --> H[Calculate daily averages]
    H --> I[Display menu]
    
    I --> J[Add Student]
    I --> K[Delete Student]
    I --> L[Edit Student]
    I --> M[Search Student]
    I --> N[Print all records]
    I --> O[Sort records]
    I --> P[/Exit/]

    J --> C
    K --> Q[/Enter ID to delete/]
    Q --> R{Is ID found?}
    R -->|Yes| S[/Delete student/]
    S --> I
    R -->|No| T[/Student not found/]
    T --> Q  

    L --> U[/Enter ID to edit/]
    U --> V{Is ID found?}
    V -->|Yes| W[/Edit student details/]
    W --> I
    V -->|No| X[/Student not found/]
    X --> U  

    M --> Y[/Search for student/]
    Y --> Z{Is ID found?}
    Z -->|Yes| AA[/Display student details/]
    Z -->|No| AB[/Student not found/]
    AB --> Y  

    N --> AC[/Display all records/]
    AC --> I

    O --> AD[/Sort by Name or ID/]
    AD --> I

    P --> AE((End))  
