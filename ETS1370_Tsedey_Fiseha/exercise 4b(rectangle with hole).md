**Algorithm: Print a Rectangle with Border of Asterisks**

**Input:**
- `n`: The number of rows of the rectangle.
- `m`: The number of columns of the rectangle.

**Output:**
- A rectangle with a border of asterisks (`*`) and empty spaces in the middle.

**Steps:**

1. **Read Input:**
   - Display the message: `"Enter the amount of rows and columns you want to print respectively"`.
   - Read integers `n` (rows) and `m` (columns) from the user.

2. **Outer Loop (Rows):**
   - For `i` from `1` to `n` (number of rows):
     - Perform the following steps:

3. **Inner Loop (Columns):**
   - For `j` from `1` to `m` (number of columns):
     - If `j == 1` or `j == m` or `i == 1` or `i == n`:
       - Print a `*` followed by a space.
     - Otherwise:
       - Print a space (`" "`).

4. **Move to the Next Row:**
   - After the inner loop ends, print a newline character to start a new row.

5. **End Program:**
   - The program terminates after printing the rectangle with the border.
