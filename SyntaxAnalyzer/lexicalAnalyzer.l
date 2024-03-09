%{
    #include <stdio.h>
    #include "y.tab.h" 
    extern YYSTYPE yylval; 
%}


%option yylineno



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
"ElseIf"       { printf("\nT_ELSE_IF: %s", yytext); yylval.strval = strdup(yytext); return T_ELSE_IF; }
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
"As"                    { printf("\nT_AS: %s", yytext); yylval.strval = strdup(yytext); return T_AS; }
"AppActivate"           { printf("\nT_APP_ACTIVATE: %s", yytext); yylval.strval = strdup(yytext); return T_APP_ACTIVATE; }
"Beep"                  { printf("\nT_BEEP: %s", yytext); yylval.strval = strdup(yytext); return T_BEEP; }
"Call"                  { printf("\nT_CALL: %s", yytext); yylval.strval = strdup(yytext); return T_CALL; }
"ChDir"                 { printf("\nT_CHDIR: %s", yytext); yylval.strval = strdup(yytext); return T_CHDIR; }
"ChDrive"               { printf("\nT_CHDRIVE: %s", yytext); yylval.strval = strdup(yytext); return T_CHDRIVE; }
"Close"                 { printf("\nT_CLOSE: %s", yytext); yylval.strval = strdup(yytext); return T_CLOSE; }
"Const"                 { printf("\nT_CONST: %s", yytext); yylval.strval = strdup(yytext); return T_CONST; }
"Declare"               { printf("\nT_DECLARE: %s", yytext); yylval.strval = strdup(yytext); return T_DECLARE; }
"DeleteSetting"         { printf("\nT_DELETE_SETTING: %s", yytext); yylval.strval = strdup(yytext); return T_DELETE_SETTING; }
"Dim"                   { printf("\nT_DIM: %s", yytext); yylval.strval = strdup(yytext); return T_DIM; }
"Erase"                 { printf("\nT_ERASE: %s", yytext); yylval.strval = strdup(yytext); return T_ERASE; }
"Error"                 { printf("\nT_ERROR: %s", yytext); yylval.strval = strdup(yytext); return T_ERROR; }
"Event"                 { printf("\nT_EVENT: %s", yytext); yylval.strval = strdup(yytext); return T_EVENT; }
"FileCopy"              { printf("\nT_FILE_COPY: %s", yytext); yylval.strval = strdup(yytext); return T_FILE_COPY; }
"Function"              { printf("\nT_FUNCTION: %s", yytext); yylval.strval = strdup(yytext); return T_FUNCTION; }
"Implements"            { printf("\nT_IMPLEMENTS: %s", yytext); yylval.strval = strdup(yytext); return T_IMPLEMENTS; }
"Kill"                  { printf("\nT_KILL: %s", yytext); yylval.strval = strdup(yytext); return T_KILL; }
"Let"                   { printf("\nT_LET: %s", yytext); yylval.strval = strdup(yytext); return T_LET; }
"Load"                  { printf("\nT_LOAD: %s", yytext); yylval.strval = strdup(yytext); return T_LOAD; }
"Unload"                { printf("\nT_UNLOAD: %s", yytext); yylval.strval = strdup(yytext); return T_UNLOAD; }
"Lock"                  { printf("\nT_LOCK: %s", yytext); yylval.strval = strdup(yytext); return T_LOCK; }
"Unlock"                { printf("\nT_UNLOCK: %s", yytext); yylval.strval = strdup(yytext); return T_UNLOCK; }
"LSet"                  { printf("\nT_LSET: %s", yytext); yylval.strval = strdup(yytext); return T_LSET; }
"MkDir"                 { printf("\nT_MKDIR: %s", yytext); yylval.strval = strdup(yytext); return T_MKDIR; }
"Name"                  { printf("\nT_NAME: %s", yytext); yylval.strval = strdup(yytext); return T_NAME; }
"Open"                  { printf("\nT_OPEN: %s", yytext); yylval.strval = strdup(yytext); return T_OPEN; }
"Line Input #"          { printf("\nT_LINE_INPUT: %s", yytext); yylval.strval = strdup(yytext); return T_LINE_INPUT; }
"Input #"               { printf("\nT_INPUT: %s", yytext); yylval.strval = strdup(yytext); return T_INPUT; }
"Option Base"           { printf("\nT_OPTION_BASE: %s", yytext); yylval.strval = strdup(yytext); return T_OPTION_BASE; }
"Option Compare"        { printf("\nT_OPTION_COMPARE: %s", yytext); yylval.strval = strdup(yytext); return T_OPTION_COMPARE; }
"Option Private"        { printf("\nT_OPTION_PRIVATE: %s", yytext); yylval.strval = strdup(yytext); return T_OPTION_PRIVATE; }
"Option Private Module" { printf("\nT_OPTION_PRIVATE_MODULE: %s", yytext); yylval.strval = strdup(yytext); return T_OPTION_PRIVATE_MODULE; }
"Option Explicit"       { printf("\nT_OPTION_EXPLICIT: %s", yytext); yylval.strval = strdup(yytext); return T_OPTION_EXPLICIT; }
"Property Get"          { printf("\nT_PROPERTY_GET: %s", yytext); yylval.strval = strdup(yytext); return T_PROPERTY_GET; }
"Property Let"          { printf("\nT_PROPERTY_LET: %s", yytext); yylval.strval = strdup(yytext); return T_PROPERTY_LET; }
"Property Set"          { printf("\nT_PROPERTY_SET: %s", yytext); yylval.strval = strdup(yytext); return T_PROPERTY_SET; }
"Print #"               { printf("\nT_PRINT: %s", yytext); yylval.strval = strdup(yytext); return T_PRINT; }
"Private"               { printf("\nT_PRIVATE: %s", yytext); yylval.strval = strdup(yytext); return T_PRIVATE; }
"Public"                { printf("\nT_PUBLIC: %s", yytext); yylval.strval = strdup(yytext); return T_PUBLIC; }
"Put"                   { printf("\nT_PUT: %s", yytext); yylval.strval = strdup(yytext); return T_PUT; }
"RaiseEvent"            { printf("\nT_RAISE_EVENT: %s", yytext); yylval.strval = strdup(yytext); return T_RAISE_EVENT; }
"Randomize"             { printf("\nT_RANDOMIZE: %s", yytext); yylval.strval = strdup(yytext); return T_RANDOMIZE; }
"ReDim"                 { printf("\nT_REDIM: %s", yytext); yylval.strval = strdup(yytext); return T_REDIM; }
"Reset"                 { printf("\nT_RESET: %s", yytext); yylval.strval = strdup(yytext); return T_RESET; }
"Resume"                { printf("\nT_RESUME: %s", yytext); yylval.strval = strdup(yytext); return T_RESUME; }
"RmDir"                 { printf("\nT_RMDIR: %s", yytext); yylval.strval = strdup(yytext); return T_RMDIR; }
"RSet"                  { printf("\nT_RSET: %s", yytext); yylval.strval = strdup(yytext); return T_RSET; }
"SaveSetting"           { printf("\nT_SAVE_SETTING: %s", yytext); yylval.strval = strdup(yytext); return T_SAVE_SETTING; }
"Seek"                  { printf("\nT_SEEK: %s", yytext); yylval.strval = strdup(yytext); return T_SEEK; }
"SendKeys"              { printf("\nT_SEND_KEYS: %s", yytext); yylval.strval = strdup(yytext); return T_SEND_KEYS; }
"Set"                   { printf("\nT_SET: %s", yytext); yylval.strval = strdup(yytext); return T_SET; }
"SetAttr"               { printf("\nT_SET_ATTR: %s", yytext); yylval.strval = strdup(yytext); return T_SET_ATTR; }
"Static"                { printf("\nT_STATIC: %s", yytext); yylval.strval = strdup(yytext); return T_STATIC; }
"Stop"                  { printf("\nT_STOP: %s", yytext); yylval.strval = strdup(yytext); return T_STOP; }
"Sub"                   { printf("\nT_SUB: %s", yytext); yylval.strval = strdup(yytext); return T_SUB; }
"Time"                  { printf("\nT_TIME: %s", yytext); yylval.strval = strdup(yytext); return T_TIME; }
"Type"                  { printf("\nT_TYPE: %s", yytext); yylval.strval = strdup(yytext); return T_TYPE; }
"Width #"               { printf("\nT_WIDTH: %s", yytext); yylval.strval = strdup(yytext); return T_WIDTH; }
"Write #"               { printf("\nT_WRITE: %s", yytext); yylval.strval = strdup(yytext); return T_WRITE; }
"Enum"                  { printf("\nT_ENUM: %s", yytext); yylval.strval = strdup(yytext); return T_ENUM; }
"End"                   { printf("\nT_END: %s", yytext); yylval.strval = strdup(yytext); return T_END; }
"Exit"                  { printf("\nT_EXIT: %s", yytext); yylval.strval = strdup(yytext); return T_EXIT; }
"ByVal"                 { printf("\nT_BY_VAL: %s", yytext); yylval.strval = strdup(yytext); return T_BY_VAL; }
"ByRef"                 { printf("\nT_BY_REF: %s", yytext); yylval.strval = strdup(yytext); return T_BY_REF; }
"New"                   { printf("\nT_NEW: %s", yytext); yylval.strval = strdup(yytext); return T_NEW; }
"MsgBox"                { printf("\nT_MSG_BOX: %s", yytext); yylval.strval = strdup(yytext); return T_MSG_BOX; }

    /* REGEX for OPERATORS */
"^"    { printf("\nT_POWER: %s", yytext); yylval.strval = strdup(yytext); return T_POWER; }
"*"    { printf("\nT_MULTIPLY: %s", yytext); yylval.strval = strdup(yytext); return T_MULTIPLY; }
"/"    { printf("\nT_DIVIDE: %s", yytext); yylval.strval = strdup(yytext); return T_DIVIDE; }
"\\"   { printf("\nT_BACKSLASH: %s", yytext); yylval.strval = strdup(yytext); return T_BACKSLASH; }
"Mod"  { printf("\nT_MOD: %s", yytext); yylval.strval = strdup(yytext); return T_MOD; }
"+"    { printf("\nT_PLUS: %s", yytext); yylval.strval = strdup(yytext); return T_PLUS; }
"-"    { printf("\nT_MINUS: %s", yytext); yylval.strval = strdup(yytext); return T_MINUS; }
"&"    { printf("\nT_CONCATENATE: %s", yytext); yylval.strval = strdup(yytext); return T_CONCATENATE; }
"="    { printf("\nT_EQUAL: %s", yytext); yylval.strval = strdup(yytext); return T_EQUAL; }
"<>"   { printf("\nT_NOT_EQUAL: %s", yytext); yylval.strval = strdup(yytext); return T_NOT_EQUAL; }
"<="   { printf("\nT_LESS_EQUAL: %s", yytext); yylval.strval = strdup(yytext); return T_LESS_EQUAL; }
">="   { printf("\nT_GREATER_EQUAL: %s", yytext); yylval.strval = strdup(yytext); return T_GREATER_EQUAL; }
"<"    { printf("\nT_LESS_THAN: %s", yytext); yylval.strval = strdup(yytext); return T_LESS_THAN; }
">"    { printf("\nT_GREATER_THAN: %s", yytext); yylval.strval = strdup(yytext); return T_GREATER_THAN; }
"Is"   { printf("\nT_IS: %s", yytext); yylval.strval = strdup(yytext); return T_IS; }
"Like" { printf("\nT_LIKE: %s", yytext); yylval.strval = strdup(yytext); return T_LIKE; }
"Not"  { printf("\nT_NOT: %s", yytext); yylval.strval = strdup(yytext); return T_NOT; }
"And"  { printf("\nT_AND: %s", yytext); yylval.strval = strdup(yytext); return T_AND; }
"Or"   { printf("\nT_OR: %s", yytext); yylval.strval = strdup(yytext); return T_OR; }
"Xor"  { printf("\nT_XOR: %s", yytext); yylval.strval = strdup(yytext); return T_XOR; }
"Eqv"  { printf("\nT_EQV: %s", yytext); yylval.strval = strdup(yytext); return T_EQV; }
"Imp"  { printf("\nT_IMP: %s", yytext); yylval.strval = strdup(yytext); return T_IMP; }

    /* REGEX for NUMERIC LITERAL */
[+-]?[0-9]+[.]|[+-]?[0-9]+                         { printf("\nNUMERIC_LITERAL: %s", yytext); yylval.numval = atoi(yytext); return NUMERIC_LITERAL; }

    /* REGEX for FLOAT LITERAL */
[+-]?[0-9]*[.][0-9]+                          	   { printf("\nFLOAT_LITERAL: %s", yytext); yylval.fltval = atof(yytext); return FLOAT_LITERAL; }

    /* REGEX for IDENTIFIERS */
[a-zA-Z][a-zA-Z0-9_]*                              { printf("\nIDENTIFIER: %s", yytext); yylval.strval = strdup(yytext); return IDENTIFIER; }

    /* REGEX for PARENTHESIS */
"("|")"|"{"|"}"|"["|"]"                            { printf("\nPARENTHESIS: %s", yytext); yylval.strval = strdup(yytext); return yytext[0]; }

    /* REGEX for SEPARATORS */
[_;:,.]                                            { printf("\nSEPARATOR: %s", yytext); yylval.strval = strdup(yytext); return yytext[0]; }

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
