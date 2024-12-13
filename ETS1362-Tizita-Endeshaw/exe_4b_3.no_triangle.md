# Pseudocode for Printing a Number Triangle

## Input
- Prompt the user to enter a number n.
- Read the value of n from user input.

## Output
- Print a right-angled triangle pattern of numbers.

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
        
        // Inner loop for each column from 1 to i
        FOR j FROM 1 TO i DO
            
            // Print the current value of j
            PRINT j
            
        END FOR
        
        // Print a new line after finishing the row
        PRINT a new line
    
    END FOR

    RETURN 0 // End of the program

END
