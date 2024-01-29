%{
#include <stdio.h>
%}


%%


'.*?\n { printf("\nCOMMENT: %s", yytext); }

"+"|"-"|"*"|"/"|"Mod"|"^"|"="|"<>"|"<="|">="|"<"|">"|"Is"|"Like"|"&"|"And"|"Eqv"|"Imp"|"Not"|"Or"|"Xor" { printf("\nOPERATOR: %s", yytext); }

[a-zA-Z]+\(.*\) { printf("\nFUNCTION: %s", yytext); }

[a-zA-Z][a-zA-Z0-9_]* { printf("\nIDENTIFIER: %s", yytext); }

[+-]?[0-9]*|\".*?\"|[+-]?[0-9]*[.][0-9]* { printf("\nCONSTANT: %s", yytext); }

[\n\t ]* { printf(" "); }


%%


int yywrap() {
	return 1;
}

void main (int argc, char** argv) {
    FILE *file;
    file = fopen(argv[1], "r");

    if (argc<2) {
        printf("ERROR : Insufficient Arguments. Missing file name.\n");
        return;
    }

    if (!file) {
        printf("ERROR : Could NOT Open the file.\n");
        return;
    }
    
    yyin=file;
    yylex();
    printf("\n");
    return;
}

