<a name="readme-top"></a>

<div align="center">
  <h1><b> Salary calculator </b></h1>
  
<html>
<body>
<div align = "left">

<h2>Problem Analysis</h2>

<h4>Input:</h4>

  <ul>
    <li>First Name: The first name of the employee.</li>
    <li>Last Name: The last name of the employee.</li>
    <li>Weekly Working Hours</li>
    <li> Bonus Rate:</li>
    <li>Base Salary</li>
</ul>

<h4>Output:</h4>

<ul>
    <li>Full Name: The concatenated first and last name of the employee.</li>
    <li>Bonus Payment:</li>
    <li>Gross Salary:</li>
    <li>Net Salary:</li>
</ul>

<h4>Operations:</h4>

<ul>
    <li>Read the first name from the user.</li>
    <li>Read the last name from the user.</li>
    <li>Read the weekly working hours from the user.</li>
    <li>Read the bonus rate per hour from the user.</li>
    <li>Read the base salary from the user.</li>
</ul>

<ul>
    <li><strong>Calculate Bonus Payment:</strong>
        <pre>bonusPayment = bonusRate * workingHours</pre>
    </li>
    <li><strong>Calculate Gross Salary:</strong>
        <pre>grossSalary = baseSalary + bonusPayment</pre>
    </li>
    <li><strong>Calculate Pension:</strong>
        <pre>pension = baseSalary * 0.05</pre>
    </li>
    <li><strong>Calculate Tax:</strong>
        <pre>tax = baseSalary * 0.15</pre>
    </li>
    <li><strong>Calculate Net Salary:</strong>
        <pre>netSalary = grossSalary - (pension + tax)</pre>
    </li>
</ul>

<ul>
    <li>Display the employee's full name.</li>
    <li>Display the bonus payment, gross salary, and net salary of the employee.</li>
</ul>

</body>
</html>

<h2>Pseudocode for Salary Calculation</h2>

<pre>
BEGIN

    // Declare variables
    DECLARE FirstName, LastName AS STRING
    DECLARE workingHours AS DOUBLE
    DECLARE bonusRate AS DOUBLE
    DECLARE baseSalary AS DOUBLE
    DECLARE bonusPayment AS DOUBLE
    DECLARE grossSalary AS DOUBLE
    DECLARE pension AS DOUBLE
    DECLARE tax AS DOUBLE
    DECLARE netSalary AS DOUBLE
    DECLARE FullName AS STRING
    
    // Input first name
    OUTPUT "Enter the first name of the person"
    INPUT FirstName
    
    // Input last name
    OUTPUT "Enter the last name of the person"
    INPUT LastName
    
    // Concatenate first and last name
    FullName = FirstName + " " + LastName
    
    // Input weekly working hours
    OUTPUT "Enter weekly working hours:"
    INPUT workingHours
    
    // Input bonus rate per hour
    OUTPUT "Enter bonus rate per hour:"
    INPUT bonusRate

    // Input base salary
    OUTPUT "Enter base salary:"
    INPUT baseSalary
    
    // Calculate bonus payment
    bonusPayment = bonusRate * workingHours
    
    // Calculate gross salary
    grossSalary = baseSalary + bonusPayment
    
    // Calculate pension and tax
    pension = baseSalary * 0.05
    tax = baseSalary * 0.15
    
    // Calculate net salary
    netSalary = grossSalary - (pension + tax)
    
    // Output payment details
    OUTPUT "Dear " + FullName + ", your payment for this month is:"
    OUTPUT "Bonus Payment: $" + bonusPayment
    OUTPUT "Gross Salary: $" + grossSalary
    OUTPUT "Net Salary: $" + netSalary

END
</pre>

</body>
</html>
<html>
  <h2> Flowchart of BMI</h2>
  <div align = "left">
  <a href="https://github.com/user-attachments/assets/eda39111-6c68-4bd0-9851-edede2a93f36" target="_blank">Click here to see the flowchart of the BMI calculator </a>
    
</html>

