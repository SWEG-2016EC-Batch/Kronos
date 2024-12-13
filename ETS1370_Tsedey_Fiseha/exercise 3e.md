pseudocode

1. Start

       • The program begins execution.

2. Variable Declaration

       • Several integer variables are declared:

       • number: to store the user input.

       • firstDigit: to store the first digit of the number.

       • lastDigit: to store the last digit of the number.

       • numDigits: to count the total number of digits in the number.

       • swappedNumber: to store the final result after swapping the digits.

3. User Input

       • The program prompts the user to enter an integer and reads it into the variable number.

4. Calculate Absolute Value

       • The absolute value of number is calculated and stored in absNumber using abs(number). This is done to simplify the extraction of digits, especially for negative numbers.

5. Find Last Digit

  • The last digit of the absolute number is found using:
  
    lastDigit = absNumber % 10;
  

• This operation gives the remainder when absNumber is divided by 10, which is effectively the last digit.

6. Find First Digit and Count Digits

       • The first digit is initialized to absNumber.

       • A loop is used to repeatedly divide firstDigit by 10 until it is less than 10, effectively isolating the first digit. Each division indicates that one digit has been removed, so we also increment numDigits to count how many times this division occurs.
  
6.1. Counting Digits

    • After exiting the loop, numDigits is incremented by one to account for the first digit that remains when firstDigit becomes less than 10.

 7. Prepare Swapped Number

        • The variable swappedNumber is initialized with absNumber.

        • The first digit is removed from its original position:
  
        swappedNumber -= firstDigit * pow(10, numDigits - 1);
  

• The last digit is removed:
  
    swappedNumber -= lastDigit;
  

• The first digit is added back at the position of the last digit:
  
     swappedNumber += firstDigit;                        
  

• The last digit is added back at the position of the first digit:
  
    swappedNumber += lastDigit * pow(10, numDigits - 1);
  

8.Handle Negative Input


    swappedNumber = -swappedNumber;



 9. Output Result

        • Finally, the program outputs the result, displaying the new number after swapping the first and last digits.

 10. End

    • The program terminates.

