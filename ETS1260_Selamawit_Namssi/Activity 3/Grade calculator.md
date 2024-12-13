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
graph TD
        A([Start]) --> B[Enter the number of people to calculate]
B --> C[/Read the number of people/]
C --> D[Initialize counter for people]
D --> E[Enter test score from 0-15]
E --> F[/Read test score/]
F --> G[Enter quiz score from 0-5]
G --> H[/Read quiz score/]
H --> I[Enter assignment score from 0-10]
I --> J[/Read assignment score/]
J --> K[Enter project score from 0-20]
K --> L[/Read project score/]
L --> M[Enter final exam score from 0-50]
M --> N[/Read final exam score/]
N --> O[Check if all scores are within valid range]
O -- Yes --> P[Calculate total mark]
P --> Q[Check if mark is greater than or equal to 90]
Q -- Yes --> R[Grade A+]
Q -- No --> S[Check if mark is greater than or equal to 80]
S -- Yes --> T[Grade A]
S -- No --> U[Check if mark is greater than or equal to 75]
U -- Yes --> V[Grade B+]
U -- No --> W[Check if mark is greater than or equal to 60]
W -- Yes --> X[Grade B]
W -- No --> Y[Check if mark is greater than or equal to 55]
Y -- Yes --> Z[Grade C+]
Y -- No --> AA[Check if mark is greater than or equal to 45]
AA -- Yes --> AB[Grade C]
AA -- No --> AC[Check if mark is greater than or equal to 30]
AC -- Yes --> AD[Grade D]
AC -- No --> AE[Grade F]
R --> AF[/Print grade/]
T --> AF
V --> AF
X --> AF
Z --> AF
AB --> AF
AD --> AF
AE --> AF
AF --> AG[Increment counter]
AG --> AH[Check if counter is less than or equal to the number of people]
AH -- Yes --> E
AH -- No --> AI[/Print all grades and summary/]
AI --> AJ([End])
O -- No --> AK[/Print error/]
AK --> AG
```
```
