# Pseudocode for Star Pattern

## Input
- No explicit input is required for this program.

## Output
- Print a pattern of asterisks (*) forming a border in an 8x8 grid.

## Operations
BEGIN

    // Start of the main program
    FOR i FROM 1 TO 8 DO
        // Inner loop to construct each row
        FOR j FROM 1 TO 8 DO
            
            // Check conditions to print '*' or space
            IF (j == 1 OR j == 8 OR i == 1 OR i == 8) THEN
                PRINT "* " // Print '*' with a space
            ELSE
                PRINT "  " // Print two spaces for empty cells
            END IF
            
        END FOR
        
        PRINT a new line // Move to the next line after finishing the row
    END FOR

    RETURN 0 // End of the program

END
