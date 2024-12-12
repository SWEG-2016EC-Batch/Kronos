**Algorithm: Print an Alphabet Triangle with User Input**

**Input:**
- `n`: The last alphabet character to define the size of the triangle

**Output:**
- A triangle pattern of alphabets starting from 'A'

**Steps:**

1. **Read Input:**
   - Display the message: `"Enter size of your triangle in alphabet"`.
   - Read the character `n` from the user.

2. **Outer Loop (Rows):**
   - For `i` starting from `'A'` to `n`:
     - Perform the following steps:

3. **Inner Loop (Columns):**
   - For `j` starting from `'A'` to `i`:
     - Print the character `j` followed by a space.

4. **Move to the Next Row:**
   - After the inner loop ends, print a newline character to start a new row.

5. **End Program:**
   - The program terminates after printing the triangle.
