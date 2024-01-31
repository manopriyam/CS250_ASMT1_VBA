Function CalculateSquareRoot(NumberArg As Double) As Double 
    If NumberArg < 0 Then ' Evaluate argument. 
        Exit Function ' Exit to calling procedure. 
    Else 
        CalculateSquareRoot = Sqr(NumberArg) ' Return square root. 
    End If 
End Function
