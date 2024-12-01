Algorithm

1.Input:
-name of the user

-Basic Salary: The fixed income.

-Weekly Work Hours: Regular working hours 
-Bonus Rate: our bonus

2.Process:

Bonus Calculation:

-Bonus = Extra Hours × Bonus Rate

Gross Salary:

Gross Salary = Basic Salary + Bonus

Tax Deduction:

Tax=((base_salary-pension)+(bonus))*0.15;

Pension Deduction:

Pension=Basic Salary×0.05

Net Salary:

Net Salary=net_salary=((basesalary-pension
)+ (bonus))-tax;

3.Output:
print the net salary after all deduction
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
