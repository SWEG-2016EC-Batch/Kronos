# Pseudocode for Right-Aligned Number Pattern

BEGIN

    // Start of the main program
    FOR i FROM 1 TO 5 DO
        // Print leading spaces
        FOR h FROM 5 - i DOWNTO 1 DO
            PRINT " " // Print a space
        END FOR
        
        // Print numbers in descending order
        FOR j FROM i DOWNTO 1 DO
            PRINT j // Print the value of j
        END FOR
        
        PRINT a new line // Move to the next line after finishing the row
    END FOR

    RETURN 0 // End of the program

END
