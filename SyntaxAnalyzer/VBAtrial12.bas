Private Sub CalculateTotal()
    Dim subtotal As Double
    Dim taxRate As Double
    Dim total As Double
    
    subtotal = 100
    taxRate = 0.1 ' 10%
    
    total = subtotal * (1 + taxRate)
    
    MsgBox "Total: " & total
End Sub

Public Function AddNumbers(num1 As Integer, num2 As Integer) As Integer
    AddNumbers = num1 + num2
End Function

Private Number As Integer ' Private Integer variable. 
Private NameArray(1 To 5) As String ' Private array variable. 
Private MyVar, YourVar, ThisVar As Integer

Public Property Get Value() As Integer
    Value = myValue
End Property

Public Property Let Value(newValue As Integer)
    myValue = newValue
End Property

Sub CalculateTotal()
    Dim subtotal As Double
    Dim taxRate As Double
    Dim total As Double
    
    subtotal = 100
    taxRate = 0.1 ' 10%
    
    total = subtotal * (1 + taxRate)
    
    MsgBox "Total: " & total
End Sub

Function AddNumbers(num1 As Integer, num2 As Integer) As Integer
    AddNumbers = num1 + num2
End Function

Property Get Value() As Integer
    Value = myValue
End Property

Property Let Value(newValue As Integer)
    myValue = newValue
End Property
