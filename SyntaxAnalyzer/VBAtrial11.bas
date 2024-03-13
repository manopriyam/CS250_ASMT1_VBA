Select Case Number     
    Case 1 To 5
        x = y + 10 
    Case Is > 10
        x = y + 10 
    Case 9
        x = y + 10
    Case 1 To 4, 7 To 9, 11, 13, Is > MaxNumber 
        x = y + 10
    Case "everything", "nuts" To "soup", TestItem
        x = y + 10
    Case Else 
        x = y + 10 
End Select