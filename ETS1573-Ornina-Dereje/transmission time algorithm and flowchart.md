Algorithm to Calculate Transmission Time

1.Input:

-File size in bytes.

-Transmission rate in bytes per second.

2.Process:

Calculate Total Seconds:

-Total Seconds = file size/ transmition rate

Calculate Days:

-days = Total seconde /(24*3600)

Calculate Hours:

-hours = remaining seconds/3600

Calculate Minutes:

-minutes = remaining seconds/60

remaining Seconds = remaining Seconds modulus(%) 60

Remaining Seconds:

-Remaining Seconds = Remaining Seconds

3.Output:

-Days

-Hours

-Minutes

-Seconds

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
