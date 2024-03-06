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

declaration : T_DIM IDENTIFIER T_AS DATATYPE {    
        printf("\nDeclaration");
    }

assignment : IDENTIFIER T_EQUAL value { 
        printf("\nAssignment");
    } 

value : IDENTIFIER 
    | STRING_LITERAL 
    | NUMERIC_LITERAL 
    | FLOAT_LITERAL

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
    
    yyin=file;  // Make file content input for lexical analysis, i.e, sets input file as file
    
    yyparse(); // function to call parser

    if (flag==0) printf("\n\nValid\n\n"); 
    else printf("\n\nInvalid\n\n");
} 
  
  
void yyerror(char *s) { 
   printf("\n\nSyntax Error : %s at line %d >> %s\n\n", s, yylineno, yytext); 
   flag=1; 
} 
