<a name="readme-top"></a>

<div align="center">
  <h1><b> File transmission calculator </b></h1>
  
<html>
<body>
<div align = "left">
<p> <h2> Problem analysis </h2> </p>

<h4>Input:</h4>

<u1>
   <li> File Size: </li>
</u1>

<h4>Output:</h4>
<u1>
<li>Transmission Time:</li>
</ul>

<h4>Operations:</h4>
<u1>
    <li>Read the file size in bytes from the user.</li>
    <li>Calculate Total Characters:</li>
</u1>
<pre>
Formula:
totalCharacters = fileSize / bytesPerCharacter
</pre>
   <li>Calculate Transmission Time:</li>
<pre>
Formula:
transmissionTime = totalCharacters / transmissionRate
</pre>
   <li>Convert Transmission Time to Hours, Minutes, and Seconds:</li>
    <li><strong>Calculate hours:</strong>
        <pre>hours = transmissionTime / 3600</pre>
    </li>
    <li><strong>Calculate minutes:</strong>
        <pre>minutes = (transmissionTime % 3600) / 60</pre>
    </li>
    <li><strong>Calculate seconds:</strong>
        <pre>seconds = transmissionTime % 60</pre>
    </li>
</ul>

<ul>
    <li>Display the calculated transmission time.</li>
</ul>

</body>
</html>
<h2>Pseudocode for file transmission Calculation</h2>
<pre>
BEGIN
    
    DECLARE transmissionRate AS INTEGER = 960 // in characters per second
    DECLARE bytesPerCharacter AS INTEGER = 1 // 1 character = 1 byte
    DECLARE fileSize AS LONG INTEGER
    DECLARE totalCharacters AS LONG INTEGER
    DECLARE transmissionTime AS LONG INTEGER
    DECLARE hours AS LONG INTEGER
    DECLARE minutes AS LONG INTEGER
    DECLARE seconds AS LONG INTEGER
    
    OUTPUT "Enter the file size in bytes: "
    INPUT fileSize
    
    totalCharacters = fileSize / bytesPerCharacter
    transmissionTime = totalCharacters / transmissionRate
    
    hours = transmissionTime / 3600
    minutes = (transmissionTime % 3600) / 60
    seconds = transmissionTime % 60

    OUTPUT "Time to send the file: " + hours + " hours, " + minutes + " minutes, " + seconds + " seconds."
END
</pre>

</body>
</html>
<html>
  <h2> Flowchart of BMI</h2>
  <div align = "left">
  <a href="https://github.com/user-attachments/assets/0330b22f-e27a-49e3-8665-4919b50282cc" target="_blank">Click here to see the flowchart of the BMI calculator </a>
    
</html>

