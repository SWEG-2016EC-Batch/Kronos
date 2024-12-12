**Algorithm: Find Frequency of Each Digit in a Given Integer**

**Input:**
- `number`: The integer whose digit frequency is to be calculated.

**Output:**
- A table displaying the frequency of each digit in the given integer.

**Steps:**

1. **Read Input:**
   - Display the message: `"Enter number:"`.
   - Read the integer `number` from the user.

2. **Initialize Variables:**
   - Initialize `count` to `0` (this will store the number of digits in the number).
   - Use an array or a map to store the frequency of each digit (optional, based on further implementation).

3. **Count the Digits:**
   - While `number` is not equal to `0`:
     - Find the last digit using `remainder = number % 10`.
     - Increment `count` by `1`.
     - Update `number` by dividing it by `10` (removes the last digit).

4. **Display Frequency Table:**
   - (Not yet implemented in your code) 
     - Create a frequency table for each digit (0-9).
     - Loop through the digits to display the frequency of each digit found in the number.

5. **End Program:**
   - Display the count (number of digits) and the frequency table for each digit.
