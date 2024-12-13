# Pseudocode for Printing a Right-Angled Triangle Pattern

## Input
- Prompt the user to enter a number n.
- Read the value of n from user input.

## Output
- Print a right-angled triangle pattern of asterisks (*) with n rows, aligned to the right.

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
        
        // Inner loop for spaces to create right alignment
        FOR h FROM (n - i) DOWNTO 1 DO
            PRINT " " // Print space for right alignment
        
        END FOR
        
        // Inner loop for printing asterisks in the current row
        FOR j FROM 1 TO i DO
            PRINT " * " // Print an asterisk with spaces
        
        END FOR
        
        // Print a new line after finishing the row
        PRINT a new line
    
    END FOR

    RETURN 0 // End of the program

END