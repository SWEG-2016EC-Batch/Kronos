pseudocode: Print Hollow Left-Aligned Triangle Pattern

Step 1: Start

    • Begin the program.

Step 2: Initialize the Main Loop

    • For i from 1 to 6 (inclusive):

    • This loop represents the current row number of the triangle, starting from the top and moving downwards.

Step 3: Print Leading Spaces

    • For h from 6 - i down to 1:

    • This inner loop prints spaces to create the left alignment for the current row.

  • Step 3.1: Print Space

    • Print a space character (" ").

Step 4: Initialize Inner Loop for Asterisks

    • For j from 1 to i (inclusive):

    • This inner loop prints either an asterisk or spaces based on the row and column conditions.

Step 5: Determine What to Print

  • Inside the inner loop:

  • Condition Check:

    • If i == 1 (first row), i == 6 (last row), j == 1 (first column), or j == i (last column of the current row):

      • Print an asterisk with leading spaces (" * ").

    • Else:

      • Print spaces ("   ").

Step 6: New Line After Each Row

    • After completing the inner loops (all spaces and asterisks for the current row have been printed):

    • Print a newline character (endl) to move to the next line.

Step 7: End Main Loop

    • Once all rows have been processed, exit the main loop.

Step 8: End

    • Terminate the program.
