### BMI Calculation Problem analasis

1. Input: 
 
        - Weight (in kilogram)
        - Height (in meter)

3. Process:
    - Calculate BMI using the formula: 
       BMI = Weight/(Height^2)
      

 4. Output:
    - print the BMI value
    - Determine the BMI category:
      - Underweight: BMI < 18.5
      - Normal weight: 18.5 <= BMI <=24.9
      - Overweight: 25 <= BMI <=29.5
     
        

## algorithm design
   ### pseudocode

 Step 1: Start
 
 Step 2: Initialize:
    2.1. Declare a variable user to store the user's choice (default: empty or 'y').
 
 Step 3: Repeat Until user ≠ 'y':
   
    3.1. Input Data
     
    3.1.1. Prompt the user to enter their height (in meters).
    
    3.1.2. Store the height value.
    
    3.1.3. Prompt the user to enter their weight (in kilograms).
    
    3.1.4. Store the weight value.
    
    3.2. Calculate BMI
    
    3.2.1. Use the formula: BMI = weight / (height × height).
 
    3.3. Output BMI
    
    3.3.1. Display the calculated BMI.
    
    3.4. Determine Weight Category
    
    3.4.1. If BMI < 18.5:

    Output "Underweight".
    
    3.4.2. Else if 18.5 ≤ BMI ≤ 24.5:

    Output "Normal weight".

    3.4.3. Else if 25 ≤ BMI ≤ 29.5:

    Output "Overweight".

    3.4.4. Else:
    
    Output "Check your input".
    
    3.5. User Decision
    
    3.5.1. Prompt the user: "Do you want to continue? (choose 'y' to continue)".
    
    3.5.2. Store the user's decision in user.
 
 Step 4: End Repeat
 
 Step 5: Stop






 # BMI Calculation and Evaluation Flowchart

```mermaid
flowchart TD
  A([Start]) --> B[/Enter height in meters/]
  B --> C[/Enter weight in kilograms/]
  C --> D[Calculate BMI: weight / height * height]
  D --> E[/print BMI/]
  E --> F{BMI < 18.5?}
  
  F -- Yes --> G[Underweight]
  F -- No --> H{BMI >= 18.5 and BMI <= 24.5?}
  H -- Yes --> I[Normal weight]
  H -- No --> J{BMI >= 25 and BMI <= 29.5?}
  
  J -- Yes --> K[Overweight]
  J -- No --> L[Check your input]
  
  G --> M[/Continue? y/n/]
  I --> M
  K --> M
  L --> M
  
  M -- y --> B
  M -- n --> N([End])
