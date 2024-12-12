**Algorithm: Print an Inverted Triangle with User Input**

**Input:**
- `n`: The size (height) of the triangle.

**Output:**
- An inverted triangle pattern of asterisks (`*`), based on the input size.

**Steps:**

1. **Read Input:**
   - Display the message: `"Enter the amount of size of the triangle you want"`.
   - Read the integer `n` from the user.

2. **Outer Loop (Rows):**
   - For `i` from `n` down to `1` (height of the inverted triangle):
     - Perform the following steps:

3. **Inner Loop (Columns):**
   - For `j` from `1` to `i`:
     - Print a `*`.

4. **Move to the Next Row:**
   - After the inner loop ends, print a newline character to start a new row.

5. **End Program:**
   - The program terminates after printing the inverted triangle.
