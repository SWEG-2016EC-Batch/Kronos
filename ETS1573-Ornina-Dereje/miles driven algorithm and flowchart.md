## Algorithm for the mile calculator

1. Input:

    - the fuel tank capacity in gallon .

    - the miles per gallon .

2. Process:

    - mile = fuel_tank_capacity in gallon × miles_per_gallons
   
3. Output:

    - miles_driven

## Algorithm Design

  ## pseudocode

Step 1: Start

Step 2: Initialize Variables
        
        2.1. Declare variables fuel_tank_capacity in gallon, miles_per_gallons, and miles_driven .

Step 3: Input Data

        3.1. Prompt the user to enter the fuel_tank_capacity in gallon.
        
        3.2. Store the input value in fuel_tank_capacity in gallon.
        
        3.3. Prompt the user to enter the miles_per_gallon.
        
        3.4. Store the input value in miles_per_gallons.

Step 4: Calculate Distance
        
        4.1. Calculate the distance the automobile can travel without refueling:
        
        - miles_driven  =  fuel_tank_capacity  * miles_per_gallons.

Step 5: Output Result
        
        5.1. Display the result: "The automobile can be driven mile miles without refueling."

Step 6: End

# Flowchart for miles driven
```mermaid
flowchart TD
  A([Start]) --> B[/Declare Variables: fuel_tank_capacity, miles_per_gallons, miles_driven/]
    B --> C[/Input: Enter the fuel tank capacity in gallons/]
    C --> D[/Input: Enter miles per gallon of the automobile/]
    D --> E[Calculate: miles_driven = fuel_tank_capacity * miles_per_gallons]
    E --> F[/Output: This automobile can be driven for miles_driven miles/]
    F --> G([End])
