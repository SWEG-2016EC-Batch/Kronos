pseudocode

1. Start : Begin execution of the program.

2. Declare Variables:

       • gross_salary (double)

       • work_hour (double)

       • extra_work_hour (double)

       • tax_rate (double)

       • pension (double)

       • tax (double)

       • bonus (double)

       • over_time_bonus_rate (double)

       • net_income (double)

       • income_salary (double)

       • employee_name (character array of size 40)

3. Input Employee Name:

       • Prompt the user to enter the employee's name.

       • Read and store the name in the employee_name variable.

4. Input Gross Salary:

       • Prompt the user to enter the employee's base salary in birr.

       • Read and store the gross salary in the gross_salary variable.

5. Input Work Hours:

       • Prompt the user to enter the number of work hours.

       • Read and store the work hours in the work_hour variable.

6. Check for Overtime:

   • If work_hour is greater than 40:

       • Prompt the user to enter the overtime bonus rate per hour.

       • Read and store this rate in over_time_bonus_rate.

       • Calculate extra_work_hour as work_hour - 40.

   • If not, set extra_work_hour to 0.

7. Determine Tax Rate:

       • If gross_salary is less than or equal to 200, set tax_rate to 0.

       • If gross_salary is between 200 and 600, set tax_rate to 0.1.

       • If gross_salary is between 600 and 1200, set tax_rate to 0.15.

       • If gross_salary is between 1200 and 2000, set tax_rate to 0.2.

       • If gross_salary is between 2000 and 3500, set tax_rate to 0.25.

       • If gross_salary is greater than 3500, set tax_rate to 0.3.

8. Calculate Bonus:

   • If work_hour is greater than 40:

       • Calculate bonus as extra_work_hour * over_time_bonus_rate.

   • If not, set bonus to 0.

9. Calculate Income Salary:

       • Calculate income_salary as bonus + gross_salary.

10. Calculate Pension:

        • Calculate pension as 7% of gross_salary,  pension = gross_salary * 0.07.

11. Calculate Tax:

        • Calculate tax as the product of income_salary and tax_rate,  tax = income_salary * tax_rate.

12. Calculate Net Income:

        • Calculate net_income as the difference between
           net_income = income_salary - pension - tax.

14. Output Results:

    • Print the following results:

        • Employee's gross salary.

        • Employee's bonus payment.

        • Employee's net income.

15.End
