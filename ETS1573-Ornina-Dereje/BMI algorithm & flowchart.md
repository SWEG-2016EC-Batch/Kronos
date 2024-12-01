
1.Input:

 - Weight (in kilogram)
 - Height (in meter)

2.Process:
-Calculate BMI using the formula: 

BMI = Weight/(Height^2)

3.Output:

-print the BMI value & prompt for continuation

-Determine the BMI category:

    -Underweight: BMI < 18.5
    -Normal weight: 18.5 <= BMI < 24.5
    -Overweight: 25 <= BMI <=29.5

   algorithm
step1: start the program.
step2: while continue program is 'y'.
step3: read the input weight and height.
step4: calculate BMI as weight/height*height.
step5: If BMI<18.5 then catagory to 'underweight'
step6: else if BMI>=18.5 and BMI<25 then catagory to'normalweight'
step7: else if BMI >=25 and BMI<30 then catagory to'overweight'
step8: print BMI ,catagory.
step9: End

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
  J -- No --> L[INVALID]
  
 G --> M[/Continue? y/n/]
  I --> M
  K --> M
  L --> M
 
 
  
  M -- y --> B
  M -- n -->N([End])


 
