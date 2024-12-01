# powerCalculation and Evaluation Flowchart

```mermaid
flowchart TD
 A([Start]) --> B[/Declare Variables: x, y, x_the_power_of_y/]
    B --> C[/Input: Enter the value of x/]
    C --> D[/Input: Enter the value of y/]
    D --> E[Calculate: x_the_power_of_y = pow x,y )]
    E --> F[/Output: x the power of y is equal to x_the_power_of_y/]
    F --> G([End])
