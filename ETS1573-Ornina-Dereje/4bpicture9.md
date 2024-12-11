pseudocode
1. Start:

       • Begin program execution.

2. Declare Variables:

       • Declare an integer variable n to hold the size of the triangle.

3. User Prompt:

       • Print the prompt message: "please enter n: ".

       • Read the integer value n from user input.

4. Outer Loop (for Rows):

       • Start a loop with variable i ranging from n down to 1 (inclusive):

       • This loop controls the number of rows to be printed, starting from n and decreasing to 1.

5. Inner Loop (for Columns):

       • Inside the outer loop, start another loop with variable j ranging from 1 to i (inclusive):

       • This loop controls how many characters are printed in each row.

6. Conditional Check:

   • Inside the inner loop, check the following conditions:

       • If i == n: This condition checks if it is the first row.

       • If i == 1: This condition checks if it is the last row.

       • If j == i: This condition checks if it is the last column of the current row.

       • If j == 1: This condition checks if it is the first column of the current row.

   • If any of these conditions are true, print an asterisk (*).

   • If none of these conditions are met, print a space ( ).

7. Newline:

       • After completing the inner loop (printing one row), print a newline character using cout << endl; to move to the next row.

8. End Outer Loop:

       • The outer loop continues until all rows (from n down to 1) have been printed.

9. End:

       • After finishing all iterations, return 0 to indicate successful completion of the program.
