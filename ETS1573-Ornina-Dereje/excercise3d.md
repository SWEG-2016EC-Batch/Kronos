pseudocode

1. Start:

       • Begin program execution.

2. Declare Variables:

       • Declare the following integer variables:
   
       • number: an unsigned integer to store the user input.

       • sum: an integer to store the sum of the first and last digits.

       • remainder: an integer to hold the last digit during processing.

       • store: an integer initialized to 0 to count the number of digits.

       • Declare an integer variable temp to hold the last digit of the original number.

4. User Prompt:

       • Print the message: "Enter an integer: ".

       • Read the integer value into number from user input.

5. Extract Last Digit:

       • Calculate the last digit of number using:

       • temp = number % 10;

       • This operation gives the last digit of the current value of number.

6. While Loop:

       • Start a loop that continues as long as number is greater than 0:

       • This loop will process each digit of the number.

7. Extract Digits:

       • Inside the loop:

       • Calculate the last digit of number using:

       • remainder = number % 10;

     • Increment the digit count using:

       • store++;

     • Remove the last digit from number using:

       • number /= 10;

8. Check for First Digit:

       • After exiting the loop, check if remainder is between 1 and 9 (i.e., it is a valid single digit):

       • if (remainder > 0 && remainder < 10) { ... }

       • If true, proceed to the next steps; otherwise, skip to step 10.

9. Output First and Last Digits:

       • Print the first digit using:

       • cout << "the first digit is: " << remainder << endl;

       • Print the last digit using:

       • cout << "the last digit is: " << temp << endl;

10. Calculate Sum:

   • Calculate the sum of the first and last digits:

     • sum = temp + remainder;

11. Output Sum:

        • Print the sum using:

        • cout << "The sum of the first and last digit is: " << sum << endl;

12. End:

        • Return 0 to indicate successful completion of the program.
