<a name="readme-top"></a>

<div align="center">
  <h1><b> BMI calculator </b></h1>
  
<html>
<body>
<div align = "left">
<p> <h2> Problem analysis </h2> </p>
<head>
   
</head>
<body> </body>

<h4>Input</h4>
<ul>
    <li><strong>Weight:</strong> The weight of a person in kilograms.</li>
    <li><strong>Height:</strong> The height of a person in meters.</li>
</ul>

<h4>Output</h4>
<ul>
    <li><strong>BMI:</strong> The Body Mass Index of the person.</li>
    <li><strong>Status:</strong> A label indicating whether the individual is:
        <ul>
            <li>Underweight</li>
            <li>Normal weight</li>
            <li>Overweight</li>
        </ul>

</ul>

<h4> Operations </h4>
<pre>
1. Declare Inputs:
   - Define variables for weight and height.
2. Calculate BMI:
   - Use the formula:
     BMI = weight / (height * height)
3. Label the BMI:
     - Based on the calculated BMI, determine the status:
     - If BMI < 18.5: Label as Underweight.
     - If 18.5 ≤ BMI ≤ 24.9: Label as Normal weight.
     - If BMI > 24.9: Label as Overweight.
4. Ask for User Consent:
   - Prompt the user to decide if they want to perform another calculation or terminate the program.
   - If the user's choice is yes, continue the program.
   - Otherwise, terminate the program.
</pre>
</body>
</html>
<h2>Pseudocode for BMI Calculation</h2>
<pre>
BEGIN
    SET choice = "yes"
    WHILE choice == "yes" DO
        OUTPUT "Enter the weight of a person in kilograms"
        INPUT weight
        OUTPUT "Enter the height of a person in meters"
        INPUT height
        BMI = weight / (height * height)
        OUTPUT "The Body Mass Index (BMI) is: " + BMI
        // Determine BMI category
        IF BMI < 18.5 THEN
            OUTPUT "status = you are UNDERWEIGHT"
        ELSE IF BMI >= 18.5 AND BMI <= 24.9 THEN
            OUTPUT "status = you are NORMAL WEIGHT"
        ELSE
            OUTPUT "status = you are OVERWEIGHT"
        END IF
        // Ask user for consent to continue
        OUTPUT "To proceed with the calculation, please indicate your consent by writing yes or pressing any key to terminate the process."
        INPUT choice
    END WHILE
END
</pre>

</body>
</html>
<html>
  <h2> Flowchart of BMI</h2>
  <div align = "left">
  <a href="https://github.com/user-attachments/assets/5706e36f-dd20-46fc-84ad-bd576ffef252" target="_blank">Click here to see the flowchart of the BMI calculator </a>
    
</html>
