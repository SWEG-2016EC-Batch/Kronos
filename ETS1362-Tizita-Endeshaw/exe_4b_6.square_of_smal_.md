# Pseudocode for Printing Alphabet Square

## Input
- Prompt the user to enter a number n.
- Read the value of n from user input.

## Output
- Print a square pattern of lowercase letters (a, b, c, etc.) based on the value of n.

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
        
        // Initialize character variable letter to 'a'
        DECLARE letter AS CHARACTER
        SET letter = 'a'
        
        // Inner loop to print letters from 'a' to 'a' + (n - 1)
        FOR j FROM 1 TO n DO
            
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
