# Flowchart for miles driven
```mermaid
flowchart TD
  A([Start]) --> B[/Declare Variables: fuel_tank_capacity, miles_per_gallons, miles_driven/]
    B --> C[/Input: Enter the fuel tank capacity in gallons/]
    C --> D[/Input: Enter miles per gallon of the automobile/]
    D --> E[Calculate: miles_driven = fuel_tank_capacity * miles_per_gallons]
    E --> F[/Output: This automobile can be driven for miles_driven miles/]
    F --> G([End])
