# Pseudocode for Printing a Number Triangle

## Input
- No explicit input is required for this program.

## Output
- Print a right-angled triangle of numbers where each row i contains numbers from 1 to i.

## Operations
BEGIN

    // Start of the main program
    FOR i FROM 1 TO 5 DO // Loop for 5 rows
        // Inner loop to print numbers from 1 to i
        FOR j FROM 1 TO i DO
            PRINT j // Print the current number j
        END FOR
        
        PRINT a new line // Move to the next line after finishing the row
    END FOR

    RETURN 0 // End of the program

END
