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

%token <strval> COMMENT STRING_LITERAL OBJECT DATATYPE

%token <strval> T_END_IF T_ELSE_IF T_IF T_THEN T_ELSE T_SELECT_CASE T_END_SELECT T_CASE_ELSE T_CASE T_EXIT_FOR T_FOR_EACH T_FOR T_TO T_STEP T_NEXT T_EXIT_DO T_DO T_LOOP T_WHILE T_UNTIL T_WEND T_END_WITH T_WITH T_ON_ERROR T_ON T_GOTO T_GO_SUB T_RETURN

%token <strval> T_AS T_APP_ACTIVATE T_BEEP T_CALL T_CHDIR T_CHDRIVE T_CLOSE T_CONST T_DECLARE T_DELETE_SETTING T_DIM T_ERASE T_ERROR T_EVENT T_FILE_COPY T_FUNCTION T_IMPLEMENTS T_KILL T_LET T_LOAD T_UNLOAD T_LOCK T_UNLOCK T_LSET T_MKDIR T_NAME T_OPEN T_LINE_INPUT T_INPUT T_OPTION_BASE T_OPTION_COMPARE T_OPTION_PRIVATE T_OPTION_PRIVATE_MODULE T_OPTION_EXPLICIT T_PROPERTY_GET T_PROPERTY_LET T_PROPERTY_SET T_PRINT T_PRIVATE T_PUBLIC T_PUT T_RAISE_EVENT T_RANDOMIZE T_REDIM T_RESET T_RESUME T_RMDIR T_RSET T_SAVE_SETTING T_SEEK T_SEND_KEYS T_SET T_SET_ATTR T_STATIC T_STOP T_SUB T_TIME T_TYPE T_WIDTH T_WRITE T_ENUM T_END T_EXIT T_BY_VAL T_BY_REF T_NEW T_MSG_BOX 

%token <strval> T_POWER T_MULTIPLY T_DIVIDE T_BACKSLASH T_MOD T_PLUS T_MINUS T_CONCATENATE T_EQUAL T_NOT_EQUAL T_LESS_EQUAL T_GREATER_EQUAL T_LESS_THAN T_GREATER_THAN T_IS T_LIKE T_NOT T_AND T_OR T_XOR T_EQV T_IMP

%token <numval> NUMERIC_LITERAL 
%token <fltval> FLOAT_LITERAL 
%token <strval> IDENTIFIER PARENTHESIS SEPARATOR

%left T_MULTIPLY T_DIVIDE T_BACKSLASH T_MOD T_PLUS T_MINUS T_CONCATENATE T_EQUAL T_NOT_EQUAL T_LESS_EQUAL T_GREATER_EQUAL T_LESS_THAN T_GREATER_THAN T_IS T_LIKE T_NOT T_AND T_OR T_XOR T_EQV T_IMP

%right T_POWER  


/* Rule Section */
%% 


statements : statement {
        printf("\nSingle Statement");
    }
    | statements statement {
        printf("\nMultiple Statements");
    }

statement : declaration {
        printf("\nCase : Declaration");
    } 
    | assignment {
        printf("\nCase : Assignment");
    } 
    | printing {
        printf("\nCase : Printing");
    }
    | subblock {
        printf("\nCase : Sub Block");
    }
    | functionblock {
        printf("\nCase : Function Block");
    }
    | forloop {        
        printf("\nCase : For Loop");
    }

vartype : T_AS DATATYPE 
    | /* empty */

declare : IDENTIFIER vartype
    | declare ',' IDENTIFIER vartype 

declaration : T_DIM declare {    
        printf("\nDeclaration");
    }

assignment : IDENTIFIER T_EQUAL expression { 
        printf("\nAssignment");
    } 

value : IDENTIFIER 
    | STRING_LITERAL 
    | NUMERIC_LITERAL 
    | FLOAT_LITERAL

expression : expression T_PLUS expression {
        printf("\nAddition");
    }
    | expression T_MINUS expression {
        printf("\nSubtraction");
    }
    | expression T_MULTIPLY expression {
        printf("\nMultiplication");
    }
    | expression T_DIVIDE expression {
        printf("\nDivision");
    }
    | expression T_BACKSLASH expression {
        printf("\nBackslash Division");
    }
    | expression T_MOD expression {
        printf("\nModulo");
    }
    | expression T_POWER expression {
        printf("\nExponentiation");
    }
    | expression T_CONCATENATE expression {
        printf("\nConcatenation");
    }
    | expression T_EQUAL expression {
        printf("\nEqual");
    }
    | expression T_NOT_EQUAL expression {
        printf("\nNot Equal");
    }
    | expression T_LESS_EQUAL expression {
        printf("\nLess Than or Equal");
    }
    | expression T_GREATER_EQUAL expression {
        printf("\nGreater Than or Equal");
    }
    | expression T_LESS_THAN expression {
        printf("\nLess Than");
    }
    | expression T_GREATER_THAN expression {
        printf("\nGreater Than");
    }
    | expression T_IS expression {
        printf("\nIs");
    }
    | expression T_LIKE expression {
        printf("\nLike");
    }
    | expression T_NOT expression {
        printf("\nNot");
    }
    | expression T_AND expression {
        printf("\nAnd");
    }
    | expression T_OR expression {
        printf("\nOr");
    }
    | expression T_XOR expression {
        printf("\nXor");
    }
    | expression T_EQV expression {
        printf("\nEquivalence");
    }
    | expression T_IMP expression {
        printf("\nImplication");
    }
    | value {
        printf("\nValue");
    }

printvalues : T_CONCATENATE value printvalues {
        printf("\nPrinting Multiple");
    }
    | T_CONCATENATE value {
        printf("\nPrinting Single");
    }

printing : T_MSG_BOX STRING_LITERAL {
        printf("\nPrinting Message Only");
    }
    | T_MSG_BOX STRING_LITERAL printvalues {
        printf("\nPrinting Variables Also");
    }

subblock : T_SUB IDENTIFIER '(' declare ')' statements T_END T_SUB {
        printf("\nSub Block Statements");
    }
    
functionblock : T_FUNCTION IDENTIFIER '(' declare ')' vartype statements T_END T_FUNCTION {
        printf("\nFunction Block Statements");
    }

forloop : T_FOR assignment T_TO numbers stepping statements T_NEXT IDENTIFIER {
        printf("\nFor loop");
	}

numbers : IDENTIFIER
    | NUMERIC_LITERAL
    | FLOAT_LITERAL

stepping : T_STEP numbers 
    | /* empty */

for : T_FOR expression T_TO NUMERIC_LITERAL statements T_NEXT IDENTIFIER {
    printf("\nFor loop");
	}


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
