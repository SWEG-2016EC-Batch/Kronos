pseudocode
▎Step 1: Start

    • Begin the program.

▎Step 2: Outer Loop Initialization

    • Initialize an outer loop with i starting from 1 and continuing while i is less than or equal to 8. This loop controls the number of rows that will be printed (total of 8 rows).

▎Step 3: Inner Loop Initialization

    • Inside the outer loop, initialize an inner loop with j starting from 1 and continuing while j is less than or equal to 8. This loop controls how many characters are printed in each row (total of 8 columns).

▎Step 4: Check Border Conditions

    • For each iteration of the inner loop:

    • Check if the current position (i, j) is on the border:

    • If j is 1 (first column)

    • If j is 8 (last column)

    • If i is 1 (first row)

    • If i is 8 (last row)

▎Step 5: Print Asterisk or Space

    • If any of the above conditions are true (indicating a border position):

    • Print an asterisk followed by a space (* ).

    • If none of the conditions are true (indicating an inner position):

    • Print two spaces (  ) to maintain alignment.

▎Step 6: New Line After Each Row

    • After completing the inner loop (printing all columns for the current row), print a newline character (endl) to move to the next line.

▎Step 7: Increment Outer Loop Variable

    • Increment i by 1 (this happens automatically due to the loop structure).

▎Step 8: End Outer Loop

    • Once i exceeds 8, exit the outer loop.

▎Step 9: End

    • Terminate the program.
