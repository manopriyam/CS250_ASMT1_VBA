%{
#include <stdio.h>
%}


%%


'.*?\n { printf("\nCOMMENT: %s", yytext); }

"+"|"-"|"*"|"/"|"Mod"|"^"|"="|"<>"|"<="|">="|"<"|">"|"Is"|"Like"|"&"|"And"|"Eqv"|"Imp"|"Not"|"Or"|"Xor" { printf("\nOPERATOR: %s", yytext); }

\"[^\"]*\" { printf("\nSTRING: %s", yytext); }
Integer|Long|Single|Double|Currency|Decimal|Date|String|Boolean|Object|Variant { printf("\nDATA_TYPE: %s", yytext); }
Application|Workbook|Worksheet|Range|Cell|Chart|ChartObject|Shape|ShapeRange|TextBox|Button|CheckBox|ComboBox|ListBox|RadioButton|Image|Hyperlink|Comment|PivotTable|PivotField|PivotItem|ListObject|ListRow|ListColumn|QueryTable|Connection|CommandBarButton|CommandBar|Document|Paragraph|Section|Table|TableRow|TableColumn|Bookmark|Field|Recordset|Form|Control|Label|TextBox|CommandButton|ComboBox|ListBox|OptionButton|CheckBox|Frame|Page|PageBreak|PageSetup|PrintArea|WorksheetFunction|Shell	{ printf("\nOBJECT_TYPE: %s", yytext); }


vbBlack|vbRed|vbGreen|vbYellow|vbBlue|vbMagenta|vbCyan|vbWhite|vbDarkRed|vbDarkGreen|vbDarkYellow|vbDarkBlue|vbDarkMagenta|vbDarkCyan|vbDarkGray|vbLightGray|vbKeyBack|vbKeyTab|vbKeyClear|vbKeyReturn|vbKeyShift|vbKeyControl|vbKeyMenu|vbKeyPause|vbKeyEscape|vbKeySpace|vbKeyPageUp|vbKeyPageDown|vbKeyEnd|vbKeyHome|vbKeyLeft|vbKeyUp|vbKeyRight|vbKeyDown|vbKeySelect|vbKeyPrint|vbKeyExecute|vbKeySnapshot|vbKeyInsert|vbKeyDelete|vbKeyHelp|vbKeyNumLock|vbKeyDecimal|vbKeyDivide|vbKeyMultiply|vbKeySubtract|vbKeyAdd|vbKeyF1|vbKeyF2|vbKeyF3|vbKeyF4|vbKeyF5|vbKeyF6|vbKeyF7|vbKeyF8|vbKeyF9|vbKeyF10|vbKeyF11|vbKeyF12|vbKeyF13|vbKeyF14|vb { printf("\nCONSTANT: %s", yytext); }

Const|Dim|Enum|Public|Private|Static|ReDim|Preserve|ByVal|ByRef|Optional|ParamArray|End|EndIf|EndSelect|EndSub|EndFunction|EndProperty|EndWith|EndEnum|EndType|EndIf|EndSelect|EndSub|EndFunction|EndProperty|EndWith|EndEnum|EndType|Sub|Function|Property|End|Exit|ExitSub|ExitFunction|ExitProperty|ExitSub|ExitFunction|ExitProperty { printf("\nKEYWORD: %s", yytext); }

If|Then|Else|ElseIf|EndIf|Select|Case|EndSelect|For|To|Step|Next|Do|Loop|While { printf("\nCONTROL-FLOW: %s", yytext); }

[a-zA-Z][a-zA-Z0-9_]* { printf("\nIDENTIFIER: %s", yytext); }
[+-]?[0-9]*|[+-]?[0-9]*[.][0-9]* { printf("\nNUMBER: %s", yytext); }
"("|")"|"{"|"}"|"["|"]"|"<"|">" { printf("\nPARENTHESIS: %s", yytext); }

[\n\t ] { printf(" "); }

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

