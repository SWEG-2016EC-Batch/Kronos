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

