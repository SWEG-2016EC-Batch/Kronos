**Algorithm: Calculate Student Grades Based on Scores**

**Input:**
- `number_of_people`: The number of people (students) whose grades need to be calculated.
- For each student:
  - `test`: The score for the test (0-15).
  - `quiz`: The score for the quiz (0-5).
  - `assignment`: The score for the assignment (0-10).
  - `project`: The score for the project (0-20).
  - `final_exam`: The score for the final exam (0-50).

**Output:**
- The total score and grade for each student.

**Steps:**

1. **Read Input:**
   - Display the message: `"Enter the number of person you want to calculate"`.
   - Read `number_of_people` from the user.

2. **Loop Through Each Student:**
   - For `i` from `1` to `number_of_people` (process each student):
     - Initialize `test`, `quiz`, `assignment`, `project`, and `final_exam` for each student.
     - Display: `"Person i:"`.
     - Prompt and read `test`, `quiz`, `assignment`, `project`, and `final_exam` scores for the student.

3. **Check Validity of Scores:**
   - If the score for any of the categories is out of range or invalid, skip the calculation and move to the next person.

4. **Calculate Total Marks:**
   - Calculate the total `mark` as the sum of the `test`, `quiz`, `assignment`, `project`, and `final_exam` scores.

5. **Display Total Marks:**
   - Print: `"Your mark from out of 100 is mark"`.

6. **Determine Grade:**
   - If `mark >= 90`:
     - Display: `"Grade: A+"`.
   - Else if `mark >= 80`:
     - Display: `"Grade: A"`.
   - Else if `mark >= 75`:
     - Display: `"Grade: B+"`.
   - Else if `mark >= 60`:
     - Display: `"Grade: B"`.
   - Else if `mark >= 55`:
     - Display: `"Grade: C+"`.
   - Else if `mark >= 45`:
     - Display: `"Grade: C"`.
   - Else if `mark >= 30`:
     - Display: `"Grade: D"`.
   - Else:
     - Display: `"Grade: F"`.

7. **Repeat for Each Person:**
   - Continue the loop until all students have been processed.

8. **End Program:**
   - The program terminates after displaying grades for all students.
