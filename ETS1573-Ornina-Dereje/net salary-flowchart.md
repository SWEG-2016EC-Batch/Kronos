# NET SALARY calculation and evaluation flowchart
```mermaid
flowchart TD
A([Start])--> B[/Input: Enter your name/]
    B --> C[Display: Dear Mr/s {name}]
    C --> D[/Input: Base Salary/]
    D --> E[/Input: Weekly Working Hours/]
    E --> F[/Input: Bonus Rate per Hour/]
    F --> G[Calculate: Bonus = Working Hours * Bonus Rate]
    G --> H[Calculate: Gross Salary = Base Salary + Bonus]
    H --> I[Calculate: Pension = Base Salary * 0.05]
    I --> J[Calculate: Tax = Base Salary - Pension + Bonus * 0.15]
    J --> K[Calculate: Net Salary = Base Salary - Pension + Bonus - Tax]
    K --> L[/Output: Your Net Salary = {net_salary}/]
    L --> M([End])
