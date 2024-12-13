<div align ="center">
<h1>Pattern Design 2</h1>
<div align="left">

  <h2>Problem Analysis</h2>

   <h3>Input:</h3>
    <ul>
        <li>The user is prompted to enter choices to select different patterns.</li>
        <li>Depending on the chosen pattern, the user may also be prompted to enter:
            <ul>
                <li>The number of rows for patterns A, C, inverted number pattern, inverted half pyramid, full pyramid, inverted full pyramid, hollow full pyramid, number pattern, and letter pattern A.</li>
                <li>The dimensions (rows and columns) for the hollow rectangle.</li>
            </ul>
        </li>
    </ul>

   <h3>Output:</h3>
    <ul>
        <li>Various text-based patterns printed to the console based on user selections:</li>
        <ul>
            <li>Pattern A: A fixed sequence of numbers printed in specified rows.</li>
            <li>Pattern B: A series of letters starting from 'A', printed in a fixed number of rows.</li>
            <li>Pattern C: An increasing sequence of numbers printed in a triangular format.</li>
            <li>Inverted Number Pattern: A triangle of numbers printed in decreasing order.</li>
            <li>Hollow Rectangle: A rectangle made of asterisks with hollow spaces inside.</li>
            <li>Inverted Half Pyramid: A pyramid shape made of asterisks, inverted.</li>
            <li>Hollow Inverted Half Pyramid: An inverted half pyramid with hollow spaces.</li>
            <li>Full Pyramid: A traditional pyramid shape made of asterisks.</li>
            <li>Inverted Full Pyramid: An inverted version of the full pyramid.</li>
            <li>Hollow Full Pyramid: A full pyramid with hollow spaces except for the base.</li>
            <li>Decreasing Number Pattern: A right-aligned triangle of decreasing numbers.</li>
            <li>Letter Pattern A: A triangular pattern of uppercase letters.</li>
            <li>Letter Pattern B: A fixed sequence of lowercase letters printed in 5 rows.</li>
        </ul>
    </ul>

   <h3>Operations:</h3>
    <ul>
        <li>Display a menu of patterns to the user.</li>
        <li>Read the user's choice and execute the corresponding function.</li>
        <li>Depending on the pattern selected, prompt for additional input if necessary.</li>
        <li>Generate and print the chosen pattern to the console.</li>
        <li>Repeat until the user chooses to exit.</li>
    </ul>

   <h2>Pseudocode:</h2>
    <pre>
BEGIN Main
    REPEAT
        PRINT menu with options
        GET user choice
        IF choice is 1 to 13 THEN
            PROMPT user for required input (rows, cols, etc.)
            CALL corresponding pattern function (e.g., printPatternA, printPatternB, etc.)
        ELSE IF choice is 0 THEN
            PRINT "Exiting the program."
        ELSE
            PRINT "Invalid choice. Please try again."
    UNTIL choice is 0
END Main

FUNCTION printPatternA(rows)
    PRINT "Pattern A:"
    FOR i FROM 0 TO rows-1
        FOR j FROM 1 TO rows
            PRINT j
        END FOR
        PRINT newline
    END FOR
END FUNCTION

FUNCTION printPatternB()
    PRINT "Pattern B:"
    SET ch = 'A'
    FOR i FROM 0 TO 3
        FOR j FROM 0 TO 5
            PRINT ch
            INCREMENT ch
        END FOR
        PRINT newline
    END FOR
END FUNCTION

FUNCTION printPatternC(rows)
    PRINT "Pattern C:"
    FOR i FROM 1 TO rows
        FOR j FROM 1 TO i
            PRINT j
        END FOR
        PRINT newline
    END FOR
END FUNCTION

FUNCTION printInvertedNumberPattern(rows)
    PRINT "Inverted Number Pattern:"
    FOR i FROM rows TO 1
        FOR j FROM i TO 1
            PRINT j
        END FOR
        PRINT newline
    END FOR
END FUNCTION

FUNCTION hollowRectangle(rows, cols)
    PRINT "Hollow Rectangle:"
    FOR i FROM 1 TO rows
        FOR j FROM 1 TO cols
            IF i is 1 or i is rows or j is 1 or j is cols
                PRINT "*"
            ELSE
                PRINT " "
            END IF
        END FOR
        PRINT newline
    END FOR
END FUNCTION

FUNCTION invertedHalfPyramid(height)
    PRINT "Inverted Half Pyramid:"
    FOR i FROM height TO 1
        FOR j FROM 1 TO i
            PRINT "*"
        END FOR
        PRINT newline
    END FOR
END FUNCTION

FUNCTION hollowInvertedHalfPyramid(height)
    PRINT "Hollow Inverted Half Pyramid:"
    FOR i FROM height TO 1
        FOR j FROM 1 TO i
            IF j is 1 or j is i or i is height
                PRINT "*"
            ELSE
                PRINT " "
            END IF
        END FOR
        PRINT newline
    END FOR
END FUNCTION

FUNCTION fullPyramid(height)
    PRINT "Full Pyramid:"
    FOR i FROM 1 TO height
        PRINT spaces to align the pyramid
        PRINT stars for the pyramid
        PRINT newline
    END FOR
END FUNCTION

FUNCTION invertedFullPyramid(height)
    PRINT "Inverted Full Pyramid:"
    FOR i FROM height TO 1
        PRINT spaces to align the inverted pyramid
        PRINT stars for the inverted pyramid
        PRINT newline
    END FOR
END FUNCTION

FUNCTION hollowFullPyramid(height)
    PRINT "Hollow Full Pyramid:"
    FOR i FROM 1 TO height
        PRINT spaces to align the pyramid
        PRINT stars with spaces inside
        PRINT newline
    END FOR
END FUNCTION

FUNCTION printNumberPattern(rows)
    PRINT "Decreasing Number Pattern:"
    FOR i FROM 1 TO rows
        PRINT spaces to align the pattern
        PRINT numbers in decreasing order
        PRINT newline
    END FOR
END FUNCTION

FUNCTION printLetterPatternA(rows)
    PRINT "Letter Pattern A:"
    FOR i FROM 'A' TO 'A' + rows - 1
        FOR j FROM 'A' TO i
            PRINT j
        END FOR
        PRINT newline
    END FOR
END FUNCTION

FUNCTION printLetterPatternB(rows)
    PRINT "Letter Pattern B:"
    FOR i FROM 1 TO rows
        PRINT "a to e" in each row
        PRINT newline
    END FOR
END FUNCTION    
</pre>
</body>
</html>
