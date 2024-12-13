**Algorithm: Check if a Number is a Strong Number**

**Input:**
- `number`: The number to be checked for being a Strong Number.

**Output:**
- A message indicating whether the number is a Strong Number or not.

**Steps:**

1. **Read Input:**
   - Display the message: `"Enter number:"`.
   - Read the integer `number` from the user.

2. **Calculate the Factorial of the Number:**
   - Initialize `factorial` to `1`.
   - For `i` from `1` to `number`:
     - Multiply `factorial` by `i` to calculate the factorial of `number`.

3. **Sum the Digits of the Factorial:**
   - Initialize `sum` to `0`.
   - While `factorial` is not equal to `0`:
     - Extract the last digit of `factorial` using `digit = factorial % 10`.
     - Add `digit` to `sum`.
     - Remove the last digit by updating `factorial = factorial / 10`.

4. **Check if the Number is a Strong Number:**
   - If `sum == number`:
     - Print: `"Strong number"`.
   - Otherwise:
     - Print: `"Not strong number"`.

5. **End Program:**
   - The program terminates after displaying whether the number is strong or not.
