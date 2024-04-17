%{
    #include <stdio.h>
    #include "y.tab.h" 
    extern YYSTYPE yylval; 
%}


%option yylineno



%%


    /* REGEX for COMMENT */
'.*?\n                                             { yylval.strval = strdup(yytext); return COMMENT; }

    /* REGEX for STRING LITERALS */
\"[^\"]*\"                                         { yylval.strval = strdup(yytext); return STRING_LITERAL; }

    /* REGEX for OBJECTS */
Application|Workbooks|Worksheets|Range|Cell|Chart|ChartObject|Shape|ShapeRange|TextBox|Button|CheckBox|ComboBox|ListBox|RadioButton|Image|Hyperlink|Comment|PivotTable|PivotField|PivotItem|ListObject|ListRow|ListColumn|QueryTable|Connection|CommandBarButton|CommandBar|Document|Paragraph|Section|Table|TableRow|TableColumn|Bookmark|Field|Recordset|Form|Control|Label|TextBox|CommandButton|ComboBox|ListBox|OptionButton|CheckBox|Frame|Page|PageBreak|PageSetup|PrintArea|WorksheetFunction|Shell	{ yylval.strval = strdup(yytext); return OBJECT; }

    /* REGEX for DATA TYPES */
"Boolean"|"Byte"|"Collection"|"Currency"|"Date"|"Decimal"|"Dictionary"|"Double"|"Integer"|"Long"|"LongLong"|"LongPtr"|"Object"|"Single"|"String"|"Variant" { yylval.strval = strdup(yytext); return DATATYPE; }
([a-zA-Z][a-zA-Z0-9_]*)+([.]([a-zA-Z][a-zA-Z0-9_]*)+)+ { yylval.strval = strdup(yytext); return OBJECT_BLOCK; }

    /* REGEX for CONTROL STATEMENTS */
"Do While"      { yylval.strval = strdup(yytext); return T_DO_WHILE; }
"Do Until"      { yylval.strval = strdup(yytext); return T_DO_UNTIL; }
"End If"        { yylval.strval = strdup(yytext); return T_END_IF; }
"ElseIf"        { yylval.strval = strdup(yytext); return T_ELSE_IF; }
"If"            { yylval.strval = strdup(yytext); return T_IF; }
"Then"          { yylval.strval = strdup(yytext); return T_THEN; }
"Else"          { yylval.strval = strdup(yytext); return T_ELSE; }
"Select Case"   { yylval.strval = strdup(yytext); return T_SELECT_CASE; }
"End Select"    { yylval.strval = strdup(yytext); return T_END_SELECT; }
"Case Else"     { yylval.strval = strdup(yytext); return T_CASE_ELSE; }
"Case"          { yylval.strval = strdup(yytext); return T_CASE; }
"Exit For"      { yylval.strval = strdup(yytext); return T_EXIT_FOR; }
"For Each"      { yylval.strval = strdup(yytext); return T_FOR_EACH; }
"For"           { yylval.strval = strdup(yytext); return T_FOR; }
"To"            { yylval.strval = strdup(yytext); return T_TO; }
"Step"          { yylval.strval = strdup(yytext); return T_STEP; }
"Next"          { yylval.strval = strdup(yytext); return T_NEXT; }
"Exit Do"       { yylval.strval = strdup(yytext); return T_EXIT_DO; }
"Do"            { yylval.strval = strdup(yytext); return T_DO; }
"Loop"          { yylval.strval = strdup(yytext); return T_LOOP; }
"While"         { yylval.strval = strdup(yytext); return T_WHILE; }
"Until"         { yylval.strval = strdup(yytext); return T_UNTIL; }
"Wend"          { yylval.strval = strdup(yytext); return T_WEND; }
"End With"      { yylval.strval = strdup(yytext); return T_END_WITH; }
"With"          { yylval.strval = strdup(yytext); return T_WITH; }
"On Error"      { yylval.strval = strdup(yytext); return T_ON_ERROR; }
"On"            { yylval.strval = strdup(yytext); return T_ON; }
"GoTo"          { yylval.strval = strdup(yytext); return T_GOTO; }
"GoSub"         { yylval.strval = strdup(yytext); return T_GO_SUB; }
"Return"        { yylval.strval = strdup(yytext); return T_RETURN; }
"In"            { yylval.strval = strdup(yytext); return T_IN; }


    /* REGEX for OTHER KEYWORDS */
"As"                    { yylval.strval = strdup(yytext); return T_AS; }
"AppActivate"           { yylval.strval = strdup(yytext); return T_APP_ACTIVATE; }
"Beep"                  { yylval.strval = strdup(yytext); return T_BEEP; }
"Call"                  { yylval.strval = strdup(yytext); return T_CALL; }
"ChDir"                 { yylval.strval = strdup(yytext); return T_CHDIR; }
"ChDrive"               { yylval.strval = strdup(yytext); return T_CHDRIVE; }
"Close"                 { yylval.strval = strdup(yytext); return T_CLOSE; }
"Const"                 { yylval.strval = strdup(yytext); return T_CONST; }
"Declare"               { yylval.strval = strdup(yytext); return T_DECLARE; }
"DeleteSetting"         { yylval.strval = strdup(yytext); return T_DELETE_SETTING; }
"Dim"                   { yylval.strval = strdup(yytext); return T_DIM; }
"Erase"                 { yylval.strval = strdup(yytext); return T_ERASE; }
"Error"                 { yylval.strval = strdup(yytext); return T_ERROR; }
"Event"                 { yylval.strval = strdup(yytext); return T_EVENT; }
"FileCopy"              { yylval.strval = strdup(yytext); return T_FILE_COPY; }
"Function"              { yylval.strval = strdup(yytext); return T_FUNCTION; }
"Implements"            { yylval.strval = strdup(yytext); return T_IMPLEMENTS; }
"Kill"                  { yylval.strval = strdup(yytext); return T_KILL; }
"Let"                   { yylval.strval = strdup(yytext); return T_LET; }
"Load"                  { yylval.strval = strdup(yytext); return T_LOAD; }
"Unload"                { yylval.strval = strdup(yytext); return T_UNLOAD; }
"Lock"                  { yylval.strval = strdup(yytext); return T_LOCK; }
"Unlock"                { yylval.strval = strdup(yytext); return T_UNLOCK; }
"LSet"                  { yylval.strval = strdup(yytext); return T_LSET; }
"MkDir"                 { yylval.strval = strdup(yytext); return T_MKDIR; }
"Name"                  { yylval.strval = strdup(yytext); return T_NAME; }
"Open"                  { yylval.strval = strdup(yytext); return T_OPEN; }
"Line Input #"          { yylval.strval = strdup(yytext); return T_LINE_INPUT; }
"Input #"               { yylval.strval = strdup(yytext); return T_INPUT; }
"Option Base"           { yylval.strval = strdup(yytext); return T_OPTION_BASE; }
"Option Compare"        { yylval.strval = strdup(yytext); return T_OPTION_COMPARE; }
"Option Private"        { yylval.strval = strdup(yytext); return T_OPTION_PRIVATE; }
"Option Private Module" { yylval.strval = strdup(yytext); return T_OPTION_PRIVATE_MODULE; }
"Option Explicit"       { yylval.strval = strdup(yytext); return T_OPTION_EXPLICIT; }
"Property Get"          { yylval.strval = strdup(yytext); return T_PROPERTY_GET; }
"Property Let"          { yylval.strval = strdup(yytext); return T_PROPERTY_LET; }
"Property Set"          { yylval.strval = strdup(yytext); return T_PROPERTY_SET; }
"Property"              { yylval.strval = strdup(yytext); return T_PROPERTY; }
"Print #"               { yylval.strval = strdup(yytext); return T_PRINT; }
"Private"               { yylval.strval = strdup(yytext); return T_PRIVATE; }
"Public"                { yylval.strval = strdup(yytext); return T_PUBLIC; }
"Put"                   { yylval.strval = strdup(yytext); return T_PUT; }
"RaiseEvent"            { yylval.strval = strdup(yytext); return T_RAISE_EVENT; }
"Randomize"             { yylval.strval = strdup(yytext); return T_RANDOMIZE; }
"ReDim"                 { yylval.strval = strdup(yytext); return T_REDIM; }
"Reset"                 { yylval.strval = strdup(yytext); return T_RESET; }
"Resume"                { yylval.strval = strdup(yytext); return T_RESUME; }
"RmDir"                 { yylval.strval = strdup(yytext); return T_RMDIR; }
"RSet"                  { yylval.strval = strdup(yytext); return T_RSET; }
"SaveSetting"           { yylval.strval = strdup(yytext); return T_SAVE_SETTING; }
"Seek"                  { yylval.strval = strdup(yytext); return T_SEEK; }
"SendKeys"              { yylval.strval = strdup(yytext); return T_SEND_KEYS; }
"Set"                   { yylval.strval = strdup(yytext); return T_SET; }
"SetAttr"               { yylval.strval = strdup(yytext); return T_SET_ATTR; }
"Static"                { yylval.strval = strdup(yytext); return T_STATIC; }
"Stop"                  { yylval.strval = strdup(yytext); return T_STOP; }
"Sub"                   { yylval.strval = strdup(yytext); return T_SUB; }
"Time"                  { yylval.strval = strdup(yytext); return T_TIME; }
"Type"                  { yylval.strval = strdup(yytext); return T_TYPE; }
"Width #"               { yylval.strval = strdup(yytext); return T_WIDTH; }
"Write #"               { yylval.strval = strdup(yytext); return T_WRITE; }
"Enum"                  { yylval.strval = strdup(yytext); return T_ENUM; }
"End"                   { yylval.strval = strdup(yytext); return T_END; }
"Exit"                  { yylval.strval = strdup(yytext); return T_EXIT; }
"ByVal"                 { yylval.strval = strdup(yytext); return T_BY_VAL; }
"ByRef"                 { yylval.strval = strdup(yytext); return T_BY_REF; }
"New"                   { yylval.strval = strdup(yytext); return T_NEW; }
"MsgBox"                { yylval.strval = strdup(yytext); return T_MSG_BOX; }

    /* REGEX for OPERATORS */
"^"    { yylval.strval = strdup(yytext); return T_POWER; }
"*"    { yylval.strval = strdup(yytext); return T_MULTIPLY; }
"/"    { yylval.strval = strdup(yytext); return T_DIVIDE; }
"\\"   { yylval.strval = strdup(yytext); return T_BACKSLASH; }
"Mod"  { yylval.strval = strdup(yytext); return T_MOD; }
"+"    { yylval.strval = strdup(yytext); return T_PLUS; }
"-"    { yylval.strval = strdup(yytext); return T_MINUS; }
"&"    { yylval.strval = strdup(yytext); return T_CONCATENATE; }
"="    { yylval.strval = strdup(yytext); return T_EQUAL; }
"<>"   { yylval.strval = strdup(yytext); return T_NOT_EQUAL; }
"<="   { yylval.strval = strdup(yytext); return T_LESS_EQUAL; }
">="   { yylval.strval = strdup(yytext); return T_GREATER_EQUAL; }
"<"    { yylval.strval = strdup(yytext); return T_LESS_THAN; }
">"    { yylval.strval = strdup(yytext); return T_GREATER_THAN; }
"Is"   { yylval.strval = strdup(yytext); return T_IS; }
"Like" { yylval.strval = strdup(yytext); return T_LIKE; }
"Not"  { yylval.strval = strdup(yytext); return T_NOT; }
"And"  { yylval.strval = strdup(yytext); return T_AND; }
"Or"   { yylval.strval = strdup(yytext); return T_OR; }
"Xor"  { yylval.strval = strdup(yytext); return T_XOR; }
"Eqv"  { yylval.strval = strdup(yytext); return T_EQV; }
"Imp"  { yylval.strval = strdup(yytext); return T_IMP; }

    /* REGEX for NUMERIC LITERAL */
[+-]?[0-9]+[.]|[+-]?[0-9]+                         { yylval.numval = atoi(yytext); return NUMERIC_LITERAL; }

    /* REGEX for FLOAT LITERAL */
[+-]?[0-9]*[.][0-9]+                          	   { yylval.fltval = atof(yytext); return FLOAT_LITERAL; }

    /* REGEX for IDENTIFIERS */
[a-zA-Z][a-zA-Z0-9_]*                              { yylval.strval = strdup(yytext); return IDENTIFIER; }

    /* REGEX for PARENTHESIS */
"("|")"|"{"|"}"|"["|"]"                            { yylval.strval = strdup(yytext); return yytext[0]; }

    /* REGEX for SEPARATORS */
[_;:,.]                                            { yylval.strval = strdup(yytext); return yytext[0]; }

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
