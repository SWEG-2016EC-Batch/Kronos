<div align="center">
<h1> Grade Calculator </h1>
<div align ="left">
  
  <h2>Problem Analysis</h2>
    
  <h3>Input:</h3>
    <pre>
Number of people to calculate scores for.
For each person:
- Test score (0-15)
- Quiz score (0-5)
- Assignment score (0-10)
- Project score (0-20)
- Final exam score (0-50)
    </pre>
    
   <h3>Output:</h3>
    <pre>
Total mark out of 100 for each person.
Corresponding grade based on the total mark.
    </pre>

  <h3>Operations:</h3>
    <pre>
1. Prompt the user to enter the number of people.
2. For each person:
   - Gather scores for the test, quiz, assignment, project, and final exam.
   - Calculate the total mark:
     - If any score is 0 (for test, quiz, assignment, project, final exam), compute the total.
   - Determine the grade based on the total mark using defined thresholds.
   - Display the total mark and grade.
    </pre>
</body>
</html>
<h2>Flow chart</h2>

```mermaid
graph TD;
    A([Start]) --> B[Print "Enter number of people"]
    B --> C[Input number_of_people]
    C --> D[For i = 1 to number_of_people]
    D --> E[Print "Person i:"]
    E --> F[Print "Enter test score"]
    F --> G[Input test]
    G --> H[Print "Enter quiz score"]
    H --> I[Input quiz]
    I --> J[Print "Enter assignment score"]
    J --> K[Input assignment]
    K --> L[Print "Enter project score"]
    L --> M[Input project]
    M --> N[Print "Enter final exam score"]
    N --> O[Input final_exam]
    O --> P{Any score is 0?}
    P -- Yes --> Q[Calculate mark = test + quiz + assignment + project + final_exam]
    Q --> R[Print "Your mark from out of 100 is mark"]
    R --> S{mark >= 90?}
    S -- Yes --> T[Print "Grade: A+"]
    S -- No --> U{mark >= 80?}
    U -- Yes --> V[Print "Grade: A"]
    U -- No --> W{mark >= 75?}
    W -- Yes --> X[Print "Grade: B+"]
    W -- No --> Y{mark >= 60?}
    Y -- Yes --> Z[Print "Grade: B"]
    Y -- No --> AA{mark >= 55?}
    AA -- Yes --> AB[Print "Grade: C+"]
    AA -- No --> AC{mark >= 45?}
    AC -- Yes --> AD[Print "Grade: C"]
    AC -- No --> AE{mark >= 30?}
    AE -- Yes --> AF[Print "Grade: D"]
    AE -- No --> AG[Print "Grade: F"]
    P -- No --> AH[End loop]
    AG --> AH
    AF --> AH
    AD --> AH
    AB --> AH
    Z --> AH
    X --> AH
    V --> AH
    T --> AH
    AH --> AI([End])
  ```  
