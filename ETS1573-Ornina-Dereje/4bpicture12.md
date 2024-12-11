pseudocode
1. Start:

       • Begin the program execution.

2. Declare Variables:

       • Declare an integer variable n.

3. Input:

       • Print the message: "please enter n: ".

       • Read the integer value n from user input.

4. Outer Loop (for Rows):

       • Start a loop with variable i ranging from 1 to n (inclusive):

       • This loop controls the number of rows to be printed, starting from 1 and increasing to n.

5. Inner Loop 1 (for Spaces):

       • Inside the outer loop, start another loop with variable h ranging from n-i down to 1 (inclusive):

       • This loop prints spaces to create right alignment.

       • For each iteration of this inner loop, print a space character " ".

6. Inner Loop 2 (for Asterisks and Spaces):

       • After printing spaces, start another loop with variable j ranging from 1 to i (inclusive):

       • This loop determines what to print in each column of the current row.

     • Inside this loop, check the following conditions:

       • If i == 1: Print an asterisk " * " (first row).

       • If i == n: Print an asterisk " * " (last row).

       • If j == 1: Print an asterisk " * " (first column of any row).

       • If j == i: Print an asterisk " * " (last column of the current row).

       • If none of these conditions are met, print spaces "   " (for hollow spaces).

7. Newline:

       • After completing the inner loops (printing spaces and asterisks), print a newline character using cout << endl; to move to the next row.

8. End Outer Loop:

       • The outer loop continues until all rows (from 1 to n) have been printed.

9. End:

       • After finishing all iterations, return 0 to indicate successful completion of the program.
