▎Step-by-Step Algorithm:

1. Start 
2. Declare Variables:

       • float test, quiz, project, assignment, finalexam, total_mark: These variables will hold the scores for different components of the assessment and the total score.

3. Input for Test Score:

       • Use a labeled block (label1) to prompt the user to enter their test score out of 15%.

   • Read the input into the test variable.

   • Check if the input is valid:

       • If the input is not a number or if it is less than 0 or greater than 15, clear the error state of cin, ignore the invalid input, and prompt the user again.

       • Repeat until a valid input is received.

4. Input for Quiz Score:

       • Use a labeled block (label2) to prompt the user for their quiz score out of 5%.

       • Read the input into the quiz variable.

       • Perform a similar validation check as in step 3.

       • Repeat until a valid input is received.

5. Input for Project Score:

   • Use a labeled block (label3) to prompt the user for their project score out of 20%.

   • Read the input into the project variable.

       • Validate the input as before.
   
       • Repeat until a valid input is received.

6. Input for Assignment Score:

   • Use a labeled block (label4) to prompt for the assignment score out of 10%.

   • Read the input into the assignment variable.

       • Validate the input as before.

       • Repeat until a valid input is received.

7. Input for Final Exam Score:

   • Use a labeled block (label5) to prompt for the final exam score out of 50%.

   • Read the input into the finalexam variable.

       • Validate the input as before.

       • Repeat until a valid input is received.

8. Calculate Total Mark:

   • After all inputs are validated, calculate the total mark by adding up all individual scores:
     
        total_mark = test + quiz + project + assignment + finalexam;
     

9. Output Total Mark:

       • Print the total mark out of 100 to the console:
     
          cout << "your total mark out of 100 is:" << total_mark << endl;
     

10. Determine Grade Based on Total Mark:

    • Use a series of conditional statements (if, else if) to determine the letter grade based on the total mark:

        • If total_mark is between 90 and 100, print "your grade is A+".

        • If total_mark is between 80 and 89.99, print "your grade is A".

        • If total_mark is between 75 and 79.99, print "your grade is B+".

        • If total_mark is between 60 and 74.99, print "your grade is B".

        • If total_mark is between 55 and 59.99, print "your grade is C+".

        • If total_mark is between 45 and 54.99, print "your grade is C".

        • If total_mark is between 30 and 44.99, print "your grade is D".

        • If total_mark is below 30, print "your grade is F".

        • If none of these conditions are met (which shouldn't happen with valid inputs), print "invalid".

11. End.
