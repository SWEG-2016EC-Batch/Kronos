pseudocode
1. Start
2. Declare Variables:

       • int number: This variable will hold the user-input number.

       • int factorial = 1: This variable will store the factorial of the input number, initialized to 1.

       • int sum = 0: This variable will hold the sum of the digits of the factorial, initialized to 0.

3. Prompt User for Input:

       • Output the message "enter number: " to the console.

   • Read an integer input from the user and store it in the variable number.

4. Calculate Factorial:

       • Use a for loop to calculate the factorial of number.

       • The loop runs from i = 1 to i = number.

       • In each iteration, multiply factorial by i: factorial *= i;.

5. Sum the Digits of the Factorial:

   • Use a while loop that continues as long as factorial is not equal to 0.

     • Inside the loop:

       1. Calculate the last digit of factorial using the modulus operator: int digit = factorial % 10;.

       2. Add that digit to sum: sum += digit;.

       3. Remove the last digit from factorial by performing integer division by 10: factorial /= 10;.

6. Check If Strong Number:

       • After exiting the loop, compare the calculated sum with the original number.

       • If sum is equal to number, print "strong number".

       • Otherwise, print "not strong number".

7. End 
