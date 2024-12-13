**Algorithm: Calculate Net Salary Based on Worked Hours and Bonus**

**Input:**
- `basic_salary`: The basic salary of the employee.
- `worked_hours`: The total hours worked by the employee.
- `bonus_rate`: The overtime bonus rate per hour (if applicable).
  
**Output:**
- The net salary after calculating the bonus, tax, pension, and deductions.

**Steps:**

1. **Read Input:**
   - Display the message: `"Enter your basic salary:"`.
   - Read the integer `basic_salary` from the user.
   - Display the message: `"Enter your worked hours:"`.
   - Read the integer `worked_hours` from the user.

2. **Calculate Bonus (If Applicable):**
   - If `worked_hours > 40`:
     - Display the message: `"Enter your overtime bonus rate/hour:"`.
     - Read the integer `bonus_rate` from the user.
     - Calculate the `extra_hour` as `worked_hours - 40`.
     - Calculate the `bonus` as `extra_hour * bonus_rate`.
     - Calculate the `gross_salary` as `basic_salary + bonus`.

3. **Determine Tax Rate Based on Gross Salary:**
   - If `gross_salary <= 200`, set `tax_rate = 0`.
   - Else if `gross_salary <= 600`, set `tax_rate = 0.1`.
   - Else if `gross_salary <= 1200`, set `tax_rate = 0.15`.
   - Else if `gross_salary <= 2000`, set `tax_rate = 0.20`.
   - Else if `gross_salary <= 3500`, set `tax_rate = 0.25`.
   - Else, set `tax_rate = 0.30`.

4. **Calculate Deductions:**
   - Calculate the `tax` as `gross_salary * tax_rate`.
   - Calculate the `pension` as `basic_salary * 0.07` (note that pension is calculated from the basic salary, so I corrected this from `0.7` to `0.07`).
   - Calculate the `net_salary` as `gross_salary - tax - pension`.

5. **Display Output:**
   - Print: `"Your net salary is: net_salary"`.

6. **End Program:**
   - The program terminates after displaying the net salary.
