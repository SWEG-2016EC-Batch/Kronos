Input: file size
operation: calculate time in seconds and convert time in seconds to time in minutes and time in hours
output: Display time in seconds, time in minutes and time in hours

Algorithm
step1: start the program
step2: read the input file size
step3: calculate time in seconds=filesize/transmissinrate  (use transmission rate)
step4:convert time in seconds to time in minutes via time_in_minutes=static_cast<int>(ceil(time_in_seconds/60))
step5: convert time in second to time in hours via time_in_hours=static_cast<int>(ceil(time_in_seconds/60))
step6: Display time in seconds, time in minutes and time in hours
step7: Terminate the program.