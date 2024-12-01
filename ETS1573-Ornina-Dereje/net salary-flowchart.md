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
