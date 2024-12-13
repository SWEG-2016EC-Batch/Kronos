<div align="center">
<h1> Net Pay </h1>
<div align="left">

<h2>Problem Analysis</h2>
    <h3>Input</h3>
    <ul>
        <li><strong>Basic Salary</strong>: The fixed salary of the employee before any additional compensation.</li>
        <li><strong>Worked Hours</strong>: The total number of hours the employee has worked.</li>
        <li><strong>Bonus Rate</strong>: The additional pay rate for each hour worked over 40 hours.</li>
    </ul>
    <h3>Output</h3>
    <ul>
        <li><strong>Gross Salary</strong>: The total salary before deductions, calculated as <code>basic_salary + bonus</code>.</li>
        <li><strong>Pension Deduction</strong>: The amount deducted for pension, calculated as 7% of the basic salary.</li>
        <li><strong>Income Tax Deduction</strong>: The amount deducted for tax based on the gross salary.</li>
        <li><strong>Net Salary</strong>: The total salary after deductions, calculated as <code>gross_salary - pension - income_tax</code>.</li>
    </ul>

  <h3>Operations</h3>
    <ol>
        <li>Calculate the bonus based on hours worked (if more than 40).</li>
        <li>Calculate the gross salary by adding the basic salary and bonus.</li>
        <li>Calculate the pension deduction as 7% of the basic salary.</li>
        <li>Determine the tax rate based on the gross salary.</li>
        <li>Calculate the income tax based on the gross salary and the determined tax rate.</li>
        <li>Calculate the net salary by subtracting the pension and income tax from the gross salary.</li>
    </ol>
    <h2>Pseudocode</h2>
    <pre>
BEGIN
    PRINT "Enter basic salary:"
    READ basic_salary
    PRINT "Enter worked hours:"
    READ worked_hours
    PRINT "Enter bonus rate per hour:"
    READ bonus_rate
    IF worked_hours > 40 THEN
        extra_hours = worked_hours - 40
        bonus = extra_hours * bonus_rate
    ELSE
        bonus = 0
    ENDIF
    gross_salary = basic_salary + bonus
    pension = basic_salary * 0.07
    IF gross_salary <= 200 THEN
        tax_rate = 0
    ELSE IF gross_salary <= 600 THEN
        tax_rate = 0.10
    ELSE IF gross_salary <= 1200 THEN
        tax_rate = 0.15
    ELSE IF gross_salary <= 2000 THEN
        tax_rate = 0.20
    ELSE IF gross_salary <= 3500 THEN
        tax_rate = 0.25
    ELSE
        tax_rate = 0.30
ENDIF
    income_tax = gross_salary * tax_rate
    net_salary = gross_salary - pension - income_tax
    PRINT "Gross Salary:", gross_salary
    PRINT "Pension Deduction:", pension
    PRINT "Income Tax Deduction:", income_tax
    PRINT "Net Salary:", net_salary
END
    </pre>
</body>
</html>
        
