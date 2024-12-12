**Algorithm: Print an Alphabet Rectangle with User Input**

**Input:**
- `n`: The last alphabet character to define the number of rows.
- `m`: The last alphabet character to define the number of columns.

**Output:**
- A rectangular pattern of alphabets based on user input.

**Steps:**

1. **Read Input:**
   - Display the message: `"Enter up to what alphabet in the row and column you want the output"`.
   - Read the characters `n` (rows) and `m` (columns) from the user.

2. **Outer Loop (Rows):**
   - For `i` starting from `'a'` to `n`:
     - Perform the following steps:

3. **Inner Loop (Columns):**
   - For `j` starting from `'a'` to `m`:
     - Print the character `j` followed by a space.

4. **Move to the Next Row:**
   - After the inner loop ends, print a newline character to start a new row.

5. **End Program:**
   - The program terminates after printing the rectangle.
