<a name="readme-top"></a>

<div align="center">
  <h1><b> BMI calculator </b></h1>
  
<html>
<body>
<div align = "left">
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Problem Analysis for Salary Calculation</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            margin: 20px;
        }
        h1, h2, h3 {
            color: #007bff;
        }
        pre {
            background-color: #f4f4f4;
            border-left: 4px solid #007bff;
            padding: 10px;
            overflow-x: auto;
        }
    </style>
</head>
<body>

<h1>Problem Analysis</h1>

<h2>Problem Statement:</h2>
<p>The program calculates the total salary of an employee based on their working hours, bonus rate, and base salary. It computes the bonus payment, gross salary, pension, tax, and net salary, and then displays the results.</p>

<h2>Input:</h2>
<ul>
    <li><strong>First Name:</strong>
        <ul>
            <li><strong>Description:</strong> The first name of the employee.</li>
            <li><strong>Type:</strong> string</li>
            <li><strong>Example:</strong> "John"</li>
        </ul>
    </li>
    <li><strong>Last Name:</strong>
        <ul>
            <li><strong>Description:</strong> The last name of the employee.</li>
            <li><strong>Type:</strong> string</li>
            <li><strong>Example:</strong> "Doe"</li>
        </ul>
    </li>
    <li><strong>Weekly Working Hours:</strong>
        <ul>
            <li><strong>Description:</strong> The number of hours the employee worked in a week.</li>
            <li><strong>Type:</strong> double</li>
            <li><strong>Example:</strong> 40.0 (hours)</li>
        </ul>
    </li>
    <li><strong>Bonus Rate:</strong>
        <ul>
            <li><strong>Description:</strong> The bonus paid per hour worked.</li>
            <li><strong>Type:</strong> double</li>
            <li><strong>Example:</strong> 5.0 (dollars per hour)</li>
        </ul>
    </li>
    <li><strong>Base Salary:</strong>
        <ul>
            <li><strong>Description:</strong> The fixed salary of the employee before bonuses and deductions.</li>
            <li><strong>Type:</strong> double</li>
            <li><strong>Example:</strong> 1000.0 (dollars)</li>
        </ul>
    </li>
</ul>

<h2>Output:</h2>
<ul>
    <li><strong>Full Name:</strong>
        <ul>
            <li><strong>Description:</strong> The concatenated first and last name of the employee.</li>
            <li><strong>Format:</strong> "First Last"</li>
            <li><strong>Example Output:</strong> "Dear John Doe, your payment for this month is:"</li>
        </ul>
    </li>
    <li><strong>Bonus Payment:</strong>
        <ul>
            <li><strong>Description:</strong> The total bonus earned by the employee based on hours worked and bonus rate.</li>
            <li><strong>Type:</strong> double</li>
            <li><strong>Example Output:</strong> "Bonus Payment: $200"</li>
        </ul>
    </li>
    <li><strong>Gross Salary:</strong>
        <ul>
            <li><strong>Description:</strong> The total salary before deductions, including the base salary and bonus payment.</li>
            <li><strong>Type:</strong> double</li>
            <li><strong>Example Output:</strong> "Gross Salary: $1200"</li>
        </ul>
    </li>
    <li><strong>Net Salary:</strong>
        <ul>
            <li><strong>Description:</strong> The total salary after deductions for pension and tax.</li>
            <li><strong>Type:</strong> double</li>
            <li><strong>Example Output:</strong> "Net Salary: $1050"</li>
        </ul>
    </li>
</ul>

<h2>Operations:</h2>
<h3>Input Operations:</h3>
<ul>
    <li>Read the first name from the user.</li>
    <li>Read the last name from the user.</li>
    <li>Read the weekly working hours from the user.</li>
    <li>Read the bonus rate per hour from the user.</li>
    <li>Read the base salary from the user.</li>
</ul>

<h3>Calculation Operations:</h3>
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

<h3>Output Operation:</h3>
<ul>
    <li>Display the employee's full name.</li>
    <li>Display the bonus payment, gross salary, and net salary in a formatted message.</li>
</ul>

</body>
</html>
<h1>Pseudocode for Salary Calculation</h1>

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
  <a href="https://github.com/user-attachments/assets/5706e36f-dd20-46fc-84ad-bd576ffef252" target="_blank">Click here to see the flowchart of the BMI calculator </a>
    
</html>

