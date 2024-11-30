Algorithm to Calculate Transmission Time
1. Input:

     - File size in bytes.
       
     - Transmission rate in bytes per second.
2. Process:

     - Calculate Total Seconds:

       Total Seconds = file size/ transmition rate
       
     - Calculate Days:
       
         days = Total seconde /(24*3600)

     - Calculate Hours:

         hours = remaining seconds/3600

    - Calculate Minutes:

        minutes = remaining seconds/60

        remaining Seconds = remaining Seconds modulus(%) 60
    - Remaining Seconds:

        Remaining Seconds = Remaining Seconds
3. Output:

      Days
     
      Hours
     
      Minutes
     
      Seconds
