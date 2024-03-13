# CS251_ASMT2_VBA

CS251 Introduction to Language Processing <br>
2023-24-W Semester <br>

<br>

Group Members : <br>
- Manopriya Mondal <br>
- Shivangi Gaur <br>

<br>

Github Link : [https://github.com/manopriyam/CS251_ASMT1_VBA](https://github.com/manopriyam/CS251_ASMT1_VBA) <br>
You may clone the repository using -
```
git clone https://github.com/manopriyam/CS251_ASMT1_VBA
```

<br>

Used : <br>
- LEX (Lexical Analyzer) <br>
- YACC (Syntax Analyzer) <br>

<br>

Note : <br>
1. Lexical Analysis <br>
- Refer to LexicalAnalysis folder
- CHANGES MADE : We have tokenized the input character stream into following tokens:
    1. Comment: COMMENT	
    2. String Literal: STRING_LITERAL
    3. Objects: OBJECT
    4. Data Types: DATATYPE
    5. *KEYWORDS: T_word for each KEYWORD
    6. *Operators: T_operator for each OPERATOR <br>
        ^, *, /, \, Mod, +, -, &, =, <>, <=, >=, <, >, Is, Like, Not, And, Or, Xor, Eqv, Imp
    7. Numeric Literal: NUMERIC_LITERAL
    8. Float Literal: FLOAT_LITERAL
    9. Identifier: IDENTIFIER
    10. *Brackets: PARENTHESIS and tokenised them as their corresponding semantic character
    11. *Separators: SEPARATOR and tokenised them as their corresponding semantic character
    - tokens with changes made denoted by asterisk (*)
- You may check the corresponding Lexical Analysis done on the lexemes by running the following commands on the input_file -
```
lex onlylexicalAnalyzer.l
gcc lex.yy.c
./a.out input_file
```

<br>

2. Syntax Analysis <br>
- Install yacc (syntax analyzer) -
```
sudo apt-get install bison
```
- Run syntax analyzer on an input_file -
```
lex lexicalAnalyzer.l
yacc -d syntaxAnalyzer.y
gcc lex.yy.c y.tab.c
./a.out input_file
```
- The repository contains a few dummy VBA files which can be executed as follows - 
```
lex lexicalAnalyzer.l
yacc -d syntaxAnalyzer.y
gcc lex.yy.c y.tab.c
./a.out VBAtrial.bas
```
- We have taken a few assumptions :
    - Conditional Statements : always have an 'End If' Keyword 
    Assumed Syntax -
    ```
    If performance = 1 Then Bonus = salary * 0.1 End If 
    ```
    instead of -
    ```
    If performance = 1 Then Bonus = salary * 0.1  
    ```
    - For Loop : always has identifier specified after 'Next' Keyword 
    Assumed Syntax -
    ```
    For i = 1 To 5 Step 5   
        Dim x As Integer
        z = 1 
    Next i
    ```
    Instead of -
    ```
    For i = 1 To 5 Step 5   
        Dim x As Integer
        z = 1 
    Next 
    ```
    - With Block : always has the object properties explicitly specified
    Assumed Syntax -
    ```
    With MyLabel 
        MyLabel.Height = 2000 
    End With
    ```
    instead of -
    ```
    With MyLabel 
        .Height = 2000 
    End With
    ```
<br>
<br>

References Used : <br>
1. Tutorialspoint VBA Tutorial: [https://www.tutorialspoint.com/vba/index.htm](https://www.tutorialspoint.com/vba/index.htm) 
2. Microsoft VBA Language Reference : [https://learn.microsoft.com/en-us/office/vba/language/reference/user-interface-help/visual-basic-language-reference](https://learn.microsoft.com/en-us/office/vba/language/reference/user-interface-help/visual-basic-language-reference)