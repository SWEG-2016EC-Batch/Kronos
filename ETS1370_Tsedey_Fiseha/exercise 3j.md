**Algorithm: Check if a Number is a Perfect Number**

**Input:**
- `number`: The integer to be checked for being a perfect number.

**Output:**
- A message indicating whether the number is a perfect number or not.

**Steps:**

1. **Read Input:**
   - Display the message: `"Enter a number:"`.
   - Read the integer `number` from the user.

2. **Calculate the Sum of Divisors:**
   - Initialize `sum` to `0`.
   - For `i` from `1` to `number - 1`:
     - If `number % i == 0` (i.e., `i` is a divisor of `number`):
       - Add `i` to `sum`.

3. **Check if the Number is Perfect:**
   - If `sum == number`:
     - Print: `"It is a perfect number"`.
   - Otherwise:
     - Print: `"It is not a perfect number"`.

4. **End Program:**
   - The program terminates after checking and displaying whether the number is perfect or not.
