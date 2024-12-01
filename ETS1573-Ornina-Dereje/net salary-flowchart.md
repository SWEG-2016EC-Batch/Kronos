# NET SALARY calculation and evaluation flowchart
```mermaid
flowchart TD
A[Start] --> B[Input: Enter your name]
    B --> C[Output: Dear Mr/s name]
    C --> D[Input: Enter your base_salary]
    D --> E[Input: Enter your weekly working hours]
    E --> F[Input: Enter your bonus_rate per hour]
    F --> G[Calculate: bonus = working_hours * bonus_rate]
    G --> H[Output: Your bonus = bonus]
    H --> I[Calculate: gross_salary = base_salary + bonus]
    I --> J[Output: Your gross_salary = gross_salary]
    J --> K[Calculate: pension = base_salary * 0.05]
    K --> L[Output: Pension = pension]
    L --> M[Calculate: tax = base_salary - pension + bonus * 0.15]
    M --> N[Output: Tax = tax]
    N --> O[Calculate: net_salary = base_salary - pension + bonus - tax]
    O --> P[Output: Your net salary = net_salary]
    P --> Q[End]
