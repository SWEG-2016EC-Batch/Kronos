Algorithm
1. Input:

   - Basic Salary: The fixed income.

   - Weekly Work Hours: Regular working hours (not directly used for the calculation in this case).

   - Extra Hours Worked: The overtime hours worked during the week.

   - Overtime Bonus Rate: The extra pay per hour of overtime.
2. Process:

 - Bonus Calculation:

      Bonus = Extra Hours × Bonus Rate

  - Gross Salary:

       Gross Salary = Basic Salary + Bonus

  - Tax Deduction:

      Tax=Gross Salary×0.15

  - Pension Deduction:

      Pension=Basic Salary×0.05

  - Net Salary:

     Net Salary=Gross Salary−(Tax+Pension)
    
3. Output:

  - print the net salary after all deductions.


## Algorithm Design 

Step 1: Start

Step 2: Initialize Variables

      2.1. Declare variables name, basic_salary, weekly_work_hours, bonus_rate, extra_hours, bonus, gross_salary, tax, pension, and net_salary.
      2.2. Set bonus = 0 initially.

Step 3: Input Data

      3.1. Prompt the user to enter their name.
      3.2. Store the input value in name.
      3.3. Prompt the user to enter their basic salary.
      3.4. Store the input value in basic_salary.
      3.5. Prompt the user to enter their weekly work hours.
      3.6. Store the input value in weekly_work_hours.
      3.7. Prompt the user to enter their extra hours worked.
      3.8. Store the input value in extra_hours.

Step 4: Calculate Bonus
      
      4.1. If extra_hours > 0, prompt the user to enter their overtime bonus rate per hour.
      4.2. Store the input value in bonus_rate.
      4.3. Calculate the bonus:
      - bonus = extra_hours * bonus_rate.

Step 5: Calculate Gross Salary

      5.1. Calculate the gross salary:
      - gross_salary = basic_salary + bonus.

Step 6: Calculate Deductions

      6.1. Calculate the tax deduction:
      - tax = gross_salary * 0.15 (15% tax).
      6.2. Calculate the pension deduction:
      - pension = basic_salary * 0.05 (5% pension).

Step 7: Calculate Net Salary

      7.1. Calculate the net salary:
      - net_salary = gross_salary - tax - pension.

Step 8: Output Results

      8.1. Display the results:
      - "Your name is name".
      - "Basic Salary: basic_salary".
      - "Bonus: bonus".
      - "Gross Salary: gross_salary".
      - "Tax Deduction: tax".
      - "Pension Deduction: pension".
      - "Net Salary: net_salary".

Step 9: End

# Flowchart 

```mermaid
flowchart TD
    A([Start]) --> B[/Enter your name/]
    B --> C[/Enter your basic salary/]
    C --> D[/Enter your weekly work hours/]
    D --> E[/Enter the weekly extra hours you work/]
    E --> F{Extra hours > 0?}
    F -- Yes --> G[/Enter your over-time bonus rate per hour/]
    G --> H[Calculate bonus = extra hours * bonus rate]
    F -- No --> I[Bonus = 0]
    H --> J[Calculate gross salary = basic salary + bonus]
    I --> J
    J --> K[Calculate tax = gross salary * 0.15]
    K --> L[Calculate pension = basic salary * 0.05]
    L --> M[Calculate net salary = gross salary - tax - pension]
    M --> N[/Display Results/]
    N --> O([End])
