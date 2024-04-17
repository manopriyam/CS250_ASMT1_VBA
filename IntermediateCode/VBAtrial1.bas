Dim globalVar As Integer
globalVar = 10
MsgBox "This is global code. The value of globalVar is: " & globalVar
globalVar = globalVar * -2 * 3 * 3.0 * .3 * 3. * +3.
MsgBox "Now, the value of globalVar is: " & globalVar

ReDim globalVar As String
globalVar = "Hello World"
MsgBox "Re-Declaration: " & globalVar
