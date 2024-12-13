# Pseudocode for Printing Numbers in a Grid

## Input
- No explicit input is required for this program.

## Output
- Print a grid of numbers from 1 to 5, with each row containing the numbers separated by spaces.

## Operations
BEGIN

    // Start of the main program
    FOR i FROM 1 TO 5 DO
        // Inner loop to print numbers from 1 to 5
        FOR j FROM 1 TO 5 DO
            PRINT " " + j // Print the current number with a leading space
        END FOR
        
        PRINT a new line // Move to the next line after finishing the row
    END FOR

    RETURN 0 // End of the program

END
