Function CalculateSquareRoot(NumberArg As Double) As Double 
    If NumberArg < 0 Then ' Evaluate argument. 
        Exit Function ' Exit to calling procedure. 
    Else 
        CalculateSquareRoot = Sqr(NumberArg) ' Return square root. 
    End If 
End Function

Function CalculateSquareRoot(NumberArg As Double) As Double 
    Sub CalculateSquareRoot(NumberArg As Double) 
        Dim i As Integer
        Dim result As Integer
        result = 0
        MsgBox "The sum of numbers from 1 to 5 is: " & result 
    End Sub
End Function
