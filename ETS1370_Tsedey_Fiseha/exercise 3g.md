**Algorithm: Check Whether a Number is a Palindrome**

**Input:**
- `number`: The integer to be checked for being a palindrome.

**Output:**
- A message indicating whether the number is a palindrome or not.

**Steps:**

1. **Read Input:**
   - Display the message: `"Enter a number:"`.
   - Read the integer `number` from the user.

2. **Store the Original Number:**
   - Store the value of `number` in `original` (this will be used for comparison later).

3. **Reverse the Number:**
   - Initialize `reverse` to `0` (this will store the reversed number).
   - While `number` is not equal to `0`:
     - Extract the last digit of `number` using `digit = number % 10`.
     - Update `reverse = reverse * 10 + digit` to build the reversed number.
     - Remove the last digit by updating `number = number / 10`.

4. **Check for Palindrome:**
   - If `original == reverse`:
     - Print: `"It is a palindrome number"`.
   - Otherwise:
     - Print: `"It is not a palindrome number"`.

5. **End Program:**
   - The program terminates after checking and displaying the result.
