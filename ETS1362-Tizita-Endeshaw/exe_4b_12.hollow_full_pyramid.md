# Pseudocode for Printing a Right-Angled Triangle Pattern with Borders

## Input
- Prompt the user to enter a number n.
- Read the value of n from user input.

## Output
- Print a right-angled triangle pattern of asterisks (*) with n rows.
- Asterisks will be printed at the borders of the triangle; other positions will be filled with spaces.

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
        
        // Inner loop for spaces to create left alignment
        FOR h FROM (n - i) DOWNTO 1 DO
            PRINT " " // Print space for left alignment
        
        END FOR
        
        // Inner loop for printing asterisks and spaces in the current row
        FOR j FROM 1 TO i DO
            
            // Check conditions for printing an asterisk
            IF (i == 1 OR i == n OR j == 1 OR j == i) THEN
                PRINT " * " // Print an asterisk with spaces around it
            ELSE
                PRINT "   " // Print spaces for other positions
            
            END IF
            
        END FOR
        
        // Print a new line after finishing the row
        PRINT a new line
    
    END FOR

    RETURN 0 // End of the program

END
