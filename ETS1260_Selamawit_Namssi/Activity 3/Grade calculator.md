<div align="center">
<h1> Grade Calculator </h1>
<div align ="left">
  
  <h2>Problem Analysis</h2>
    <h3>Input:</h3>
    <ul>
        <li>Scores for various assessments:</li>
        <ul>
            <li>Test score (float)</li>
            <li>Quiz score (float)</li>
            <li>Project score (float)</li>
            <li>Assignment score (float)</li>
            <li>Final Exam score (float)</li>
        </ul>
    </ul>

   <h3>Output:</h3>
    <ul>
        <li>Total marks calculated based on weighted assessments.</li>
        <li>Corresponding letter grade based on the total marks.</li>
    </ul>

   <h3>Operations:</h3>
    <ol>
        <li>Read the scores for each assessment.</li>
        <li>Compute the total marks using the specified weightages:
            <ul>
                <li>Test: 15%</li>
                <li>Quiz: 5%</li>
                <li>Project: 20%</li>
                <li>Assignment: 10%</li>
                <li>Final Exam: 50%</li>
            </ul>
        </li>
        <li>Print the total marks.</li>
        <li>Determine and print the corresponding letter grade based on the total marks.</li>
    </ol>

   <h2>Pseudocode:</h2>
    <pre>
      
BEGIN
    DECLARE test, quiz, project, assignment, finalExam AS FLOAT
    PRINT "Enter the score for Test:"
    INPUT test

  PRINT "Enter the score for Quiz:"
    INPUT quiz

  PRINT "Enter the score for Project:"
    INPUT project

  PRINT "Enter the score for Assignment:"
    INPUT assignment

  PRINT "Enter the score for Final Exam:"
    INPUT finalExam

  totalMark = (test * 0.15) + (quiz * 0.05) + (project * 0.20) + (assignment * 0.10) + (finalExam * 0.50)

  PRINT "Total Marks: ", totalMark

  IF totalMark >= 90 THEN
        PRINT "A+"
    ELSE IF totalMark >= 80 THEN
        PRINT "A"
    ELSE IF totalMark >= 75 THEN
        PRINT "B+"
    ELSE IF totalMark >= 60 THEN
        PRINT "B"
    ELSE IF totalMark >= 55 THEN
        PRINT "C+"
    ELSE IF totalMark >= 45 THEN
        PRINT "C"
    ELSE IF totalMark >= 30 THEN
        PRINT "D"
    ELSE 
        PRINT "F"
    END IF
END
    </pre>
</body>
</html>
