## Pseudocode: Number Operations Menu

**Input:**
* `num`: An integer number
* `choice`: A menu option (1-10)

**Process:**

1. **Display Menu:**
   * Print a menu of options:
     * 1. Reverse of the number
     * 2. Number of digits
     * 3. Product of even digits
     * 4. First and last digit
     * 5. Swap first and last digit
     * 6. Palindrome check
     * 7. Frequency of each digit
     * 8. Strong number check
     * 9. Perfect number check
     * 10. Exit

2. **Read Choice:**
   * Input the user's choice.

3. **Perform Operation Based on Choice:**
   * **Case 1: Reverse of the number**
     * Initialize `rev` to 0.
     * While `num` is greater than 0:
       * Extract the last digit.
       * Append the digit to `rev`.
       * Remove the last digit from `num`.
     * Print `rev`.
   * **Case 2: Number of digits**
     * Initialize `count` to 0.
     * While `num` is greater than 0:
       * Increment `count`.
       * Remove the last digit from `num`.
     * Print `count`.
   * **Case 3: Product of even digits**
     * Initialize `prod` to 1.
     * While `num` is greater than 0:
       * Extract the last digit.
       * If the digit is even, multiply `prod` by the digit.
       * Remove the last digit from `num`.
     * Print `prod`.
   * **Case 4: First and last digit**
     * Extract the last digit as the `last` digit.
     * While `num` is greater than 0:
       * Extract the last digit as the `first` digit.
       * Remove the last digit from `num`.
     * Print `first` and `last`.
   * **Case 5: Swap first and last digit**
     * Convert `num` to a string.
     * Extract the first and last digits from the string.
     * Construct a new number with the swapped digits.
     * Print the new number.
   * **Case 6: Palindrome check**
     * Reverse `num`.
     * Compare the original `num` with the reversed number.
     * Print whether `num` is a palindrome or not.
   * **Case 7: Frequency of each digit**
     * Initialize an array `freq` of size 10 to store the frequency of each digit.
     * While `num` is greater than 0:
       * Extract the last digit.
       * Increment the corresponding frequency in `freq`.
       * Remove the last digit from `num`.
     * Print the frequency of each digit.
   * **Case 8: Strong number check**
     * Initialize `strongSum` to 0.
     * While `num` is greater than 0:
       * Extract the last digit.
       * Calculate the factorial of the digit.
       * Add the factorial to `strongSum`.
       * Remove the last digit from `num`.
     * Compare `strongSum` with `num`.
     * Print whether `num` is a strong number or not.
   * **Case 9: Perfect number check**
     * Initialize `sumOfDivisors` to 0.
     * For each number `i` from 1 to `num - 1`:
       * If `num` is divisible by `i`, add `i` to `sumOfDivisors`.
     * Compare `sumOfDivisors` with `num`.
     * Print whether `num` is a perfect number or not.
   * **Case 10: Exit**
     * Print an exit message.

4. **End**
