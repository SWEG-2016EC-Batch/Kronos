# Pseudocode for Printing a Reverse Number Triangle

## Input
- No explicit input is required for this program.

## Output
- Print a right-aligned triangle of numbers where each row i contains numbers from i down to 1.

## Operations
BEGIN

    // Start of the main program
    FOR i FROM 1 TO 5 DO // Loop for 5 rows
        // Inner loop to print leading spaces for right alignment
        FOR h FROM 5 - i DOWNTO 1 DO
            PRINT " " // Print a space for alignment
        END FOR
        
        // Inner loop to print numbers from i down to 1
        FOR j FROM i DOWNTO 1 DO
            PRINT j // Print the current number j
        END FOR
        
        PRINT a new line // Move to the next line after finishing the row
    END FOR

    RETURN 0 // End of the program

END
