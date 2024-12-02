## Algorithm for the mile calculator

1. Input:

    - the fuel tank capacity in gallons.

    - the miles per gallon .

2. Process:

    - mile = fuel_in_gallon × miles_per_gallons
   
3. Output:

    - the total mile

## Algorithm Design

  ## pseudocode

Step 1: Start

Step 2: Initialize Variables
        
        2.1. Declare variables fuel_in_gallon, miles_per_gallons, and mile.

Step 3: Input Data

        3.1. Prompt the user to enter the fuel in gallons.
        
        3.2. Store the input value in fuel_in_gallon.
        
        3.3. Prompt the user to enter the miles per gallon.
        
        3.4. Store the input value in miles_per_gallons.

Step 4: Calculate Distance
        
        4.1. Calculate the distance the automobile can travel without refueling:
        
        - mile = fuel_in_gallon * miles_per_gallons.

Step 5: Output Result
        
        5.1. Display the result: "The automobile can be driven mile miles without refueling."

Step 6: End

# Flowchart for Serial Transmission Time Calculation
```mermaid
flowchart TD
    A([Start]) --> B[/Enter file size in bytes/]
    B --> C[Calculate total seconds =  file_size / transmission_rate]
    C --> D[Calculate days = total_seconds / 24 * 3600]
    D --> E[Update total_seconds= total_seconds % 24 * 3600]
    E --> F[Calculate hours = total_seconds / 3600]
    F --> G[Update total_seconds = total_seconds % 3600]
    G --> H[Calculate minutes = total_seconds / 60]
    H --> I[Calculate seconds = total_seconds % 60]
    I --> J[/print days, hours, minutes, and seconds/]
    J --> K([End])
