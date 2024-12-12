**Algorithm: Reverse a Given Number**

**Input:**
- `number`: The number to be reversed.

**Output:**
- The reversed number.

**Steps:**

1. **Read Input:**
   - Display the message: `"Enter a number:"`.
   - Read the integer `number` from the user.

2. **Initialize Variables:**
   - Initialize `reverse` to `0` (this will store the reversed number).
   - Initialize `remainder` to store the last digit of the number.

3. **While Loop (Reversing the Number):**
   - While `number` is not equal to `0`:
     - Calculate the remainder of `number` divided by 10 (this will give the last digit of the number).
     - Multiply `reverse` by 10 and add the `remainder` to it.
     - Update `number` by dividing it by 10 (removes the last digit).

4. **Display Output:**
   - Print the reversed number: `"The reverse of the number is: reverse"`.

5. **End Program:**
   - The program terminates after displaying the reversed number.
