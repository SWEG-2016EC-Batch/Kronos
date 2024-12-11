
pseudocode

1. Start:

       • Begin the program execution.

2. Declare Variables:

       • Declare an integer variable n.

3. Input:

       • Print the message: "please enter number of n: ".

       • Read the integer value n from user input.

4. Outer Loop (for Rows):

       • Start a loop with variable i ranging from 1 to n (inclusive):

       • This loop controls the number of rows to be printed, starting from 1 and increasing to n.

5. Inner Loop 1 (for Spaces):

       • Inside the outer loop, start another loop with variable h ranging from n - i down to 1:

       • This loop prints spaces before the numbers in each row. The number of spaces decreases as i increases.

       • For each iteration, print a space character (" ").

6. Inner Loop 2 (for Numbers):

       • After printing spaces, start another loop with variable j ranging from i down to 1:

       • This loop controls the numbers printed in each row, starting from i and decreasing to 1.

       • For each iteration, print the current value of j.

7. Newline:

       • After completing the second inner loop (printing numbers for the current row), print a newline character using cout << endl; to move to the next row.

8. End Outer Loop:

       • The outer loop continues until all rows (from 1 to n) have been printed.

9. End:

       • After finishing all iterations, return 0 to indicate successful completion of the program.
