<div align="center">
<h1>Playing with numbers</h1>

  <div align="left">
 <h2>Problem Analysis</h2>
    
  <h3>Input:</h3>
    <ul>
        <li>An integer number (user-defined).</li>
        <li>A choice from a menu of operations (1-9) or 0 to exit.</li>
    </ul>

  <h3>Output:</h3>
    <ul>
        <li>Results based on the chosen operation:</li>
        <ul>
            <li>Reversed number.</li>
            <li>Count of digits in the number.</li>
            <li>Product of even digits.</li>
            <li>First and last digits along with their sum.</li>
            <li>Number after swapping the first and last digits.</li>
            <li>Check if the number is a palindrome.</li>
            <li>Frequency of each digit in the number.</li>
            <li>Check if the number is a Strong number.</li>
            <li>Check if the number is a Perfect number.</li>
        </ul>
    </ul>

  <h3>Operations:</h3>
    <ul>
        <li>Present a menu to the user.</li>
        <li>Read the user's choice.</li>
        <li>Based on the choice, perform the corresponding operation on the input number:
            <ul>
                <li>Reverse the number and display it.</li>
                <li>Count and display the number of digits.</li>
                <li>Calculate and display the product of even digits.</li>
                <li>Find and display the first and last digits and their sum.</li>
                <li>Swap and display the first and last digits.</li>
                <li>Check and display if the number is a palindrome.</li>
                <li>Calculate and display the frequency of each digit.</li>
                <li>Check and display if the number is a Strong number.</li>
                <li>Check and display if the number is a Perfect number.</li>
            </ul>
        </li>
        <li>Repeat until the user chooses to exit.</li>
    </ul>

  <h2>Pseudocode:</h2>
    <pre>
BEGIN
   DEFINE FUNCTION reverseNumber(num)
    SET reversed = 0
    WHILE num > 0
        SET reversed = reversed * 10 + num % 10
        SET num = num / 10
    END WHILE
    RETURN reversed
END FUNCTION

DEFINE FUNCTION countDigits(num)
    IF num == 0 THEN RETURN 1
    SET count = 0
    WHILE num > 0
        INCREMENT count
        SET num = num / 10
    END WHILE
    RETURN count
END FUNCTION

DEFINE FUNCTION productOfEvenDigits(num)
    SET product = 1
    SET foundEven = FALSE
    WHILE num > 0
        SET digit = num % 10
        IF digit % 2 == 0 THEN
            SET product = product * digit
            SET foundEven = TRUE
        END IF
        SET num = num / 10
    END WHILE
    RETURN foundEven ? product : 0
END FUNCTION

DEFINE PROCEDURE firstAndLastDigits(num, REF first, REF last, REF sum)
    SET last = num % 10
    WHILE num >= 10
        SET num = num / 10
    END WHILE
    SET first = num
    SET sum = first + last
END PROCEDURE

DEFINE FUNCTION swapFirstAndLast(num)
    IF num < 10 THEN RETURN num
    SET last = num % 10
    SET first = num
    WHILE first >= 10
        SET first = first / 10
    END WHILE
    SET numDigits = log10(num)
    SET num = num - first * 10^numDigits - last
    SET num = num + first + last * 10^numDigits
    RETURN num
END FUNCTION

DEFINE FUNCTION isPalindrome(num)
    RETURN num == reverseNumber(num)
END FUNCTION

DEFINE PROCEDURE digitFrequency(num)
    INITIALIZE freq ARRAY [0-9] = 0
    WHILE num > 0
        INCREMENT freq[num % 10]
        SET num = num / 10
    END WHILE
    PRINT freq
END PROCEDURE

DEFINE FUNCTION isStrong(num)
    SET original = num
    SET sum = 0
    WHILE num > 0
        SET digit = num % 10
        SET factorial = 1
        FOR i FROM 1 TO digit
            SET factorial = factorial * i
        END FOR
        SET sum = sum + factorial
        SET num = num / 10
    END WHILE
    RETURN sum == original
END FUNCTION

DEFINE FUNCTION isPerfect(num)
    SET sum = 0
    FOR i FROM 1 TO num/2
        IF num % i == 0 THEN
            INCREMENT sum by i
        END IF
    END FOR
    RETURN sum == num
END FUNCTION

DEFINE MAIN PROCEDURE
    DO
        PRINT Menu options
        INPUT choice
        IF choice != 0 THEN INPUT number
        SWITCH choice
            CASE 1: CALL reverseNumber(number)
            CASE 2: CALL countDigits(number)
            CASE 3: CALL productOfEvenDigits(number)
            CASE 4: CALL firstAndLastDigits(number)
            CASE 5: CALL swapFirstAndLast(number)
            CASE 6: CALL isPalindrome(number)
            CASE 7: CALL digitFrequency(number)
            CASE 8: CALL isStrong(number)
            CASE 9: CALL isPerfect(number)
            CASE 0: PRINT Exit message
            DEFAULT: PRINT Invalid choice
        END SWITCH
    WHILE choice != 0

END
    </pre>
</body>
</html>

