With MyLabel 
    MyLabel.Height = 2000 
    MyLabel.Width = 2000 
    MyLabel.Caption = "This is MyLabel" 
End With

With MyObject 
    MyObject.Height = 100 
    MyObject.Caption = "Hello World"
    With MyObject.Font 
        MyObject.Font.Color = Red  
        MyObject.Font.Bold = True  
    End With
End With
