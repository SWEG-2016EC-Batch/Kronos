Algorithm

1.Input:
-name of the user

-Basic Salary: The fixed income.

-Weekly Work Hours: Regular working hours 
-Bonus Rate: our bonus

2.Process:

Bonus Calculation:

-Bonus = working_Hours × Bonus_Rate

Gross Salary:

Gross Salary = Base_Salary + Bonus

Tax Deduction:

Tax=((base_salary-pension)+(bonus))*0.15;

Pension Deduction:

Pension=Base_Salary×0.05

Net Salary:

Net Salary=net_salary=((basesalary-pension
)+ (bonus))-tax;

3.Output:
print the net salary after all deduction
## Algorithm Design 

Step 1: Start

Step 2: Initialize Variables

      2.1. Declare variables name, base_salary, working hours, bonus_rate, bonus, gross_salary, tax, pension, and net_salary.
      2.2. Set bonus = 0 initially.

Step 3: Input Data

      3.1. Prompt the user to enter their name.
      3.2. Store the input value in name.
      3.3. Prompt the user to enter their basic_salary.
      3.4. Store the input value in basic_salary.
      3.5. Prompt the user to enter their weekly work hours.
      3.6. Store the input value in weekly_work_hours.
    

Step 4: Calculate Bonus
      
     
      4.1. Calculate the bonus:
      - bonus = extra_hours * bonus_rate.

Step 5: Calculate Gross Salary

      5.1. Calculate the gross salary:
      - gross_salary = basic_salary + bonus.

Step 6: Calculate Deductions

      6.1. Calculate the tax deduction:
      - tax = ((base_salary-pension)+(bonus))*0.15;
      6.2. Calculate the pension deduction:
      - pension = base_salary * 0.05 (5% pension).

Step 7: Calculate Net Salary

      7.1. Calculate the net salary:
      - net_salary = ((basesalary-pension)+ (bonus))-tax;



Step 8: Output Results

      8.1. Display the results:
      - "Your name is name".
       - "Bonus: bonus".
      - "Gross Salary: gross_salary".
      - "Tax Deduction: tax".
      - "Pension Deduction: pension".
      - "Net Salary: net_salary".
Step 9: End

# NET SALARY calculation and evaluation flowchart
```mermaid
flowchart TD
A([Start])--> B[/Input: Enter your name/]
    B --> C[/Input: Base Salary/]
    C --> D[/Input: Weekly Working Hours/]
    D --> E[/Input: Bonus Rate per Hour/]
    E --> F[Calculate: Bonus = Working Hours * Bonus Rate]
    F --> G[Calculate: Gross Salary = Base Salary + Bonus]
    G --> H[Calculate: Pension = Base Salary * 0.05]
    H --> I[Calculate: Tax = Base Salary - Pension + Bonus * 0.15]
    I --> J[Calculate: Net Salary = Base Salary - Pension + Bonus - Tax]
    J --> K[/Output: net salary/]
    K --> L([End])
