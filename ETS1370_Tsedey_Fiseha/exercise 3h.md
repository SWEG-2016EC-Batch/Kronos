pseudocode
1. Start
2. Declare Variables:

       • int number: This variable will hold the user-input positive integer.

       • int digit: This variable will temporarily hold each digit extracted from number.

       • int frequency[10] = {0}: This array is initialized with a size of 10, and all elements are set to 0. It will be used to count the frequency of each digit (0-9).

3. Prompt User for Input:

       • Output the message "Enter a positive integer: " to the console.

       • Read an integer input from the user and store it in the variable number.

4. Count Digit Frequencies:

   • Use a while loop that continues as long as number is not equal to 0.

     • Inside the loop:

       1. Calculate the last digit of number using the modulus operator: digit = number % 10.

       2. Increment the frequency count for that digit: frequency[digit]++.

       3. Remove the last digit from number by performing integer division by 10: number /= 10.

5. Output the Results:

   • Print a header for the output table: "Digit\tFrequency".

   • Use a for loop to iterate through each digit from 0 to 9.

       • For each digit, check if its frequency is not zero (if (frequency[i] != 0)).

       • If the frequency is non-zero, output the digit and its corresponding frequency from the frequency array.

6. End
