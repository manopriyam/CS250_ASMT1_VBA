%{
#include <stdio.h>
%}


%%


'.*?\n                                             { printf("\nCOMMENT: %s", yytext); }

\"[^\"]*\"                                         { printf("\nSTRING_LITERAL: %s", yytext); }

Application|Workbook|Worksheet|Range|Cell|Chart|ChartObject|Shape|ShapeRange|TextBox|Button|CheckBox|ComboBox|ListBox|RadioButton|Image|Hyperlink|Comment|PivotTable|PivotField|PivotItem|ListObject|ListRow|ListColumn|QueryTable|Connection|CommandBarButton|CommandBar|Document|Paragraph|Section|Table|TableRow|TableColumn|Bookmark|Field|Recordset|Form|Control|Label|TextBox|CommandButton|ComboBox|ListBox|OptionButton|CheckBox|Frame|Page|PageBreak|PageSetup|PrintArea|WorksheetFunction|Shell	{ printf("\nOBJECT_TYPE: %s", yytext); }

"Boolean"|"Byte"|"Collection"|"Currency"|"Date"|"Decimal"|"Dictionary"|"Double"|"Integer"|"Long"|"LongLong"|"LongPtr"|"Object"|"Single"|"String"|"Variant" { printf("\nDATA_TYPE: %s", yytext); }

"End If"        { printf("END_IF_T\n"); }
"Else If"       { printf("ELSE_IF_T\n"); }
"If"            { printf("IF_T\n"); }
"Then"          { printf("THEN_T\n"); }
"Else"          { printf("ELSE_T\n"); }
"Select Case"   { printf("SELECT_CASE_T\n"); }
"End Select"    { printf("END_SELECT_T\n"); }
"Case Else"     { printf("CASE_ELSE_T\n"); }
"Case"          { printf("CASE_T\n"); }
"Exit For"      { printf("EXIT_FOR_T\n"); }
"For Each"      { printf("FOR_EACH_T\n"); }
"For"           { printf("FOR_T\n"); }
"To"            { printf("TO_T\n"); }
"Step"          { printf("STEP_T\n"); }
"Next"          { printf("NEXT_T\n"); }
"Exit Do"       { printf("EXIT_DO_T\n"); }
"Do"            { printf("DO_T\n"); }
"Loop"          { printf("LOOP_T\n"); }
"While"         { printf("WHILE_T\n"); }
"Until"         { printf("UNTIL_T\n"); }
"Wend"          { printf("WEND_T\n"); }
"End With"      { printf("END_WITH_T\n"); }
"With"          { printf("WITH_T\n"); }
"On Error"      { printf("ON_ERROR_T\n"); }
"On"            { printf("ON_T\n"); }
"GoTo"          { printf("GOTO_T\n"); }
"GoSub"         { printf("GO_SUB_T\n"); }
"Return"        { printf("RETURN_T\n"); }

"As"|"AppActivate"|"Beep"|"Call"|"ChDir"|"ChDrive"|"Close"|"Const"|"Declare"|"DeleteSetting"|"Dim"|"Erase"|"Error"|"Event"|"FileCopy"|"Function"|"Implements"|"Kill"|"Let"|"Load"|"Unload"|"Lock"|"Unlock"|"LSet"|"MkDir"|"Name"|"Open"|"Line Input #"|"Input #"|"Option Base"|"Option Compare"|"Option Private"|"Option Private Module"|"Option Explicit"|"Property Get"|"Property Let"|"Property Set"|"Print #"|"Private"|"Public"|"Put"|"RaiseEvent"|"Randomize"|"ReDim"|"Reset"|"Resume"|"RmDir"|"RSet"|"SaveSetting"|"Seek"|"SendKeys"|"Set"|"SetAttr"|"Static"|"Stop"|"Sub"|"Time"|"Type"|"Width #"|"Write #"|"Enum"|"End"|"Exit"|"ByVal"|"ByRef"|"New" { printf("\nKEYWORD: %s", yytext); }

"^"|"*"|"/"|"\\"|"Mod"|"+"|"-"|"&"                 { printf("\nARITHMETIC_OPERATOR: %s", yytext); }
"="|"<>"|"<="|">="|"<"|">"|"Is"|"Like"             { printf("\nCOMPARISON_OPERATOR: %s", yytext); }
"Not"|"And"|"Or"|"Xor"|"Eqv"|"Imp"                 { printf("\nLOGICAL_OPERATOR: %s", yytext); }

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