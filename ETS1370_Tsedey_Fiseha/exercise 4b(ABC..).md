**Algorithm: Print an Alphabet Rectangle with User Input**

**Input:**
- `n`: Number of rows.
- `m`: Number of columns.

**Output:**
- A rectangular pattern of alphabets based on the input size, using letters from 'A' to 'Z'.

**Steps:**

1. **Read Input:**
   - Display the message: `"How many rows and columns of characters do you want? Enter rows and columns respectively"`.
   - Read the integers `n` (rows) and `m` (columns) from the user.

2. **Check for Valid Input:**
   - If `n * m` is less than or equal to 26 (total number of alphabets):
     - Proceed to step 3.
   - Otherwise:
     - Display the message: `"There are only 26 alphabets!"`.
     - End the program.

3. **Print Alphabet Rectangle:**
   - Initialize the character `character` to `'A'`.
   - For `i` from `1` to `n` (number of rows):
     - For `j` from `1` to `m` (number of columns):
       - Print the current `character` followed by a space.
       - Increment the `character` to the next letter.
     - After the inner loop, print a newline character to move to the next row.

4. **End Program:**
   - The program terminates after printing the rectangle of alphabets.
