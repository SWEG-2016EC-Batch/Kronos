# Pseudocode for Inverted Right-Aligned Star Pattern

## Input
- No explicit input is required for this program.

## Output
- Print an inverted right-aligned pattern of asterisks (*) forming a triangle.

## Operations
BEGIN

    // Start of the main program
    FOR i FROM 6 DOWN TO 1 DO
        // Inner loop to print leading spaces for right alignment
        FOR h FROM 6 - i DOWN TO 1 DO
            PRINT " " // Print a space
            
        END FOR
        
        // Inner loop to print asterisks
        FOR j FROM 1 TO i DO
            PRINT " *" // Print an asterisk with a leading space
            
        END FOR
        
        PRINT a new line // Move to the next line after finishing the row
    END FOR

    RETURN 0 // End of the program

END
