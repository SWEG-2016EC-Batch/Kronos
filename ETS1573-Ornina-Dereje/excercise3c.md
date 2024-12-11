▎pseudocode
1. Start:

       • Begin program execution.

2. Declare Variables:

       • Declare three integer variables:

       • number: to store the input integer from the user.

       • reminder: to hold the last digit of number.

       • product: a long integer initialized to 1 to store the product of even digits.

3. User Prompt:

       • Print the message: "please enter an integer: ".

       • Read the integer value into number from user input.

4. While Loop:

       • Start a loop that continues as long as number is greater than 0:

       • This loop will process each digit of the number.

5. Extract Last Digit:

       • Inside the loop, calculate the last digit of number using:

       • reminder = number % 10;

       • This operation gives the last digit of the current value of number.

6. Remove Last Digit:

       • Update number by removing the last digit using:

       • number /= 10;

       • This operation effectively shifts the digits to the right.

7. Check for Even Digit:

       • Check if the extracted digit (reminder) is even using:

       • if (reminder % 2 == 0) { ... }

       • If it is even, proceed to the next step; otherwise, skip to step 9.

8. Update Product:

       • If the digit is even, update product by multiplying it with the even digit:

       • product *= reminder;

       • Print the current product using:
  
       • cout << "product of even integer numbers is " << product << endl;

9. End While Loop:

       • The loop continues until all digits have been processed (i.e., until number becomes 0).

10. End:

        • Return 0 to indicate successful completion of the program.

