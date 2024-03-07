%{
    #include <stdio.h>
%}

%%

    /* REGEX for COMMENT */
'.*?\n                                             { printf("\nCOMMENT: %s", yytext); }

    /* REGEX for STRING LITERALS */
\"[^\"]*\"                                         { printf("\nSTRING_LITERAL: %s", yytext); }

    /* REGEX for OBJECTS */
Application|Workbook|Worksheet|Range|Cell|Chart|ChartObject|Shape|ShapeRange|TextBox|Button|CheckBox|ComboBox|ListBox|RadioButton|Image|Hyperlink|Comment|PivotTable|PivotField|PivotItem|ListObject|ListRow|ListColumn|QueryTable|Connection|CommandBarButton|CommandBar|Document|Paragraph|Section|Table|TableRow|TableColumn|Bookmark|Field|Recordset|Form|Control|Label|TextBox|CommandButton|ComboBox|ListBox|OptionButton|CheckBox|Frame|Page|PageBreak|PageSetup|PrintArea|WorksheetFunction|Shell	{ printf("\nOBJECT: %s", yytext); }

    /* REGEX for DATA TYPES */
"Boolean"|"Byte"|"Collection"|"Currency"|"Date"|"Decimal"|"Dictionary"|"Double"|"Integer"|"Long"|"LongLong"|"LongPtr"|"Object"|"Single"|"String"|"Variant" { printf("\nDATATYPE: %s", yytext); }

    /* REGEX for CONTROL STATEMENTS */
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


    /* REGEX for OTHER KEYWORDS */
"As"                    { printf("\nT_AS: %s", yytext); }
"AppActivate"           { printf("\nT_APP_ACTIVATE: %s", yytext); }
"Beep"                  { printf("\nT_BEEP: %s", yytext); }
"Call"                  { printf("\nT_CALL: %s", yytext); }
"ChDir"                 { printf("\nT_CHDIR: %s", yytext); }
"ChDrive"               { printf("\nT_CHDRIVE: %s", yytext); }
"Close"                 { printf("\nT_CLOSE: %s", yytext); }
"Const"                 { printf("\nT_CONST: %s", yytext); }
"Declare"               { printf("\nT_DECLARE: %s", yytext); }
"DeleteSetting"         { printf("\nT_DELETE_SETTING: %s", yytext); }
"Dim"                   { printf("\nT_DIM: %s", yytext); }
"Erase"                 { printf("\nT_ERASE: %s", yytext); }
"Error"                 { printf("\nT_ERROR: %s", yytext); }
"Event"                 { printf("\nT_EVENT: %s", yytext); }
"FileCopy"              { printf("\nT_FILE_COPY: %s", yytext); }
"Function"              { printf("\nT_FUNCTION: %s", yytext); }
"Implements"            { printf("\nT_IMPLEMENTS: %s", yytext); }
"Kill"                  { printf("\nT_KILL: %s", yytext); }
"Let"                   { printf("\nT_LET: %s", yytext); }
"Load"                  { printf("\nT_LOAD: %s", yytext); }
"Unload"                { printf("\nT_UNLOAD: %s", yytext); }
"Lock"                  { printf("\nT_LOCK: %s", yytext); }
"Unlock"                { printf("\nT_UNLOCK: %s", yytext); }
"LSet"                  { printf("\nT_LSET: %s", yytext); }
"MkDir"                 { printf("\nT_MKDIR: %s", yytext); }
"Name"                  { printf("\nT_NAME: %s", yytext); }
"Open"                  { printf("\nT_OPEN: %s", yytext); }
"Line Input #"          { printf("\nT_LINE_INPUT: %s", yytext); }
"Input #"               { printf("\nT_INPUT: %s", yytext); }
"Option Base"           { printf("\nT_OPTION_BASE: %s", yytext); }
"Option Compare"        { printf("\nT_OPTION_COMPARE: %s", yytext); }
"Option Private"        { printf("\nT_OPTION_PRIVATE: %s", yytext); }
"Option Private Module" { printf("\nT_OPTION_PRIVATE_MODULE: %s", yytext); }
"Option Explicit"       { printf("\nT_OPTION_EXPLICIT: %s", yytext); }
"Property Get"          { printf("\nT_PROPERTY_GET: %s", yytext); }
"Property Let"          { printf("\nT_PROPERTY_LET: %s", yytext); }
"Property Set"          { printf("\nT_PROPERTY_SET: %s", yytext); }
"Print #"               { printf("\nT_PRINT: %s", yytext); }
"Private"               { printf("\nT_PRIVATE: %s", yytext); }
"Public"                { printf("\nT_PUBLIC: %s", yytext); }
"Put"                   { printf("\nT_PUT: %s", yytext); }
"RaiseEvent"            { printf("\nT_RAISE_EVENT: %s", yytext); }
"Randomize"             { printf("\nT_RANDOMIZE: %s", yytext); }
"ReDim"                 { printf("\nT_REDIM: %s", yytext); }
"Reset"                 { printf("\nT_RESET: %s", yytext); }
"Resume"                { printf("\nT_RESUME: %s", yytext); }
"RmDir"                 { printf("\nT_RMDIR: %s", yytext); }
"RSet"                  { printf("\nT_RSET: %s", yytext); }
"SaveSetting"           { printf("\nT_SAVE_SETTING: %s", yytext); }
"Seek"                  { printf("\nT_SEEK: %s", yytext); }
"SendKeys"              { printf("\nT_SEND_KEYS: %s", yytext); }
"Set"                   { printf("\nT_SET: %s", yytext); }
"SetAttr"               { printf("\nT_SET_ATTR: %s", yytext); }
"Static"                { printf("\nT_STATIC: %s", yytext); }
"Stop"                  { printf("\nT_STOP: %s", yytext); }
"Sub"                   { printf("\nT_SUB: %s", yytext); }
"Time"                  { printf("\nT_TIME: %s", yytext); }
"Type"                  { printf("\nT_TYPE: %s", yytext); }
"Width #"               { printf("\nT_WIDTH: %s", yytext); }
"Write #"               { printf("\nT_WRITE: %s", yytext); }
"Enum"                  { printf("\nT_ENUM: %s", yytext); }
"End"                   { printf("\nT_END: %s", yytext); }
"Exit"                  { printf("\nT_EXIT: %s", yytext); }
"ByVal"                 { printf("\nT_BY_VAL: %s", yytext); }
"ByRef"                 { printf("\nT_BY_REF: %s", yytext); }
"New"                   { printf("\nT_NEW: %s", yytext); }
"MsgBox"                { printf("\nT_MSG_BOX: %s", yytext); }

    /* REGEX for OPERATORS */
"^"    { printf("\nT_POWER: %s", yytext); }
"*"    { printf("\nT_MULTIPLY: %s", yytext); }
"/"    { printf("\nT_DIVIDE: %s", yytext); }
"\\"   { printf("\nT_BACKSLASH: %s", yytext); }
"Mod"  { printf("\nT_MOD: %s", yytext); }
"+"    { printf("\nT_PLUS: %s", yytext); }
"-"    { printf("\nT_MINUS: %s", yytext); }
"&"    { printf("\nT_CONCATENATE: %s", yytext); }
"="    { printf("\nT_EQUAL: %s", yytext); }
"<>"   { printf("\nT_NOT_EQUAL: %s", yytext); }
"<="   { printf("\nT_LESS_EQUAL: %s", yytext); }
">="   { printf("\nT_GREATER_EQUAL: %s", yytext); }
"<"    { printf("\nT_LESS_THAN: %s", yytext); }
">"    { printf("\nT_GREATER_THAN: %s", yytext); }
"Is"   { printf("\nT_IS: %s", yytext); }
"Like" { printf("\nT_LIKE: %s", yytext); }
"Not"  { printf("\nT_NOT: %s", yytext); }
"And"  { printf("\nT_AND: %s", yytext); }
"Or"   { printf("\nT_OR: %s", yytext); }
"Xor"  { printf("\nT_XOR: %s", yytext); }
"Eqv"  { printf("\nT_EQV: %s", yytext); }
"Imp"  { printf("\nT_IMP: %s", yytext); }

    /* REGEX for NUMERIC LITERAL */
[+-]?[0-9]+[.]|[+-]?[0-9]+                         { printf("\nNUMERIC_LITERAL: %s", yytext); }

    /* REGEX for FLOAT LITERAL */
[+-]?[0-9]*[.][0-9]+                          	   { printf("\nFLOAT_LITERAL: %s", yytext); }

    /* REGEX for IDENTIFIERS */
[a-zA-Z][a-zA-Z0-9_]*                              { printf("\nIDENTIFIER: %s", yytext); }

    /* REGEX for PARENTHESIS */
"("|")"|"{"|"}"|"["|"]"                            { printf("\nPARENTHESIS: %s", yytext); }

    /* REGEX for SEPARATORS */
[_;:,.]                                            { printf("\nSEPARATOR: %s", yytext); }

    /* REGEX for WHITESPACES */
[\n\t ]*                                           {}

    /* REGEX for ANY OTHER CHARACTER */
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
