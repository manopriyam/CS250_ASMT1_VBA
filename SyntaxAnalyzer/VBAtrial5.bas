Type StateData 
    cityCode (1 To 100) As Integer    ' Declare a static array. 
    county As String * 30 
End Type 

Type EmployeeRecord    ' Create user-defined type. 
    id As Integer    ' Define elements of data type. 
    name As String * 20 
    address As String * 30 
    phone As Long 
    hireDate As Date 
End Type 