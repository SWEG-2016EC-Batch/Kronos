<a name="readme-top"></a>

<div align="center">
  <h1><b> File transmission calculator </b></h1>
  
<html>
<body>
<div align = "left">
<p> <h2> Problem analysis </h2> </p>

<h4> Input: </h4>

  <ul>
   <li> File Size: </li>
   </ul>

<h4>Output:</h4>

   <ul>
    <li>File transfer Time:</li>
    </ul>

<h4>Operations:</h4>

<ul>
    <li>Read the file size in bytes from the user.</li>
    <li>time in seconds :</li>
   <pre> Formula: time in seconds = static_cast<double>(fileSize) / transmissionrate </pre>
   Convert time in seconds to Hours and Minutes:
    <li>Calculate hours: <pre>static_cast<double>(ceil(time in minutes/60))</pre> </li>
    <li>Calculate minutes: <pre> static_cast<double>(ceil(time in seconds/60))</pre> </li>
    <li>Display the calculated file transfer time.</li>
    </ul>

</body>
</html>

<h2>Pseudocode for file transfer time Calculation</h2>
<pre>
BEGIN 
    initialize transmissionRate AS integer = 960 // in characters per second
    declare fileSize AS integer
    declare time in seconds AS integer
    declare hours AS integer
    declare minutes AS integer
    
  
  output "Enter the file size in bytes: "
  input fileSize
    

   time in seconds =static_cast<double>(fileSize) / transmissionrate 
    
  time in hours = static_cast<double>(ceil(time in minutes/60))
  time in minutes = static_cast<double>(ceil(time in seconds/60))
   
  output "Time to send the file: " time in hours :  " time in hours, " time in minutes : " time in  minutes, " time in seconds : "time in seconds."
END
</pre>

</body>
</html>
<html>
  <h2> Flowchart of BMI</h2>
  <div align = "left">
  <a href=" ">Click here to see the flowchart of the file transmission calculator </a>
    
</html>
