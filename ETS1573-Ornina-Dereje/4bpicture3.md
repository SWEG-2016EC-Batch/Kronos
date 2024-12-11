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

5. Inner Loop (for Columns):

       • Inside the outer loop, start another loop with variable j ranging from 1 to i (inclusive):

       • This loop controls the number of columns in each row, which increases with each iteration of the outer loop.

6. Print Numbers:

       • Inside the inner loop, print the value of j. This will print numbers starting from 1 up to the current row number i.

7. Newline:

       • After completing the inner loop (printing numbers for the current row), print a newline character using cout << endl; to move to the next row.

8. End Outer Loop:

       • The outer loop continues until all rows (from 1 to n) have been printed.

9. End:

       • After finishing all iterations, return 0 to indicate successful completion of the program.
