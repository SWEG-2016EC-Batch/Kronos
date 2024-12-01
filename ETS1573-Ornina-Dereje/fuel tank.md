Input:the fuel tank capacity,miles per gallon
operation: mile driven
output:Display mile driven

Algorithm
step1: start the program.
step2: Read the input the fuel tank capacity,miles per gallon
step3: calculate miles driven=fuel tank capacity*miles per gallons
step4: print miles driven
step5:End
# Flowchart for miles driven
```mermaid
flowchart TD
  A([Start]) --> B[/Declare Variables: fuel_tank_capacity, miles_per_gallons, miles_driven/]
    B --> C[/Input: Enter the fuel tank capacity in gallons/]
    C --> D[/Input: Enter miles per gallon of the automobile/]
    D --> E[Calculate: miles_driven = fuel_tank_capacity * miles_per_gallons]
    E --> F[/Output: This automobile can be driven for miles_driven miles/]
    F --> G([End])
