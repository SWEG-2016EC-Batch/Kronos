# Pseudocode for Printing a Hollow Square Pattern

## Input
- Prompt the user to enter a number n.
- Read the value of n from user input.

## Output
- Print a hollow square pattern of asterisks (*) based on the value of n.

## Operations
BEGIN

    // Declare integer variable n
    DECLARE n AS INTEGER
    
    // Prompt the user for input
    PRINT "please enter n:"
    
    // Read the value of n from user input
    READ n
    
    // Outer loop for each row from 1 to n
    FOR i FROM 1 TO n DO
        
        // Inner loop for each column from 1 to n
        FOR j FROM 1 TO n DO
            
            // Check if we are at the border of the square
            IF (j == 1 OR j == n OR i == 1 OR i == n) THEN
                // Print an asterisk for borders
                PRINT "* "
            ELSE
                // Print spaces for the hollow part
                PRINT "  "
            END IF
            
        END FOR
        
        // Print a new line after finishing the row
        PRINT a new line
    
    END FOR

    RETURN 0 // End of the program

END
