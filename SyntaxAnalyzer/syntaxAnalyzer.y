%{ 
/* Definition section */
    #include<stdio.h> 
    #include<stdlib.h>  
    #include <string.h>
    int flag=0; 
    extern FILE *yyin;
    extern int yylineno;
    extern char* yytext;
%}


%union {
    int numval;
    char* strval;
    double fltval;
}

%start statements

%token <strval> COMMENT STRING_LITERAL OBJECT OBJECT_BLOCK DATATYPE

%token <strval> T_DO_WHILE T_DO_UNTIL T_END_IF T_ELSE_IF T_IF T_THEN T_ELSE T_SELECT_CASE T_END_SELECT T_CASE_ELSE T_CASE T_EXIT_FOR T_FOR_EACH T_FOR T_TO T_STEP T_NEXT T_EXIT_DO T_DO T_LOOP T_WHILE T_UNTIL T_WEND T_END_WITH T_WITH T_ON_ERROR T_ON T_GOTO T_GO_SUB T_RETURN T_IN

%token <strval> T_AS T_APP_ACTIVATE T_BEEP T_CALL T_CHDIR T_CHDRIVE T_CLOSE T_CONST T_DECLARE T_DELETE_SETTING T_DIM T_ERASE T_ERROR T_EVENT T_FILE_COPY T_FUNCTION T_IMPLEMENTS T_KILL T_LET T_LOAD T_UNLOAD T_LOCK T_UNLOCK T_LSET T_MKDIR T_NAME T_OPEN T_LINE_INPUT T_INPUT T_OPTION_BASE T_OPTION_COMPARE T_OPTION_PRIVATE T_OPTION_PRIVATE_MODULE T_OPTION_EXPLICIT T_PROPERTY_GET T_PROPERTY_LET T_PROPERTY_SET T_PROPERTY T_PRINT T_PRIVATE T_PUBLIC T_PUT T_RAISE_EVENT T_RANDOMIZE T_REDIM T_RESET T_RESUME T_RMDIR T_RSET T_SAVE_SETTING T_SEEK T_SEND_KEYS T_SET T_SET_ATTR T_STATIC T_STOP T_SUB T_TIME T_TYPE T_WIDTH T_WRITE T_ENUM T_END T_EXIT T_BY_VAL T_BY_REF T_NEW T_MSG_BOX 

%token <strval> T_POWER T_MULTIPLY T_DIVIDE T_BACKSLASH T_MOD T_PLUS T_MINUS T_CONCATENATE T_EQUAL T_NOT_EQUAL T_LESS_EQUAL T_GREATER_EQUAL T_LESS_THAN T_GREATER_THAN T_IS T_LIKE T_NOT T_AND T_OR T_XOR T_EQV T_IMP

%token <numval> NUMERIC_LITERAL 
%token <fltval> FLOAT_LITERAL 
%token <strval> IDENTIFIER PARENTHESIS SEPARATOR

%left T_IMP T_EQV
%left T_XOR
%left T_OR
%left T_AND
%left T_NOT
%left T_NOT_EQUAL T_LESS_EQUAL T_GREATER_EQUAL T_LESS_THAN T_GREATER_THAN T_IS T_LIKE
%left T_CONCATENATE
%right T_PLUS T_MINUS
%left T_MULTIPLY T_DIVIDE T_BACKSLASH T_MOD
%right T_POWER
%left T_EQUAL

%left '_' ':' ';' '.' '(' ')'

%nonassoc NEXT


/* Rule Section */
%% 


statements : statement 
    | statements statement
    | statements '_'
    | statements ':'
    | statements ';'

statement : declaration               { printf("\nStatement : Declaration"); }
    | redeclaration                   { printf("\nStatement : Re-Declaration"); }
    | assignment                      { printf("\nStatement : Assignment"); }
    | printing                        { printf("\nStatement : Printing"); }
    | subblock                        { printf("\nBlock : Sub Procedure"); }
    | functionblock                   { printf("\nBlock : Function Procedure"); }
    | propertygetblock                { printf("\nBlock : Property Get Procedure"); }
    | propertysetblock                { printf("\nBlock : Property Set Procedure"); }
    | propertyletblock                { printf("\nBlock : Property Let Procedure"); }
    | typeblock                       { printf("\nBlock : Type Procedure"); }
    | withblock                       { printf("\nBlock : With Procedure"); }
    | conditionalifelse               { printf("\nBlock : Conditional If-ElseIf-Then"); }
    | conditionalselectcase           { printf("\nBlock : Conditional Select-Case"); }
    | forloop                         { printf("\nBlock : For Loop"); }
    | foreachloop                     { printf("\nBlock : For Each Loop"); }
    | whileloop                       { printf("\nBlock : While Loop"); }
    | doWhileloop                     { printf("\nBlock : Do While Loop"); }
    | doUntilloop                     { printf("\nBlock : Do Until Loop"); }
    | exit_statement                  { printf("\nStatement : Exit Statement"); }
    | pvtpubdeclaration               { printf("\nStatement : Private/Public Declaration"); }
    | pvtpubsubblock                  { printf("\nBlock : Private/Public Sub Procedure"); }
    | pvtpubfunctionblock             { printf("\nBlock : Private/Public Function Procedure"); }
    | pvtpubpropgetblock              { printf("\nBlock : Private/Public Property Get Procedure"); }
    | pvtpubpropsetblock              { printf("\nBlock : Private/Public Property Set Procedure"); }
    | pvtpubpropletblock              { printf("\nBlock : Private/Public Property Let Procedure"); }
    | COMMENT                         { printf("\nStatement : Comment"); }

vartype : T_AS DATATYPE 
	| T_AS IDENTIFIER
    | /* empty */

declare : IDENTIFIER vartype
    | declare ',' IDENTIFIER vartype 
    | IDENTIFIER '(' NUMERIC_LITERAL T_TO NUMERIC_LITERAL ')' vartype

declaration : T_DIM declare

redeclaration : T_REDIM declare 

value : IDENTIFIER 
    | STRING_LITERAL 
    | NUMERIC_LITERAL 
    | FLOAT_LITERAL

numbers : IDENTIFIER
    | NUMERIC_LITERAL
    | FLOAT_LITERAL

expression : expression T_PLUS expression
    | expression T_MINUS expression 
    | expression T_MULTIPLY expression
    | expression T_DIVIDE expression 
    | expression T_BACKSLASH expression
    | expression T_MOD expression 
    | expression T_POWER expression
    | expression T_CONCATENATE expression
    | expression T_EQUAL expression 
    | expression T_NOT_EQUAL expression 
    | expression T_LESS_EQUAL expression
    | expression T_GREATER_EQUAL expression 
    | expression T_LESS_THAN expression 
    | expression T_GREATER_THAN expression
    | expression T_IS expression 
    | expression T_LIKE expression
    | expression T_NOT expression
    | expression T_AND expression 
    | expression T_OR expression 
    | expression T_XOR expression
    | expression T_EQV expression
    | expression T_IMP expression
    | '(' expression ')'
    | value 
    | objectblock

assignment : IDENTIFIER T_EQUAL expression 
	| objectblock T_EQUAL expression 
    | T_SET assignment
    | T_LET assignment

objectblock : object 

object : object '.' obj 
    | obj
    | object '.' IDENTIFIER
    | IDENTIFIER '.' object 

obj : IDENTIFIER '(' valuecomma ')' 
    | OBJECT_BLOCK '(' valuecomma ')'
    | OBJECT_BLOCK
    | OBJECT '(' valuecomma ')'
    | OBJECT

valuecomma : value
    | valuecomma ',' value

printvalues : T_CONCATENATE value printvalues 
    | T_CONCATENATE value 

printing : T_MSG_BOX STRING_LITERAL 
    | T_MSG_BOX STRING_LITERAL printvalues 

paramdeclare : declare 
    | /* empty */

subblock : T_SUB IDENTIFIER '(' paramdeclare ')' statements T_END T_SUB
    
functionblock : T_FUNCTION IDENTIFIER '(' paramdeclare ')' vartype statements T_END T_FUNCTION 

propertygetblock : T_PROPERTY_GET IDENTIFIER '(' paramdeclare ')' vartype statements T_END T_PROPERTY 

propertysetblock : T_PROPERTY_SET IDENTIFIER '(' paramdeclare ')' vartype statements T_END T_PROPERTY 

propertyletblock : T_PROPERTY_LET IDENTIFIER '(' paramdeclare ')' vartype statements T_END T_PROPERTY 

typeblock : T_TYPE IDENTIFIER type_declaration T_END T_TYPE 
    | T_TYPE IDENTIFIER COMMENT type_declaration T_END T_TYPE 

type_declaration : type_block 
    | type_declaration type_block

type_block : type_dec_value T_AS data_type 
    | type_dec_value T_AS data_type COMMENT 

data_type  : DATATYPE 
    | DATATYPE T_MULTIPLY expression

type_dec_value : IDENTIFIER 
    | IDENTIFIER '(' NUMERIC_LITERAL T_TO NUMERIC_LITERAL ')'

withblock : T_WITH IDENTIFIER statements T_END_WITH 
    | T_WITH objectblock statements T_END_WITH 

conditionalifelse : ifblock elseifs elseblock T_END_IF 

ifblock : T_IF expression T_THEN statements 

elseifs : elseifs elseifblock 
    | /* empty */

elseifblock : T_ELSE_IF expression T_THEN statements 

elseblock : T_ELSE statements
    | /* empty */

conditionalselectcase : T_SELECT_CASE IDENTIFIER cases elsecase T_END_SELECT 

cases : cases caseblock 
    | /* empty */

caseblock : T_CASE caseexprs statements

elsecase : T_CASE_ELSE statements
    | /* empty */

caseexprs : caseexprs ',' caseexpr
    | caseexpr
    
caseexpr : expression 
    | expression T_TO expression
    | T_IS compop expression

compop : T_EQUAL 
    | T_NOT_EQUAL
    | T_LESS_EQUAL
    | T_GREATER_EQUAL
    | T_LESS_THAN
    | T_GREATER_THAN

forloop : T_FOR assignment T_TO numbers stepping statements T_NEXT IDENTIFIER 

foreachloop : T_FOR_EACH IDENTIFIER T_IN IDENTIFIER statements T_NEXT IDENTIFIER 

stepping : T_STEP numbers 
    | /* empty */

whileloop : T_WHILE expression statements T_WEND 
	
doWhileloop : T_DO_WHILE expression statements T_LOOP 
    | T_DO statements T_LOOP T_WHILE expression 

doUntilloop : T_DO_UNTIL expression statements T_LOOP 
    | T_DO statements T_LOOP T_UNTIL expression 

exit_statement : T_EXIT_FOR
    | T_EXIT_DO 
    | T_EXIT T_SUB
    | T_EXIT T_FUNCTION
    | T_EXIT T_PROPERTY

pvtpub : T_PRIVATE 
    | T_PUBLIC

pvtpubdeclaration : pvtpub declare

pvtpubsubblock : pvtpub subblock 

pvtpubfunctionblock : pvtpub functionblock

pvtpubpropgetblock : pvtpub propertygetblock

pvtpubpropletblock : pvtpub propertyletblock

pvtpubpropsetblock : pvtpub propertysetblock


%%

  
//driver code 
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
    
    int ch = fgetc(file); // check if empty file
    if (ch == EOF) { // error for invalid file 
        printf("ERROR : Empty file.\n");
        return;
    }
    fclose(file);
    
    file = fopen(argv[1], "r"); // open the file given as argument
    yyin=file;  // Make file content input for lexical analysis, i.e, sets input file as file
    yyparse(); // function to call parser

    if (flag==0) printf("\n\nValid\n\n"); 
    else printf("\n\nInvalid\n\n");
    return;
} 
  
  
void yyerror(char *s) { 
   printf("\n\nSyntax Error : Line %d >> %s\n\n", yylineno, yytext); 
   flag=1; 
} 
