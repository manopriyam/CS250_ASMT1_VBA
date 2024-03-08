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

%left T_POWER T_MULTIPLY T_DIVIDE T_BACKSLASH T_MOD T_PLUS T_MINUS T_CONCATENATE T_EQUAL T_NOT_EQUAL T_LESS_EQUAL T_GREATER_EQUAL T_LESS_THAN T_GREATER_THAN T_IS T_LIKE T_NOT T_AND T_OR T_XOR T_EQV T_IMP

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
    | printing {
        printf("\nCase : Printing");
    }
    | subblock {
        printf("\nCase : Sub Block");
    }
    | functionblock {
        printf("\nCase : Function Block");
    }
    | for {
    	printf("\nCase : for loop");
    }
    | while {
    	printf("\nCase : While loop");
    }
    | doWhile {
    	printf("\nCase : Do-While loop");
    }
    //| ifStatement {
    	//printf("\nCase : if-else-then");
    //}
    | COMMENT {
        printf("\nCase : Commenting");
    }
    | expression {
        printf("\nCase : Expression");
    }

vartype : T_AS DATATYPE 
    | /* empty */

declare : IDENTIFIER vartype
    | declare ',' IDENTIFIER vartype

declaration : T_DIM declare {    
        printf("\nDeclaration");
    }

//assignment : IDENTIFIER T_EQUAL value { 
  //      printf("\nAssignment");
    //} 

expression : expression T_POWER expression {
                printf("\nExpression (Power)");
            }
           | expression T_MULTIPLY expression {
                printf("\nExpression (Multiply)");
            }
           | expression T_DIVIDE expression {
                printf("\nExpression (Divide)");
            }
           | expression T_BACKSLASH expression {
                printf("\nExpression (Backslash)");
            }
           | expression T_MOD expression {
                printf("\nExpression (Modulus)");
            }
           | expression T_PLUS expression {
                printf("\nExpression (Addition)");
            }
           | expression T_MINUS expression {
                printf("\nExpression (Subtraction)");
            }
           | expression T_EQUAL expression {
                printf("\nExpression (Equal)");
            }
           | expression T_NOT_EQUAL expression {
                printf("\nExpression (Not Equal)");
            }
           | expression T_LESS_EQUAL expression {
                printf("\nExpression (Less Than or Equal)");
            }
           | expression T_GREATER_EQUAL expression {
                printf("\nExpression (Greater Than or Equal)");
            }
           | expression T_LESS_THAN expression {
                printf("\nExpression (Less Than)");
            }
           | expression T_GREATER_THAN expression {
                printf("\nExpression (Greater Than)");
            }
           | expression T_IS expression {
                printf("\nExpression (Is)");
            }
           | expression T_LIKE expression {
                printf("\nExpression (Like)");
            }
           | expression T_NOT expression {
                printf("\nExpression (Not)");
            }
           | expression T_AND expression {
                printf("\nExpression (And)");
            }
           | expression T_OR expression {
                printf("\nExpression (Or)");
            }
           | expression T_XOR expression {
                printf("\nExpression (Xor)");
            }
           | expression T_EQV expression {
                printf("\nExpression (Eqv)");
            }
           | expression T_IMP expression {
                printf("\nExpression (Imp)");
            }
           | value ;

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

subblock : T_SUB IDENTIFIER '(' declare ')' statements T_END T_SUB {
        printf("\nSub Block Statements");
    }
    
functionblock : T_FUNCTION IDENTIFIER '(' declare ')' vartype statements T_END T_FUNCTION {
        printf("\nFunction Block Statements");
    }


for : T_FOR expression T_TO NUMERIC_LITERAL statements T_NEXT IDENTIFIER {
    printf("\nFor loop");
	}

 //WhileCondition : T_WHILE expression | T_WHILE 

while : T_WHILE expression statements T_WEND {
    printf("\nWhile loop");
	}
	
doWhile : T_DO untWh expression statements T_EXIT_DO statements T_LOOP ;
 //| T_DO statements T_EXIT_DO statements T_LOOP untWh cond_w ;

untWh : T_WHILE | T_UNTIL


 //condtion can be NULL as well
//ifStatement : if elseif else ;

 //x : /* empty */
 //	| T_END_IF ;

 //something: else | elseif | elseif else ;

//if : T_IF expression T_THEN statements ;

//elseif : T_ELSE_IF expression T_THEN statements | /*empty*/ ; 
 
//else : T_ELSE statements | /*empty*/  ;




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
