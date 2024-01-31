%{
#include <stdio.h>
%}


%%


'.*?\n { printf("\nCOMMENT: %s", yytext); }
\"[^\"]*\" { printf("\nSTRING_LITERAL: %s", yytext); }

Application|Workbook|Worksheet|Range|Cell|Chart|ChartObject|Shape|ShapeRange|TextBox|Button|CheckBox|ComboBox|ListBox|RadioButton|Image|Hyperlink|Comment|PivotTable|PivotField|PivotItem|ListObject|ListRow|ListColumn|QueryTable|Connection|CommandBarButton|CommandBar|Document|Paragraph|Section|Table|TableRow|TableColumn|Bookmark|Field|Recordset|Form|Control|Label|TextBox|CommandButton|ComboBox|ListBox|OptionButton|CheckBox|Frame|Page|PageBreak|PageSetup|PrintArea|WorksheetFunction|Shell	{ printf("\nOBJECT_TYPE: %s", yytext); }

vb[a-zA-Z]+ { printf("\nCONSTANT: %s", yytext); }

"Boolean"|"Byte"|"Collection"|"Currency"|"Date"|"Decimal"|"Dictionary"|"Double"|"Integer"|"Long"|"LongLong"|"LongPtr"|"Object"|"Single"|"String"|"Variant" { printf("\nDATA_TYPE: %s", yytext); }

"If"|"Then"|"Else"|"ElseIf"|"EndIf"|"SelectCase"|"EndSelect"|"Case"|"CaseElse"|"For"|"To"|"Step"|"Next"|"ExitFor"|"Do"|"Loop"|"While"|"Until"|"ExitDo"|"ForEach"|"Wend"|"With"|"EndWith" { printf("\nCONTROL_FLOW:%s",yytext); }

Const|Color|Dim|Enum|Public|Private|Static|ReDim|Preserve|ByVal|ByRef|Optional|ParamArray|End|EndIf|EndSelect|EndSub|EndFunction|EndProperty|EndWith|EndEnum|EndType|EndIf|EndSelect|EndSub|EndFunction|EndProperty|EndWith|EndEnum|EndType|Sub|Function|Font|Property|End|Exit|ExitSub|ExitFunction|ExitProperty|ExitSub|ExitFunction|ExitProperty { printf("\nKEYWORD: %s", yytext); }

"^"|"*"|"/"|"\\"|"Mod"|"+"|"-"|"&" { printf("\nARITHMETIC_OPERATOR: %s", yytext); }
"="|"<>"|"<="|">="|"<"|">"|"Is"|"Like" { printf("\nCOMPARISON_OPERATOR: %s", yytext); }
"Not"|"And"|"Or"|"Xor"|"Eqv"|"Imp" { printf("\nLOGICAL_OPERATOR: %s", yytext); }
[+-]?[0-9]+ { printf("\nNUMERIC_LITERAL: %s", yytext); }
[+-]?[0-9]*[.][0-9]+|[+-]?[0-9]+[.][0-9]* { printf("\nFLOAT_LITERAL: %s", yytext); }

[a-zA-Z][a-zA-Z0-9_]* { printf("\nIDENTIFIER: %s", yytext); }

"("|")"|"{"|"}"|"["|"]" { printf("\nPARENTHESIS: %s", yytext); }

[_;:,.] { printf("\nSEPARATOR: %s", yytext); }

[\n\t ]* { printf(" "); }


%%


int yywrap() {
	return 1;
}

void main (int argc, char** argv) 
{
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

