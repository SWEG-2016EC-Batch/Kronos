# Pseudocode for Printing a Number Triangle with Spaces

## Input
- Prompt the user to enter a number n.
- Read the value of n from user input.

## Output
- Print a right-angled triangle pattern of numbers aligned to the right.

## Operations
BEGIN

    // Declare integer variable n
    DECLARE n AS INTEGER
    
    // Prompt the user for input
    PRINT "please enter number of n:"
    // Read the value of n from user input
    READ n
    
    // Outer loop for each row from 1 to n
    FOR i FROM 1 TO n DO
        
        // Inner loop to print leading spaces
        FOR h FROM (n - i) DOWNTO 1 DO
            PRINT " " // Print a space
            
        END FOR
        
        // Inner loop to print numbers from i down to 1
        FOR j FROM i DOWNTO 1 DO
            PRINT j // Print the current value of j
            
        END FOR
        
        // Print a new line after finishing the row
        PRINT a new line
    
    END FOR

    RETURN 0 // End of the program

END
