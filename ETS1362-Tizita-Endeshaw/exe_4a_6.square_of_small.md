# Pseudocode for Alphabet Pattern

## Input
- No explicit input is required for this program.

## Output
- Print a pattern of lowercase letters (a to e) in rows.

## Operations
BEGIN

    // Start of the main program
    FOR i FROM 1 TO 5 DO
        // Initialize the letter to 'a' for each row
        SET letter = 'a'
        
        // Inner loop to print letters in each row
        FOR j FROM 1 TO 5 DO
            PRINT letter // Print the current letter
            INCREMENT letter by 1 // Move to the next letter
        END FOR
        
        PRINT a new line // Move to the next line after finishing the row
    END FOR

    RETURN 0 // End of the program

END
