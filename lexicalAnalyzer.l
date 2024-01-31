%{
#include <stdio.h>
%}


%%


'.*?\n                                             { printf("\nCOMMENT: %s", yytext); }

\"[^\"]*\"                                         { printf("\nSTRING_LITERAL: %s", yytext); }

Application|Workbook|Worksheet|Range|Cell|Chart|ChartObject|Shape|ShapeRange|TextBox|Button|CheckBox|ComboBox|ListBox|RadioButton|Image|Hyperlink|Comment|PivotTable|PivotField|PivotItem|ListObject|ListRow|ListColumn|QueryTable|Connection|CommandBarButton|CommandBar|Document|Paragraph|Section|Table|TableRow|TableColumn|Bookmark|Field|Recordset|Form|Control|Label|TextBox|CommandButton|ComboBox|ListBox|OptionButton|CheckBox|Frame|Page|PageBreak|PageSetup|PrintArea|WorksheetFunction|Shell	{ printf("\nOBJECT_TYPE: %s", yytext); }

"Boolean"|"Byte"|"Collection"|"Currency"|"Date"|"Decimal"|"Dictionary"|"Double"|"Integer"|"Long"|"LongLong"|"LongPtr"|"Object"|"Single"|"String"|"Variant" { printf("\nDATA_TYPE: %s", yytext); }

"End If"        { printf("\nT_END_IF: %s", yytext); }
"Else If"       { printf("\nT_ELSE_IF: %s", yytext); }
"If"            { printf("\nT_IF: %s", yytext); }
"Then"          { printf("\nT_THEN: %s", yytext); }
"Else"          { printf("\nT_ELSE: %s", yytext); }
"Select Case"   { printf("\nT_SELECT_CASE: %s", yytext); }
"End Select"    { printf("\nT_END_SELECT: %s", yytext); }
"Case Else"     { printf("\nT_CASE_ELSE: %s", yytext); }
"Case"          { printf("\nT_CASE: %s", yytext); }
"Exit For"      { printf("\nT_EXIT_FOR: %s", yytext); }
"For Each"      { printf("\nT_FOR_EACH: %s", yytext); }
"For"           { printf("\nT_FOR: %s", yytext); }
"To"            { printf("\nT_TO: %s", yytext); }
"Step"          { printf("\nT_STEP: %s", yytext); }
"Next"          { printf("\nT_NEXT: %s", yytext); }
"Exit Do"       { printf("\nT_EXIT_DO: %s", yytext); }
"Do"            { printf("\nT_DO: %s", yytext); }
"Loop"          { printf("\nT_LOOP: %s", yytext); }
"While"         { printf("\nT_WHILE: %s", yytext); }
"Until"         { printf("\nT_UNTIL: %s", yytext); }
"Wend"          { printf("\nT_WEND: %s", yytext); }
"End With"      { printf("\nT_END_WITH: %s", yytext); }
"With"          { printf("\nT_WITH: %s", yytext); }
"On Error"      { printf("\nT_ON_ERROR: %s", yytext); }
"On"            { printf("\nT_ON: %s", yytext); }
"GoTo"          { printf("\nT_GOTO: %s", yytext); }
"GoSub"         { printf("\nT_GO_SUB: %s", yytext); }
"Return"        { printf("\nT_RETURN: %s", yytext); }

"As"|"AppActivate"|"Beep"|"Call"|"ChDir"|"ChDrive"|"Close"|"Const"|"Declare"|"DeleteSetting"|"Dim"|"Erase"|"Error"|"Event"|"FileCopy"|"Function"|"Implements"|"Kill"|"Let"|"Load"|"Unload"|"Lock"|"Unlock"|"LSet"|"MkDir"|"Name"|"Open"|"Line Input #"|"Input #"|"Option Base"|"Option Compare"|"Option Private"|"Option Private Module"|"Option Explicit"|"Property Get"|"Property Let"|"Property Set"|"Print #"|"Private"|"Public"|"Put"|"RaiseEvent"|"Randomize"|"ReDim"|"Reset"|"Resume"|"RmDir"|"RSet"|"SaveSetting"|"Seek"|"SendKeys"|"Set"|"SetAttr"|"Static"|"Stop"|"Sub"|"Time"|"Type"|"Width #"|"Write #"|"Enum"|"End"|"Exit"|"ByVal"|"ByRef"|"New" { printf("\nKEYWORD: %s", yytext); }

"^"|"*"|"/"|"\\"|"Mod"|"+"|"-"|"&"|"="|"<>"|"<="|">="|"<"|">"|"Is"|"Like"|"Not"|"And"|"Or"|"Xor"|"Eqv"|"Imp" { printf("\nLOGICAL_OPERATOR: %s", yytext); }

[+-]?[0-9]+                                        { printf("\nNUMERIC_LITERAL: %s", yytext); }
[+-]?[0-9]*[.][0-9]+|[+-]?[0-9]+[.][0-9]*          { printf("\nFLOAT_LITERAL: %s", yytext); }

[a-zA-Z][a-zA-Z0-9_]*                              { printf("\nIDENTIFIER: %s", yytext); }

"("|")"|"{"|"}"|"["|"]"                            { printf("\nPARENTHESIS: %s", yytext); }

[_;:,.]                                            { printf("\nSEPARATOR: %s", yytext); }

[\n\t ]*                                           {}

.                                                  {}


%%


int yywrap() {  // function used in Lex to indicate end of input
	return 1;   // return 1 as lexical analysis is finished on provided input
}

void main (int argc, char** argv) {
    FILE *file; 	
    file = fopen(argv[1], "r"); // open the file given as argument

    if (argc<2) {   // in case of no file given as argument throw error
        printf("ERROR : Insufficient Arguments. Missing file name.\n");
        return;
    }

    if (!file) {    // error for invalid file 
        printf("ERROR : Could NOT Open the file.\n");
        return;
    }
    
    yyin=file;  // Make file content input for lexical analysis, i.e, sets input file as file
    yylex();    // Function for calling lexical analyzer
    printf("\n");
    return;     // return from main function
}