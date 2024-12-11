pseudocode

1. Start:

       • Begin program execution.

2. Declare Variables:

       • Declare three integer variables:

       • number: to store the input number.

       • remainder: to hold the last digit of number.

       • reversed_number: to hold the reversed number (initialize it to 0).

3. User Prompt:

       • Print the prompt message: "please enter a number: ".

       • Read the integer value into number from user input.

4. While Loop:

       • Start a loop that continues as long as number is not equal to 0:

       • This loop will process each digit of the number.

5. Extract Last Digit:

       • Inside the loop, calculate the last digit of number using:

       • remainder = number % 10;

       • This operation gives the last digit of the current value of number.

6. Remove Last Digit:

       • Update number by removing the last digit using:

       • number /= 10;

       • This operation effectively shifts the digits to the right.

7. Build Reversed Number:

       • Update reversed_number by appending the extracted last digit:

       • reversed_number = (reversed_number * 10) + remainder;

       • This operation shifts the existing digits in reversed_number to the left and adds the new last digit.

8. End While Loop:

       • The loop continues until all digits have been processed (i.e., until number becomes 0).

9. Output Result:

       • After exiting the loop, print the reversed number using:

       • cout << "the reverse is: " << reversed_number;

10. End:

        • Return 0 to indicate successful completion of the program.
