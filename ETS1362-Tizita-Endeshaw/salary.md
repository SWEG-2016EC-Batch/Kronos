<a name="readme-top"></a>

<div align="center">
  <h1><b> Salary calculator </b></h1>
  
<html>
<body>
<div align = "left">

<h2>Problem Analysis</h2>

<h4>Input:</h4>

  <ul>
    <li> Name: enter name of the employee.</li>
    <li>Weekly Working Hours</li>
    <li> Bonus Rate:</li>
    <li>Base Salary</li>
</ul>

<h4>Output:</h4>

<ul>
    <li> Name: name of the employee.</li>
    <li>Bonus Payment:</li>
    <li>Gross Salary:</li>
    <li>Net Salary:</li>
</ul>

<h4>Operations:</h4>

<ul>
    <li>Read name from the user.</li>
    <li>Read the weekly working hours, the bonus rate and base salary from the user.</li>
    <li>Calculate Bonus Payment: <pre> bonus_payment = bonus_rate * working_hours</pre>  </li>
    <li>Calculate Gross Salary: <pre> gross_salary = base_salary + bonus_payment</pre></li>
    <li>Calculate Pension: <pre> pension = base_salary * 0.05</pre> </li>
    <li>Calculate Tax: <pre> tax = gross_salary * 0.15</pre> </li>
    <li>Calculate Net Salary: <pre> net_salary = gross_salary - (pension + tax)</pre> </li>
    <li>Display the employee's full name.</li>
    <li>Display the bonus payment, gross salary, and net salary of the employee.</li>
</ul>

</body>
</html>

<h2>Pseudocode for Salary Calculation</h2>

<pre>
BEGIN

    declare name AS string
    declare working_hours AS double
    declare bonus_rate AS double
    declare base_salary AS double
    declare bonus_payment AS double
    declare gross_salary AS double
    declare pension AS double
    declare tax AS double
    declare net_salary AS double
    
    output "pls Enter your name "
    input name
    
      output "Enter weekly working hours:"
    input working_hours
    output "Enter bonus rate per hour:"
    input bonus_rate
    output "Enter base salary:"
    input base_salary
    
    // Calculate bonus payment, grosssalary, pension, tax and netsalary
    bonus_payment = bonus_rate * working_hours
    gross_salary = base_salary + bonus_payment
    pension = base_salary * 0.05
    tax = gross_salary * 0.15
    net_salary = gross_salary - (pension + tax)
    
    // OUTPUT "Dear Mr/s " name  ", your net salary is:"
    OUTPUT "Bonus Payment : " + bonus_payment
    OUTPUT "Gross Salary: " + gross_salary
    OUTPUT "Net Salary: " + net_salary

END
</pre>

</body>
</html>
<html>
  <h2> Flowchart of SALARY </h2>
  <div align = "left">
  <a href="https://1drv.ms/i/c/105b6da710b596d0/EZQR-xfiwXpJvNKERilG-akB-TcnwIxxRnU4D3JQ6jFi7w?e=oNBAA6 ">Click here to see the flowchart of the salary calculator </a>
    
</html>
