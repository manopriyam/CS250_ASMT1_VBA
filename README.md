# CS251_ASMT1_VBA

CS251 Introduction to Language Processing <br>
2023-24-W Semester <br>

<br>

Group Members : <br>
- Manopriya Mondal <br>
- Shivangi Gaur <br>

<br>

Used : <br>
- LEX (Lexical Analyzer) <br>

<br>

Note : <br>
1. Lexical Analysis <br>
- Install lex (lexical analyzer) -
```
sudo apt-get install flex
```
- Run lexical analyzer on an input_file -
```
lex lexicalAnalyzer.l
gcc lex.yy.c
./a.out input_file
```
- The repository contains a few dummy VBA files which can be executed as follows - 
```
lex lexicalAnalyzer.l
gcc lex.yy.c
./a.out VBAtrial.bas
```
- Individual dummy file execution
```
./a.out VBAtrial1.bas
./a.out VBAtrial2.bas
./a.out VBAtrial3.bas
./a.out VBAtrial4.bas
./a.out VBAtrial5.bas
```

<br>
<br>

References Used : <br>
1. Tutorialspoint VBA Tutorial: [https://www.tutorialspoint.com/vba/index.htm](https://www.tutorialspoint.com/vba/index.htm) 
2. Microsoft VBA Language Reference : [https://learn.microsoft.com/en-us/office/vba/language/reference/user-interface-help/visual-basic-language-reference](https://learn.microsoft.com/en-us/office/vba/language/reference/user-interface-help/visual-basic-language-reference)