<a name="readme-top"></a>

<div align="center">
  <h1><b> character calculator </b></h1>
  
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
    <li>Transmission Time:</li>
    </ul>

<h4>Operations:</h4>

<ul>>
   <li>Calculate Transmission Time:</li> 
   <pre> Formula: transmissionTime = totalCharacters / transmissionRate </pre>
         Convert Transmission Time to days, Hours, Minutes, and Seconds:
  <li>calculate days:<pre>days=total_second/(24*3600)</pre></li>
  <li>calculate:<pre>total_seconds%=(24*3600)</pre></li>
    <li>Calculate hours: <pre>hours = total_seconds / 3600</pre> </li>
  <li>calculate:<pre>total_second%=3600</pre></li>
    <li>Calculate minutes: <pre>minutes = total_seconds  / 60</pre> </li>
    <li>Calculate seconds: <pre>seconds = total_seconds % 60</pre> </li>
    <li>Display the calculated transmission time.</li>
    </ul>

</body>
</html>

<h2>Pseudocode for file transmission Calculation</h2>
<pre>
BEGIN 
    initialize transmissionRate AS integer = 960 // in characters per second
    initilalize bytesPerCharacter AS integer = 1 // 1 character = 1 byte
    declare fileSize AS long integer
    declare transmissionTime AS long integer
    decleare days AS long integer
    declare hours AS long integer
    declare minutes AS long integer
    declare seconds AS long integer 
  
  output "Enter the file size in bytes: "
  input fileSize
    
   totalCharacters = fileSize / bytesPerCharacter
   transmissionTime = totalCharacters / transmissionRate
    
   hours = transmissionTime / 3600
   minutes = (transmissionTime % 3600) / 60
   seconds = transmissionTime % 60

  output "Time to send the file: " + hours + " hours, " + minutes + " minutes, " + seconds + " seconds."
END
</pre>

</body>
</html>
<html>
  <h2> Flowchart of BMI</h2>
  <div align = "left">
  <a href="<a name="readme-top"></a>

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
    <li>Transmission Time:</li>
    </ul>

<h4>Operations:</h4>

<ul>
    <li>Read the file size in bytes from the user.</li>
    <li>Calculate Total Characters:</li>
   <pre> Formula: totalCharacters = fileSize / bytesPerCharacter </pre>
   <li>Calculate Transmission Time:</li> 
   <pre> Formula: transmissionTime = totalCharacters / transmissionRate </pre>
         Convert Transmission Time to Hours, Minutes, and Seconds:
    <li>Calculate hours: <pre>hours = transmissionTime / 3600</pre> </li>
    <li>Calculate minutes: <pre>minutes = (transmissionTime % 3600) / 60</pre> </li>
    <li>Calculate seconds: <pre>seconds = transmissionTime % 60</pre> </li>
    <li>Display the calculated transmission time.</li>
    </ul>

</body>
</html>

<h2>Pseudocode for file transmission Calculation</h2>
<pre>
BEGIN 
    initialize transmissionRate AS integer = 960 // in characters per second
    initilalize bytesPerCharacter AS integer = 1 // 1 character = 1 byte
    declare fileSize AS long integer
    declare totalCharacters AS long integer
    declare transmissionTime AS long integer
    declare hours AS long integer
    declare minutes AS long integer
    declare seconds AS long integer 
  
  output "Enter the file size in bytes: "
  input fileSize
    
   totalCharacters = fileSize / bytesPerCharacter
   transmissionTime = totalCharacters / transmissionRate
    
   hours = transmissionTime / 3600
   minutes = (transmissionTime % 3600) / 60
   seconds = transmissionTime % 60

  output "Time to send the file: " + hours + " hours, " + minutes + " minutes, " + seconds + " seconds."
END
</pre>

</body>
</html>
<html>
  <h2> Flowchart of BMI</h2>
  <div align = "left">
  <a href="https://github.com/user-attachments/assets/2178f37a-4666-4008-9705-9639de9750aa
">Click here to see the flowchart of the file transmission calculator </a>
    
    
</html>
