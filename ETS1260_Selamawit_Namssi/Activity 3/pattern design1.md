<div align ="center">
<h1>Pattern Design 1</h1>
<div align="left">
    <h2>Problem Analysis</h2>
    
  <h3>Input:</h3>
    <ul>
        <li>No user input is required; the program generates patterns based on fixed loops.</li>
    </ul>

   <h3>Output:</h3>
    <ul>
        <li>Several text-based patterns printed to the console:</li>
        <ul>
            <li>Pattern A: A fixed sequence of numbers (1 to 5) printed in 5 rows.</li>
            <li>Pattern B: A series of letters starting from 'A', printed in 4 rows.</li>
            <li>Pattern C: An increasing sequence of numbers printed in a triangular format.</li>
            <li>Decreasing Number Pattern: A right-aligned decreasing sequence of numbers.</li>
            <li>Letter Pattern A: A triangular pattern of letters from 'A' to 'E'.</li>
            <li>Letter Pattern B: A fixed sequence of lowercase letters printed in 5 rows.</li>
        </ul>
    </ul>

  <h3>Operations:</h3>
    <ul>
        <li>Generate Pattern A: Print numbers 1 to 5 in 5 rows.</li>
        <li>Generate Pattern B: Print letters starting from 'A' in 4 rows, incrementing the character in each iteration.</li>
        <li>Generate Pattern C: Print an increasing sequence of numbers in a triangular format.</li>
        <li>Generate Decreasing Number Pattern: Print decreasing numbers right-aligned.</li>
        <li>Generate Letter Pattern A: Print letters in a triangular format from 'A' to 'E'.</li>
        <li>Generate Letter Pattern B: Print lowercase letters 'a' to 'e' in 5 rows.</li>
    </ul>

  <h2>Pseudocode:</h2>
    <pre>
BEGIN 
    PRINT "Pattern A:"
    FOR i FROM 0 TO 4
        FOR j FROM 1 TO 5
            PRINT j
        END FOR
        PRINT newline
    END FOR

  PRINT "Pattern B:"
    SET ch = 'A'
    FOR i FROM 0 TO 3
        FOR j FROM 0 TO 5
            PRINT ch
            INCREMENT ch
        END FOR
        PRINT newline
    END FOR

  PRINT "Pattern C:"
    FOR i FROM 1 TO 5
        FOR j FROM 1 TO i
            PRINT j
        END FOR
        PRINT newline
    END FOR

  PRINT "Decreasing Number Pattern:"
    FOR i FROM 1 TO 5
        FOR j FROM 5 DOWNTO i + 1
            PRINT " "  // Print spaces for alignment
        END FOR
        FOR j FROM i DOWNTO 1
            PRINT j
        END FOR
        PRINT newline
    END FOR

  PRINT "Letter Pattern A:"
    FOR i FROM 'A' TO 'E'
        FOR j FROM 'A' TO i
            PRINT j
        END FOR
        PRINT newline
    END FOR

   PRINT "Letter Pattern B:"
    FOR i FROM 0 TO 4
        FOR j FROM 'a' TO 'e'
            PRINT j
        END FOR
        PRINT newline
    END FOR
END 
    </pre>
</body>
</html>

