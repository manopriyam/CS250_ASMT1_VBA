Do While Counter < 20 ' Inner Loop
    Counter = Counter + 1 ' Increment Counter.
        Exit Do ' Exit inner loop.
Loop

Do ' Outer loop.
    Do While Counter < 20 ' Inner Loop
        Counter = Counter + 1 ' Increment Counter.
    Loop
    Total = Total + Counter ' Exit Do Lands here.
    Counter = 0
Loop Until Check = False 

While Counter < 20 ' Test value of Counter. 
    Counter = Counter + 1 ' Increment Counter. 
Wend ' End While loop when Counter > 19. 
