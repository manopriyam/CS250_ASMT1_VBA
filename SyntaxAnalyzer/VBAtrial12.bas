Property Get PenColor() As String 
    Select Case CurrentColor 
    Case RED 
        PenColor = "Red" 
    Case GREEN 
        PenColor = "Green" 
    Case BLUE 
        PenColor = "Blue" 
    End Select 
End Property 

Property Set Pen(P As Object) 
    Set CurrentPen = P ' Assign Pen to object. 
End Property

Property Let PenColor(ColorName As String) 
    Select Case ColorName 
    Case "Red" 
        CurrentColor = RED ' Assign value for Red. 
    Case "Green" 
        CurrentColor = GREEN ' Assign value for Green. 
    Case "Blue" 
        CurrentColor = BLUE ' Assign value for Blue. 
    Case Else 
        CurrentColor = BLACK ' Assign default value. 
    End Select 
End Property 

Property Let Names(intX As Integer, intY As Integer, varZ As Variant) 
    If value > 0 Then
        Let myPropertyValue = value
        Let myOtherValue = "Valid Value"
    Else
        MsgBox "Value must be greater than zero."
    End If
End Property 

Property Get Names(intX As Integer, intY As Integer) As Variant 
    ' Statement here. 
End Property