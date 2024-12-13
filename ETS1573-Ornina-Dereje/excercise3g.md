pseudocode

1. Start 
2. Declare Variables: 

       • int number: This will hold the user-input number.

       • int reverse = 0: This will hold the reversed version of the number.

       • int original: This will store the original number for comparison later.

3. Prompt User for Input: 

       • Output the message "Enter a number: " to the console.

       • Read an integer input from the user and store it in the variable number.

4. Store Original Number: 

       • Assign the value of number to original to keep a copy of the original input for later comparison.

5. Reverse the Number:

   • Use a while loop that continues as long as number is not equal to 0.

     • Inside the loop:

       1. Calculate the last digit of number by using the modulus operator: digit = number % 10.

       2. Update reverse by multiplying it by 10 (shifting its digits left) and adding the last digit: reverse = reverse * 10 + digit.

       3. Remove the last digit from number by performing integer division by 10: number = number / 10.

6. Check for Palindrome:

       • After exiting the loop, compare the original number with the reverse number.

       • If they are equal (original == reverse), it means the number is a palindrome.

       • Output "it is palindrome number".

       • If they are not equal, output "it is not palindrome number".

7. End 
