### Algorithm to Calculate Transmission Time
1. Input:

     - File size in bytes.
       
     - Transmission rate in bytes per second.
2. Process:

     - Calculate Total Seconds:

       Total Seconds = file size/ transmition rate
       
     - Calculate Days:
       
         days = Total seconde /(24*3600)

     - Calculate Hours:

         hours = remaining seconds/3600

    - Calculate Minutes:

        minutes = remaining seconds/60

        remaining Seconds = remaining Seconds modulus(%) 60
    - Remaining Seconds:

        Remaining Seconds = Remaining Seconds
3. Output:

   - Days
     
   - Hours
     
   - Minutes
     
   - Seconds

## Algorithm Design

  ## Pseudocode

Step 1: Start

Step 2: Initialize Variables

          2.1. Declare variables days, hours, minutes, seconds.
          
          2.2. Set transmission_rate = 960 (characters per second).

Step 3: Input File Size

          3.1. Prompt the user to enter the file size in bytes.
          
          3.2. Store the input value in file_size.

Step 4: Calculate Total Time in Seconds

          4.1. Calculate total_seconds = file_size / transmission_rate.

Step 5: Break Down Total Time into Days, Hours, Minutes, and Seconds

          5.1. Calculate days = total_seconds / (24 * 3600) (full days).
          
          5.2. Update total_seconds = total_seconds % (24 * 3600) (remaining seconds after full days).
          
          5.3. Calculate hours = total_seconds / 3600 (full hours).
          
          5.4. Update total_seconds = total_seconds % 3600 (remaining seconds after full hours).
          
          5.5. Calculate minutes = total_seconds / 60 (full minutes).
          
          5.6. Calculate seconds = total_seconds % 60 (remaining seconds).

Step 6: Output Transmission Time

          6.1. Display the result: "Transmission Time: days, hours, minutes, seconds".

Step 7: End


# Flowchart for  Transmission Time Calculation
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
