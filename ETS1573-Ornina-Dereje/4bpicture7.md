pseudocode
1. Start:

       • Begin the program execution.

2. Declare Variables:

       • Declare an integer variable n to hold the size of the square.

3. User Prompt:

       • Print the prompt message: "please enter n: ".

       • Read the integer value n from user input.

4. Outer Loop (for Rows):

       • Start a loop with variable i ranging from 1 to n (inclusive):

       • This loop controls the number of rows to be printed.

5. Inner Loop (for Columns):

       • Inside the outer loop, start another loop with variable j ranging from 1 to n (inclusive):

       • This loop controls how many columns are printed in each row.

6. Condition Check:

   • Inside the inner loop, check if the current position (i, j) is on the border of the square using the following conditions:

       • If j == 1: The first column.

       • If j == n: The last column.

       • If i == 1: The first row.

       • If i == n: The last row.

   • If any of these conditions are true, print an asterisk (*) followed by a space (" ").

7. Print Spaces:

       • If none of the conditions are met (the position is not on the border), print two spaces ("  ").

8. Newline:

       • After completing the inner loop (printing one row), print a newline character using cout << endl; to move to the next row.

9. End Outer Loop:

       • The outer loop continues until all rows (from 1 to n) have been printed.

10. End:

        • After finishing all iterations, return 0 to indicate successful completion of the program.
