**Algorithm: Print a Hollow Right-Angled Pyramid with User Input**

**Input:**
- `n`: The size (height) of the pyramid.

**Output:**
- A hollow right-angled pyramid pattern of asterisks (`*`), based on the input size.

**Steps:**

1. **Read Input:**
   - Display the message: `"How much size of pyramid you want"`.
   - Read the integer `n` from the user.

2. **Outer Loop (Rows):**
   - For `i` from `1` to `n` (height of the pyramid):
     - Perform the following steps:

3. **Print Leading Spaces:**
   - For `k` from `n - i` to `1`:
     - Print a space (`" "`).

4. **Print Stars:**
   - For `j` from `1` to `i`:
     - If `j == 1` or `j == i` or `i == n`:
       - Print a `*`.
     - Otherwise:
       - Print a space (`" "`).

5. **Move to the Next Row:**
   - After the inner loops end, print a newline character to start a new row.

6. **End Program:**
   - The program terminates after printing the pyramid.
