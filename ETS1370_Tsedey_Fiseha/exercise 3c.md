**Algorithm: Find the Product of Even Digits in a Given Number**

**Input:**
- `number`: The integer in which we want to find the product of even digits.

**Output:**
- The product of all even digits in the given number.

**Steps:**

1. **Read Input:**
   - Display the message: `"Enter a number:"`.
   - Read the integer `number` from the user.

2. **Initialize Variables:**
   - Initialize `count` to `0` (this is not being used in the program, but it could be useful for further extensions).
   - Initialize `product` to `1` (this will hold the product of even digits).

3. **While Loop (Extract and Check Digits):**
   - While `number` is not equal to `0`:
     - Extract the last digit of the number using `digit = number % 10`.
     - If `digit` is even (i.e., `digit % 2 == 0`):
       - Multiply `product` by `digit` to accumulate the product of even digits.
     - Remove the last digit by updating `number = number / 10`.

4. **Display Output:**
   - Print the value of `product`: `"The product of even digits in the number is: product"`.

5. **End Program:**
   - The program terminates after calculating and displaying the product of even digits.
