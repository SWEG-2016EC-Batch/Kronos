**Algorithm: Sum of First and Last Digits in a Given Number**

**Input:**
- `number`: The integer from which we need to extract the first and last digits.

**Output:**
- The sum of the first and last digits of the number.

**Steps:**

1. **Read Input:**
   - Display the message: `"Enter number:"`.
   - Read the integer `number` from the user.

2. **Extract the Last Digit:**
   - Use the modulo operator to extract the last digit: `lastDigit = number % 10`.

3. **Extract the First Digit:**
   - Use a while loop to remove digits from the number until it is less than 10:
     - While `number >= 10`, update `number = number / 10` to remove the last digit.
   - The remaining `number` will be the first digit.

4. **Calculate the Sum of First and Last Digits:**
   - Calculate `sum = firstDigit + lastDigit`.

5. **Display the Result:**
   - Print the sum of the first and last digits: `"The sum of the first and last digit is: sum"`.

6. **End Program:**
   - The program terminates after displaying the sum of the first and last digits.
