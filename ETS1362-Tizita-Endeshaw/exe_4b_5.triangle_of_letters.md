# Pseudocode for Printing Alphabet Triangle

## Input
- Prompt the user with a warning message about the limit on input.
- Prompt the user to enter a number n.
- Read the value of n from user input.

## Output
- Print a triangle pattern of uppercase letters (A, B, C, etc.) based on the value of n.

## Operations
BEGIN

    // Declare integer variable n
    DECLARE n AS INTEGER
    
    // Output warning message about input limit
    PRINT "don't enter more than 26 because there are only 26 letters!"
    
    // Prompt the user for input
    PRINT "please enter n:"
    
    // Read the value of n from user input
    READ n
    
    // Outer loop for each row from 1 to n
    FOR i FROM 1 TO n DO
        
        // Initialize character variable letter to 'A'
        DECLARE letter AS CHARACTER
        SET letter = 'A'
        
        // Inner loop to print letters from 'A' up to the ith letter
        FOR j FROM 1 TO i DO
            
            // Print the current letter followed by a space
            PRINT letter
            
            // Increment letter to the next character (next letter)
            INCREMENT letter
            
        END FOR
        
        // Print a new line after finishing the row
        PRINT a new line
    
    END FOR

    RETURN 0 // End of the program

END
