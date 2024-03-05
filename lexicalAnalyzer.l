%{
    #include <stdio.h>
    #include "y.tab.h" 
    extern YYSTYPE yylval; 
%}


%%


    /* REGEX for COMMENT */
'.*?\n                                             { printf("\nCOMMENT: %s", yytext); yylval.strval = strdup(yytext); return COMMENT; }

    /* REGEX for STRING LITERALS */
\"[^\"]*\"                                         { printf("\nSTRING_LITERAL: %s", yytext); yylval.strval = strdup(yytext); return STRING_LITERAL; }

    /* REGEX for OBJECTS */
Application|Workbook|Worksheet|Range|Cell|Chart|ChartObject|Shape|ShapeRange|TextBox|Button|CheckBox|ComboBox|ListBox|RadioButton|Image|Hyperlink|Comment|PivotTable|PivotField|PivotItem|ListObject|ListRow|ListColumn|QueryTable|Connection|CommandBarButton|CommandBar|Document|Paragraph|Section|Table|TableRow|TableColumn|Bookmark|Field|Recordset|Form|Control|Label|TextBox|CommandButton|ComboBox|ListBox|OptionButton|CheckBox|Frame|Page|PageBreak|PageSetup|PrintArea|WorksheetFunction|Shell	{ printf("\nOBJECT: %s", yytext); yylval.strval = strdup(yytext); return OBJECT; }

    /* REGEX for DATA TYPES */
"Boolean"|"Byte"|"Collection"|"Currency"|"Date"|"Decimal"|"Dictionary"|"Double"|"Integer"|"Long"|"LongLong"|"LongPtr"|"Object"|"Single"|"String"|"Variant" { printf("\nDATATYPE: %s", yytext); yylval.strval = strdup(yytext); return DATATYPE; }

    /* REGEX for CONTROL STATEMENTS */
"End If"        { printf("\nT_END_IF: %s", yytext); yylval.strval = strdup(yytext); return T_END_IF; }
"Else If"       { printf("\nT_ELSE_IF: %s", yytext); yylval.strval = strdup(yytext); return T_ELSE_IF; }
"If"            { printf("\nT_IF: %s", yytext); yylval.strval = strdup(yytext); return T_IF; }
"Then"          { printf("\nT_THEN: %s", yytext); yylval.strval = strdup(yytext); return T_THEN; }
"Else"          { printf("\nT_ELSE: %s", yytext); yylval.strval = strdup(yytext); return T_ELSE; }
"Select Case"   { printf("\nT_SELECT_CASE: %s", yytext); yylval.strval = strdup(yytext); return T_SELECT_CASE; }
"End Select"    { printf("\nT_END_SELECT: %s", yytext); yylval.strval = strdup(yytext); return T_END_SELECT; }
"Case Else"     { printf("\nT_CASE_ELSE: %s", yytext); yylval.strval = strdup(yytext); return T_CASE_ELSE; }
"Case"          { printf("\nT_CASE: %s", yytext); yylval.strval = strdup(yytext); return T_CASE; }
"Exit For"      { printf("\nT_EXIT_FOR: %s", yytext); yylval.strval = strdup(yytext); return T_EXIT_FOR; }
"For Each"      { printf("\nT_FOR_EACH: %s", yytext); yylval.strval = strdup(yytext); return T_FOR_EACH; }
"For"           { printf("\nT_FOR: %s", yytext); yylval.strval = strdup(yytext); return T_FOR; }
"To"            { printf("\nT_TO: %s", yytext); yylval.strval = strdup(yytext); return T_TO; }
"Step"          { printf("\nT_STEP: %s", yytext); yylval.strval = strdup(yytext); return T_STEP; }
"Next"          { printf("\nT_NEXT: %s", yytext); yylval.strval = strdup(yytext); return T_NEXT; }
"Exit Do"       { printf("\nT_EXIT_DO: %s", yytext); yylval.strval = strdup(yytext); return T_EXIT_DO; }
"Do"            { printf("\nT_DO: %s", yytext); yylval.strval = strdup(yytext); return T_DO; }
"Loop"          { printf("\nT_LOOP: %s", yytext); yylval.strval = strdup(yytext); return T_LOOP; }
"While"         { printf("\nT_WHILE: %s", yytext); yylval.strval = strdup(yytext); return T_WHILE; }
"Until"         { printf("\nT_UNTIL: %s", yytext); yylval.strval = strdup(yytext); return T_UNTIL; }
"Wend"          { printf("\nT_WEND: %s", yytext); yylval.strval = strdup(yytext); return T_WEND; }
"End With"      { printf("\nT_END_WITH: %s", yytext); yylval.strval = strdup(yytext); return T_END_WITH; }
"With"          { printf("\nT_WITH: %s", yytext); yylval.strval = strdup(yytext); return T_WITH; }
"On Error"      { printf("\nT_ON_ERROR: %s", yytext); yylval.strval = strdup(yytext); return T_ON_ERROR; }
"On"            { printf("\nT_ON: %s", yytext); yylval.strval = strdup(yytext); return T_ON; }
"GoTo"          { printf("\nT_GOTO: %s", yytext); yylval.strval = strdup(yytext); return T_GOTO; }
"GoSub"         { printf("\nT_GO_SUB: %s", yytext); yylval.strval = strdup(yytext); return T_GO_SUB; }
"Return"        { printf("\nT_RETURN: %s", yytext); yylval.strval = strdup(yytext); return T_RETURN; }


    /* REGEX for OTHER KEYWORDS */
"As"|"AppActivate"|"Beep"|"Call"|"ChDir"|"ChDrive"|"Close"|"Const"|"Declare"|"DeleteSetting"|"Dim"|"Erase"|"Error"|"Event"|"FileCopy"|"Function"|"Implements"|"Kill"|"Let"|"Load"|"Unload"|"Lock"|"Unlock"|"LSet"|"MkDir"|"Name"|"Open"|"Line Input #"|"Input #"|"Option Base"|"Option Compare"|"Option Private"|"Option Private Module"|"Option Explicit"|"Property Get"|"Property Let"|"Property Set"|"Print #"|"Private"|"Public"|"Put"|"RaiseEvent"|"Randomize"|"ReDim"|"Reset"|"Resume"|"RmDir"|"RSet"|"SaveSetting"|"Seek"|"SendKeys"|"Set"|"SetAttr"|"Static"|"Stop"|"Sub"|"Time"|"Type"|"Width #"|"Write #"|"Enum"|"End"|"Exit"|"ByVal"|"ByRef"|"New"|"MsgBox" { printf("\nKEYWORD: %s", yytext); yylval.strval = strdup(yytext); return KEYWORD; }


    /* REGEX for OPERATORS */
"="|"^"|"*"|"/"|"\\"|"Mod"|"+"|"-"|"&"|"Is"|"Like"|"Not"|"And"|"Or"|"Xor"|"Eqv"|"Imp" { printf("\nOPERATOR: %s", yytext); yylval.strval = strdup(yytext); return OPERATOR; }

    /* REGEX for LOGICAL OPERATORS */
"="|"<>"|"<="|">="|"<"|">" { printf("\nLOGICAL OPERATOR: %s", yytext); yylval.strval = strdup(yytext); return LOGICAL_OPERATOR; }

    /* REGEX for NUMERIC LITERAL */
[+-]?[0-9]+[.]|[+-]?[0-9]+                         { printf("\nNUMERIC_LITERAL: %s", yytext); yylval.numval = atoi(yytext); return NUMERIC_LITERAL; }

    /* REGEX for FLOAT LITERAL */
[+-]?[0-9]*[.][0-9]+                          	   { printf("\nFLOAT_LITERAL: %s", yytext); yylval.fltval = atof(yytext); return FLOAT_LITERAL; }

    /* REGEX for IDENTIFIERS */
[a-zA-Z][a-zA-Z0-9_]*                              { printf("\nIDENTIFIER: %s", yytext); yylval.strval = strdup(yytext); return IDENTIFIER; }

    /* REGEX for PARENTHESIS */
"("|")"|"{"|"}"|"["|"]"                            { printf("\nPARENTHESIS: %s", yytext); yylval.strval = strdup(yytext); return PARENTHESIS; }

    /* REGEX for SEPARATORS */
[_;:,.]                                            { printf("\nSEPARATOR: %s", yytext); yylval.strval = strdup(yytext); return SEPARATOR; }

    /* REGEX for WHITESPACES */
[\n\t ]*                                           {}

    /* REGEX for ANY OTHER CHARACTER */
.                                                  {}


%%


int yywrap() {  // function used in Lex to indicate end of input
	return 1;   // return 1 as lexical analysis is finished on provided input
}

// void main (int argc, char** argv) {
//     FILE *file; 	
//     file = fopen(argv[1], "r"); // open the file given as argument

//     if (argc<2) {   // in case of no file given as argument throw error
//         printf("ERROR : Insufficient Arguments. Missing file name.\n");
//         return;
//     }

//     if (!file) {    // error for invalid file 
//         printf("ERROR : Could NOT Open the file.\n");
//         return;
//     }
    
//     yyin=file;  // Make file content input for lexical analysis, i.e, sets input file as file
//     yylex();    // Function for calling lexical analyzer
//     printf("\n");
//     return;     // return from main function
// }
