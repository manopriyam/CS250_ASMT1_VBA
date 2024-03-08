Option Explicit

' Global variables
Dim globalVar As Integer

' Global code (executed when the module is loaded)
globalVar = 10
MsgBox "This is global code. The value of globalVar is: " & globalVar

' More global code
globalVar = globalVar * -2 * 3 * 3.0 * .3 * 3. * +3.
MsgBox "Now, the value of globalVar is: " & globalVar

' Event procedure for a button click
Private Sub CommandButton1_Click()
    ' Code executed when the button is clicked
    MsgBox "Button clicked! The globalVar value is: " & globalVar
End Sub