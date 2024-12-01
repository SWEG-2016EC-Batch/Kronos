# BMI Calculation and Evaluation Flowchart

```mermaid
flowchart TD
  A[Start] --> B[/Enter height in meters/]
  B --> C[/Enter weight in kilograms/]
  C --> D[Calculate BMI: weight / height * height]
  D --> E[/print BMI/]
  E --> F{BMI < 18.5?}
  
  F -- Yes --> G[Underweight]
  F -- No --> H{BMI >= 18.5 and BMI <= 24.5?}
  H -- Yes --> I[Normal weight]
  H -- No --> J{BMI >= 25 and BMI <= 29.5?}
  
  J -- Yes --> K[Overweight]
  J -- No --> L[INVALID]
  
  G --> M[/Continue?y ]
  I --> M
  K --> M
  L --> M
  
  M -- y --> B[End]
 
