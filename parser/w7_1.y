%{
#include<stdio.h>
#include<stdlib.h>
int yylex();
int yyerror();
extern FILE *yyin;
%}

%token PROGRAM
%token NL    //new line

%token COMMA
%token SEMICOLON

%token LBR  //{ }
%token RBR

%token LSQB //[ ]
%token RSQB

%token DOT // .

%token IDENTIFIER

%token PACKAGE
%token PRIVATE
%token ENDPACKAGE
%token END
%token SEE
%token LOOP
%token CHANGE_RING_OPERATOR
%token CHANGE_RING_KEYWORD
%token IF
%token GET
%token GIVE
%token LOAD
%token LOADSYNTAX
%token FOR
%token WHILE
%token DO
%token RETURN
%token TRY
%token IMPORT
%token EXIT
%token BYE
 

%%
stmt:STATEMENT NL;
STATEMENT:LBR PROGRAM RBR
          |PACKAGE IDENTIFIER LBR DOT IDENTIFIER RBR LSQB LBR LBR STATEMENT RBR RBR RSQB LSQB END|ENDPACKAGE RSQB
          |PRIVATE
          |
          ;
%%

int yyerror(char *msg)
{
	printf("\n Invalid\n");
	exit(0);
}

void main()
{
	printf("\n Enter the expression:\n");
	yyin=fopen("1.txt","r");
        do{
            if(yyparse())
            {
               printf("\nFailure:\n");
               exit(0);
            }
        }while(!feof(yyin));
         
        printf("\nSuccess\n");
}
