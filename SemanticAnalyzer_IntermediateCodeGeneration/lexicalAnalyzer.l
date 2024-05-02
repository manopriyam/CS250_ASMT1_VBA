%{
    #include <stdio.h>
    #include "y.tab.h" 
    extern YYSTYPE yylval; 
%}


%option yylineno



%%


    /* REGEX for COMMENT */
'.*?\n                                             { yylval.nd_obj.name = strdup(yytext); return COMMENT; }

    /* REGEX for STRING LITERALS */
\"[^\"]*\"                                         { yylval.nd_obj.name = strdup(yytext); return STRING_LITERAL; }

    /* REGEX for OBJECTS */
Application|Workbooks|Worksheets|Range|Cell|Chart|ChartObject|Shape|ShapeRange|TextBox|Button|CheckBox|ComboBox|ListBox|RadioButton|Image|Hyperlink|Comment|PivotTable|PivotField|PivotItem|ListObject|ListRow|ListColumn|QueryTable|Connection|CommandBarButton|CommandBar|Document|Paragraph|Section|Table|TableRow|TableColumn|Bookmark|Field|Recordset|Form|Control|Label|TextBox|CommandButton|ComboBox|ListBox|OptionButton|CheckBox|Frame|Page|PageBreak|PageSetup|PrintArea|WorksheetFunction|Shell	{ yylval.nd_obj.name = strdup(yytext); return OBJECT; }

    /* REGEX for DATA TYPES */
"Boolean"|"Byte"|"Collection"|"Currency"|"Date"|"Decimal"|"Dictionary"|"Double"|"Integer"|"Long"|"LongLong"|"LongPtr"|"Object"|"Single"|"String"|"Variant" { yylval.nd_obj.name = strdup(yytext); return DATATYPE; }
([a-zA-Z][a-zA-Z0-9_]*)+([.]([a-zA-Z][a-zA-Z0-9_]*)+)+ { yylval.nd_obj.name = strdup(yytext); return OBJECT_BLOCK; }

    /* REGEX for CONTROL STATEMENTS */
"Do While"      { yylval.nd_obj.name = strdup(yytext); return T_DO_WHILE; }
"Do Until"      { yylval.nd_obj.name = strdup(yytext); return T_DO_UNTIL; }
"End If"        { yylval.nd_obj.name = strdup(yytext); return T_END_IF; }
"ElseIf"        { yylval.nd_obj.name = strdup(yytext); return T_ELSE_IF; }
"If"            { yylval.nd_obj.name = strdup(yytext); return T_IF; }
"Then"          { yylval.nd_obj.name = strdup(yytext); return T_THEN; }
"Else"          { yylval.nd_obj.name = strdup(yytext); return T_ELSE; }
"Select Case"   { yylval.nd_obj.name = strdup(yytext); return T_SELECT_CASE; }
"End Select"    { yylval.nd_obj.name = strdup(yytext); return T_END_SELECT; }
"Case Else"     { yylval.nd_obj.name = strdup(yytext); return T_CASE_ELSE; }
"Case"          { yylval.nd_obj.name = strdup(yytext); return T_CASE; }
"Exit For"      { yylval.nd_obj.name = strdup(yytext); return T_EXIT_FOR; }
"For Each"      { yylval.nd_obj.name = strdup(yytext); return T_FOR_EACH; }
"For"           { yylval.nd_obj.name = strdup(yytext); return T_FOR; }
"To"            { yylval.nd_obj.name = strdup(yytext); return T_TO; }
"Step"          { yylval.nd_obj.name = strdup(yytext); return T_STEP; }
"Next"          { yylval.nd_obj.name = strdup(yytext); return T_NEXT; }
"Exit Do"       { yylval.nd_obj.name = strdup(yytext); return T_EXIT_DO; }
"Do"            { yylval.nd_obj.name = strdup(yytext); return T_DO; }
"Loop"          { yylval.nd_obj.name = strdup(yytext); return T_LOOP; }
"While"         { yylval.nd_obj.name = strdup(yytext); return T_WHILE; }
"Until"         { yylval.nd_obj.name = strdup(yytext); return T_UNTIL; }
"Wend"          { yylval.nd_obj.name = strdup(yytext); return T_WEND; }
"End With"      { yylval.nd_obj.name = strdup(yytext); return T_END_WITH; }
"With"          { yylval.nd_obj.name = strdup(yytext); return T_WITH; }
"On Error"      { yylval.nd_obj.name = strdup(yytext); return T_ON_ERROR; }
"On"            { yylval.nd_obj.name = strdup(yytext); return T_ON; }
"GoTo"          { yylval.nd_obj.name = strdup(yytext); return T_GOTO; }
"GoSub"         { yylval.nd_obj.name = strdup(yytext); return T_GO_SUB; }
"Return"        { yylval.nd_obj.name = strdup(yytext); return T_RETURN; }
"In"            { yylval.nd_obj.name = strdup(yytext); return T_IN; }


    /* REGEX for OTHER KEYWORDS */
"As"                    { yylval.nd_obj.name = strdup(yytext); return T_AS; }
"AppActivate"           { yylval.nd_obj.name = strdup(yytext); return T_APP_ACTIVATE; }
"Beep"                  { yylval.nd_obj.name = strdup(yytext); return T_BEEP; }
"Call"                  { yylval.nd_obj.name = strdup(yytext); return T_CALL; }
"ChDir"                 { yylval.nd_obj.name = strdup(yytext); return T_CHDIR; }
"ChDrive"               { yylval.nd_obj.name = strdup(yytext); return T_CHDRIVE; }
"Close"                 { yylval.nd_obj.name = strdup(yytext); return T_CLOSE; }
"Const"                 { yylval.nd_obj.name = strdup(yytext); return T_CONST; }
"Declare"               { yylval.nd_obj.name = strdup(yytext); return T_DECLARE; }
"DeleteSetting"         { yylval.nd_obj.name = strdup(yytext); return T_DELETE_SETTING; }
"Dim"                   { yylval.nd_obj.name = strdup(yytext); return T_DIM; }
"Erase"                 { yylval.nd_obj.name = strdup(yytext); return T_ERASE; }
"Error"                 { yylval.nd_obj.name = strdup(yytext); return T_ERROR; }
"Event"                 { yylval.nd_obj.name = strdup(yytext); return T_EVENT; }
"FileCopy"              { yylval.nd_obj.name = strdup(yytext); return T_FILE_COPY; }
"Function"              { yylval.nd_obj.name = strdup(yytext); return T_FUNCTION; }
"Implements"            { yylval.nd_obj.name = strdup(yytext); return T_IMPLEMENTS; }
"Kill"                  { yylval.nd_obj.name = strdup(yytext); return T_KILL; }
"Let"                   { yylval.nd_obj.name = strdup(yytext); return T_LET; }
"Load"                  { yylval.nd_obj.name = strdup(yytext); return T_LOAD; }
"Unload"                { yylval.nd_obj.name = strdup(yytext); return T_UNLOAD; }
"Lock"                  { yylval.nd_obj.name = strdup(yytext); return T_LOCK; }
"Unlock"                { yylval.nd_obj.name = strdup(yytext); return T_UNLOCK; }
"LSet"                  { yylval.nd_obj.name = strdup(yytext); return T_LSET; }
"MkDir"                 { yylval.nd_obj.name = strdup(yytext); return T_MKDIR; }
"Name"                  { yylval.nd_obj.name = strdup(yytext); return T_NAME; }
"Open"                  { yylval.nd_obj.name = strdup(yytext); return T_OPEN; }
"Line Input #"          { yylval.nd_obj.name = strdup(yytext); return T_LINE_INPUT; }
"Input #"               { yylval.nd_obj.name = strdup(yytext); return T_INPUT; }
"Option Base"           { yylval.nd_obj.name = strdup(yytext); return T_OPTION_BASE; }
"Option Compare"        { yylval.nd_obj.name = strdup(yytext); return T_OPTION_COMPARE; }
"Option Private"        { yylval.nd_obj.name = strdup(yytext); return T_OPTION_PRIVATE; }
"Option Private Module" { yylval.nd_obj.name = strdup(yytext); return T_OPTION_PRIVATE_MODULE; }
"Option Explicit"       { yylval.nd_obj.name = strdup(yytext); return T_OPTION_EXPLICIT; }
"Property Get"          { yylval.nd_obj.name = strdup(yytext); return T_PROPERTY_GET; }
"Property Let"          { yylval.nd_obj.name = strdup(yytext); return T_PROPERTY_LET; }
"Property Set"          { yylval.nd_obj.name = strdup(yytext); return T_PROPERTY_SET; }
"Property"              { yylval.nd_obj.name = strdup(yytext); return T_PROPERTY; }
"Print #"               { yylval.nd_obj.name = strdup(yytext); return T_PRINT; }
"Private"               { yylval.nd_obj.name = strdup(yytext); return T_PRIVATE; }
"Public"                { yylval.nd_obj.name = strdup(yytext); return T_PUBLIC; }
"Put"                   { yylval.nd_obj.name = strdup(yytext); return T_PUT; }
"RaiseEvent"            { yylval.nd_obj.name = strdup(yytext); return T_RAISE_EVENT; }
"Randomize"             { yylval.nd_obj.name = strdup(yytext); return T_RANDOMIZE; }
"ReDim"                 { yylval.nd_obj.name = strdup(yytext); return T_REDIM; }
"Reset"                 { yylval.nd_obj.name = strdup(yytext); return T_RESET; }
"Resume"                { yylval.nd_obj.name = strdup(yytext); return T_RESUME; }
"RmDir"                 { yylval.nd_obj.name = strdup(yytext); return T_RMDIR; }
"RSet"                  { yylval.nd_obj.name = strdup(yytext); return T_RSET; }
"SaveSetting"           { yylval.nd_obj.name = strdup(yytext); return T_SAVE_SETTING; }
"Seek"                  { yylval.nd_obj.name = strdup(yytext); return T_SEEK; }
"SendKeys"              { yylval.nd_obj.name = strdup(yytext); return T_SEND_KEYS; }
"Set"                   { yylval.nd_obj.name = strdup(yytext); return T_SET; }
"SetAttr"               { yylval.nd_obj.name = strdup(yytext); return T_SET_ATTR; }
"Static"                { yylval.nd_obj.name = strdup(yytext); return T_STATIC; }
"Stop"                  { yylval.nd_obj.name = strdup(yytext); return T_STOP; }
"Sub"                   { yylval.nd_obj.name = strdup(yytext); return T_SUB; }
"Time"                  { yylval.nd_obj.name = strdup(yytext); return T_TIME; }
"Type"                  { yylval.nd_obj.name = strdup(yytext); return T_TYPE; }
"Width #"               { yylval.nd_obj.name = strdup(yytext); return T_WIDTH; }
"Write #"               { yylval.nd_obj.name = strdup(yytext); return T_WRITE; }
"Enum"                  { yylval.nd_obj.name = strdup(yytext); return T_ENUM; }
"End"                   { yylval.nd_obj.name = strdup(yytext); return T_END; }
"Exit"                  { yylval.nd_obj.name = strdup(yytext); return T_EXIT; }
"ByVal"                 { yylval.nd_obj.name = strdup(yytext); return T_BY_VAL; }
"ByRef"                 { yylval.nd_obj.name = strdup(yytext); return T_BY_REF; }
"New"                   { yylval.nd_obj.name = strdup(yytext); return T_NEW; }
"MsgBox"                { yylval.nd_obj.name = strdup(yytext); return T_MSG_BOX; }

    /* REGEX for OPERATORS */
"^"    { yylval.nd_obj.name = strdup(yytext); return T_POWER; }
"*"    { yylval.nd_obj.name = strdup(yytext); return T_MULTIPLY; }
"/"    { yylval.nd_obj.name = strdup(yytext); return T_DIVIDE; }
"\\"   { yylval.nd_obj.name = strdup(yytext); return T_BACKSLASH; }
"Mod"  { yylval.nd_obj.name = strdup(yytext); return T_MOD; }
"+"    { yylval.nd_obj.name = strdup(yytext); return T_PLUS; }
"-"    { yylval.nd_obj.name = strdup(yytext); return T_MINUS; }
"&"    { yylval.nd_obj.name = strdup(yytext); return T_CONCATENATE; }
"="    { yylval.nd_obj.name = strdup(yytext); return T_EQUAL; }
"<>"   { yylval.nd_obj.name = strdup(yytext); return T_NOT_EQUAL; }
"<="   { yylval.nd_obj.name = strdup(yytext); return T_LESS_EQUAL; }
">="   { yylval.nd_obj.name = strdup(yytext); return T_GREATER_EQUAL; }
"<"    { yylval.nd_obj.name = strdup(yytext); return T_LESS_THAN; }
">"    { yylval.nd_obj.name = strdup(yytext); return T_GREATER_THAN; }
"Is"   { yylval.nd_obj.name = strdup(yytext); return T_IS; }
"Like" { yylval.nd_obj.name = strdup(yytext); return T_LIKE; }
"Not"  { yylval.nd_obj.name = strdup(yytext); return T_NOT; }
"And"  { yylval.nd_obj.name = strdup(yytext); return T_AND; }
"Or"   { yylval.nd_obj.name = strdup(yytext); return T_OR; }
"Xor"  { yylval.nd_obj.name = strdup(yytext); return T_XOR; }
"Eqv"  { yylval.nd_obj.name = strdup(yytext); return T_EQV; }
"Imp"  { yylval.nd_obj.name = strdup(yytext); return T_IMP; }

    /* REGEX for NUMERIC LITERAL */
[+-]?[0-9]+[.]|[+-]?[0-9]+                         { yylval.nd_obj.name = strdup(yytext); return NUMERIC_LITERAL; }

    /* REGEX for FLOAT LITERAL */
[+-]?[0-9]*[.][0-9]+                          	   { yylval.nd_obj.name = strdup(yytext); return FLOAT_LITERAL; }

    /* REGEX for IDENTIFIERS */
[a-zA-Z][a-zA-Z0-9_]*                              { yylval.nd_obj.name = strdup(yytext); return IDENTIFIER; }

    /* REGEX for PARENTHESIS */
"("|")"|"{"|"}"|"["|"]"                            { yylval.nd_obj.name = strdup(yytext); return yytext[0]; }

    /* REGEX for SEPARATORS */
[_;:,.]                                            { yylval.nd_obj.name = strdup(yytext); return yytext[0]; }

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
