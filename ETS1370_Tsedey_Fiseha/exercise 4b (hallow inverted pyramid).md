**Algorithm: Print a Hollow Inverted Pyramid with User Input**

**Input:**
- `n`: The size (height) of the pyramid.

**Output:**
- A hollow inverted pyramid pattern of asterisks (`*`), based on the input size.

**Steps:**

1. **Read Input:**
   - Display the message: `"Enter the size of your pyramid"`.
   - Read the integer `n` from the user.

2. **Outer Loop (Rows):**
   - For `i` from `n` down to `1` (height of the inverted pyramid):
     - Perform the following steps:

3. **Inner Loop (Columns):**
   - For `j` from `1` to `i`:
     - If `j == 1`, `j == i`, or `i == n`:
       - Print a `*`.
     - Otherwise:
       - Print a space (`" "`).

4. **Move to the Next Row:**
   - After the inner loop ends, print a newline character to start a new row.

5. **End Program:**
   - The program terminates after printing the hollow inverted pyramid.
