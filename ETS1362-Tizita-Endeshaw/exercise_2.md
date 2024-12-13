## Pseudocode: Grade Calculation

**Input:**
* `test_mark`: Test score (out of 15)
* `quiz_mark`: Quiz score (out of 5)
* `project_mark`: Project score (out of 20)
* `assignment_mark`: Assignment score (out of 10)
* `final_exam_mark`: Final exam score (out of 50)

**Process:**
1. **Calculate total mark:**
   * `total_mark = (test_mark * 0.15) + (quiz_mark * 0.05) + (project_mark * 0.20) + (assignment_mark * 0.10) + (final_exam_mark * 0.50)`

2. **Determine letter grade:**
   * **If** `total_mark >= 90`:
     * `letter_grade = 'A+'`
   * **Else if** `total_mark >= 80`:
     * `letter_grade = 'A'`
   * **Else if** `total_mark >= 75`:
     * `letter_grade = 'B+'`
   * **Else if** `total_mark >= 60`:
     * `letter_grade = 'B'`
   * **Else if** `total_mark >= 55`:
     * `letter_grade = 'C+'`
   * **Else if** `total_mark >= 45`:
     * `letter_grade = 'C'`
   * **Else if** `total_mark >= 30`:
     * `letter_grade = 'D'`
   * **Else**:
     * `letter_grade = 'F'`

**Output:**
* `total_mark`
* `letter_grade`
