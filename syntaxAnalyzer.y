%{ 
/* Definition section */
    #include<stdio.h> 
    #include<stdlib.h>  
    #include <string.h>
    int flag=0; 
    extern FILE *yyin;
%}

%union {
    int numval;
    char* strval;
    double fltval;
}

%start statements

%token <strval> COMMENT STRING_LITERAL OBJECT DATATYPE
%token <strval> T_END_IF T_ELSE_IF T_IF T_THEN T_ELSE T_SELECT_CASE T_END_SELECT T_CASE_ELSE T_CASE T_EXIT_FOR T_FOR_EACH T_FOR T_TO T_STEP T_NEXT T_EXIT_DO T_DO T_LOOP T_WHILE T_UNTIL T_WEND T_END_WITH T_WITH T_ON_ERROR T_ON T_GOTO T_GO_SUB T_RETURN
%token <strval> KEYWORD OPERATOR 
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
    | initialisation {
        printf("\nCase : Initialisation");
    }
    | printing {
        printf("\nCase : Printing");
    }


declaration : KEYWORD IDENTIFIER KEYWORD DATATYPE {    
        if (!strcmp($1, "Dim") && !strcmp($3, "As")) printf("\nDeclaration");
        else yyerror("\nSyntax error");
    }


initialisation : IDENTIFIER OPERATOR value {
        if (strcmp($2, "=")==0) printf("\nInitialisation");
    }

value : IDENTIFIER 
    | STRING_LITERAL 
    | NUMERIC_LITERAL 
    | FLOAT_LITERAL

printvalues : OPERATOR value printvalues {
        if (!strcmp($1, "&")) printf("\nPrinting Multiple");
        else yyerror("\nSyntax error");
    }
    | OPERATOR value {
        if (!strcmp($1, "&")) printf("\nPrinting Single");
        else yyerror("\nSyntax error");
    }

printing : KEYWORD STRING_LITERAL {
        if (!strcmp($1, "MsgBox")) printf("\nPrinting");
        else yyerror("\nSyntax error");
    }
    | KEYWORD STRING_LITERAL printvalues {
        if (!strcmp($1, "MsgBox")) printf("\nPrinting");
        else yyerror("\nSyntax error");
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

    if(flag==0) printf("\n\nValid\n\n"); 
} 
  
  
void yyerror() { 
   printf("\n\nInvalid\n\n"); 
   flag=1; 
} 
