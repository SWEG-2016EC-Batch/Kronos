Step-by-Step Algorithm:

1. Start
2. Declare Variables:

       • int number: This variable will hold the user-input number.

       • int sum = 0
3. Prompt User for Input:

       • Output the message "Enter a number: " to the console.

       • Read an integer input from the user and store it in the variable number.

4. Find Proper Divisors and Calculate Their Sum:

       • Use a for loop to iterate through all integers from 1 to number - 1 (i.e., i ranges from 1 to number - 1).

       • In each iteration, check if i is a divisor of number using the condition if (number % i == 0).

       • If the condition is true, it means that i is a proper divisor of number. Add i to sum: sum += i;.

5. Check If the Number is Perfect:

       • After exiting the loop, compare the calculated sum with the original number.

       • If sum is equal to number, print "it is perfect number".

       • Otherwise, print "it is not perfect number".

6. End 
