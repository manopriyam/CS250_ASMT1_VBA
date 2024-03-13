Sub temp()

Range("C2").InteriornColor = vbBlack
Range("C2").Font.Color = vbGreen

End Sub

Sub ExampleMacro(arg1, arg2)
    Dim longVariableName As String _
        : longVariableName = "This is a long string"
        
    MsgBox "Hello"; MsgBox "World"
End Sub

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

Sub ExampleForLoopWithIfElse()
    Dim i As Integer
    Dim result As Integer

    ' Initialize result to 0
    result = 0

    ' Start a For loop that runs from 1 to 5
    For i = 1 To 5
        ' Check if the current value of i is even
        If i Mod 2 = 0 Then
            ' If i is even, add it to the result
            result = result + i
        Else
            ' If i is odd, subtract it from the result
            result = result - i
        End If
    Next i

    ' Display the final result
    MsgBox "The result of the operation is: " & result
End Sub
