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
