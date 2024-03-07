Sub ExampleForLoop()
    Dim i As Integer
    Dim result As Integer

    ' Initialize result to 0
    result = 0

    ' Start a For loop that runs from 1 to 5
    For i = 1 To 5
        ' Add the current value of i to the result
        result = result + i
    Next i

    ' Display the final result
    MsgBox "The sum of numbers from 1 to 5 is: " & result
End Sub