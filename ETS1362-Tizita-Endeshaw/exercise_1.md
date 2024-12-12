**Algorithm: Calculate Net Salary**

**Input:**
* Basic salary
* Worked hours
* Bonus rate

**Output:**
* Net salary

**Steps:**

1. **Read Input:**
   - Read basic salary, worked hours, and bonus rate from the user.

2. **Calculate Bonus:**
   - If worked hours > 40:
     - Read overtime bonus rate
     - Calculate bonus = (worked hours - 40) * overtime bonus rate
   - Else:
     - Bonus = 0

3. **Calculate Gross Salary:**
   - Gross salary = basic salary + bonus

4. **Calculate Pension:**
   - Pension = basic salary * 0.07

5. **Calculate Tax:**
   - If gross salary <= 200:
     - Tax = 0
   - Else if gross salary <= 600:
     - Tax = gross salary * 0.1
   - Else if gross salary <= 1200:
     - Tax = gross salary * 0.15
   - Else if gross salary <= 2000:
     - Tax = gross salary * 0.2
   - Else if gross salary <= 3500:
     - Tax = gross salary * 0.25
   - Else:
     - Tax = gross salary * 0.3

6. **Calculate Net Salary:**
   - Net salary = gross salary - pension - tax

7. **Display Output:**
   - Print the net salary to the console.


  flowchart LR
    A[Start] --> B{Read Input}
    B --> C{Calculate Bonus}
    C --> D{Calculate Gross Salary}
    D --> E{Calculate Pension}
    E --> F{Calculate Tax}
    F --> G{Calculate Net Salary}
    G --> H{Display Output}
    H --> I[End]

     

