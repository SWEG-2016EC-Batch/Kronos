## Algorithm
1. Input:

     - Prompt the user to enter the base number.
     - Prompt the user to enter the exponent.
2. Process:
   
     - result = base^exponent

3. Output:

     - The result is {result}

## Algorithm Design
  Pseudocode
   
   
Step 1: Start

Step 2: Initialize Variables
     
     2.1. x(base), y(exponent), and x_the_power_of_y.

Step 3: Input Data

     3.1. Prompt the user to enter x.
     
     3.2. Store the input value x.
     
     3.3. Prompt the user to enter y.
     
     3.4. Store the input value y.

Step 4: Calculate the Result
     
     4.1. Use the formula result = pow(base, exponent) to calculate the value of x^y

Step 5: Output Result
     
     5.1. Display the result: " x_the_power_of_y".


Step 6: End

# power Calculation and Evaluation Flowchart

```mermaid
flowchart TD
 A([Start]) --> B[/Declare Variables: x, y, x_the_power_of_y/]
    B --> C[/Input: Enter the value of x/]
    C --> D[/Input: Enter the value of y/]
    D --> E[Calculate: x_the_power_of_y = x^y ]
    E --> F[/Output: x the power of y is equal to x_the_power_of_y/]
    F --> G([End])
