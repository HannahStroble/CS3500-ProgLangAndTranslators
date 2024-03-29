/*
Hannah Reinbolt
2-8-2019
PLT section 1A
Assignment #2 - Syntax Analysis

Note: This file is a reference file for the .y (bison) file. See that file to run.
*/

%{
/* Const, vars, function prototypes and #includes */
%}

/* Defines of regular expressions*/ 
WSPACE		[ \t\r]+
NEWLINE		\n

DIGIT		[0-9]
LETTER		[a-zA-Z]

IDENT		[a-zA-Z0-9\_]+[a-zA-Z0-9\_]*
INTCONST	[+-]?[0-9]+

FLOATCONST	[+-]?[0-9]*\.[0-9]+
STRCONST	\"([^"\n]|\.)*\"

COMMENT		#+.*\n*
%%


";"		{
			printTokenInfo("SEMICOLON", yytext);
			return T_SEMICOLON;
		}
","		{
			printTokenInfo("COMMA", yytext);
			return T_COMMA;
		}
"{"		{
			printTokenInfo("LBRACE", yytext);
			return T_LBRACE;
		}
"}"		{
			printTokenInfo("RBRACE", yytext);
			return T_RBRACE;
		}
")"		{
			printTokenInfo("RPAREN", yytext);
			return T_RPAREN;
		}
"("		{
			printTokenInfo("LPAREN", yytext);
			return T_LPAREN;
		}
"]"		{
			printTokenInfo("RBRACKET", yytext);
			return T_RBRACKET;
		}
"["		{
			printTokenInfo("LBRACKET", yytext);
			return T_LBRACKET;
		}
"+"		{
			printTokenInfo("ADD", yytext);
			return T_ADD;
		}
"-"		{
			printTokenInfo("SUB", yytext);
			return T_SUB;
		}
"*"		{
			printTokenInfo("MULT", yytext);
			return T_MULT;
		}
"/"		{
			printTokenInfo("DIV", yytext);
			return T_DIV;
		}
"%%"		{
			printTokenInfo("MOD", yytext);
			return T_MOD;
		}
"^"		{
			printTokenInfo("POWER", yytext);
			return T_POWER;
		}
"<"		{
			printTokenInfo("LT", yytext);
			return T_LT;
		}
">"		{
			printTokenInfo("GT", yytext);
			return T_GT;
		}
"<="		{
			printTokenInfo("LE", yytext);
			return T_LE;
		}
">="		{
			printTokenInfo("GE", yytext);
			return T_GE;
		}
"=="		{
			printTokenInfo("EQ", yytext);
			return T_EQ;
		}
"!="		{
			printTokenInfo("NE", yytext);
			return T_NE;
		}
"!"		{
			printTokenInfo("NOT", yytext);
			return T_NOT;
		}
"&"		{
			printTokenInfo("AND", yytext);
			return T_AND;
		}
"|"		{
			printTokenInfo("OR", yytext);
			return T_OR;
		}
"="		{
			printTokenInfo("ASSIGN", yytext);
			return T_ASSIGN;
		}
"if"		{
			printTokenInfo("IF", yytext);
			return T_IF;
		}
"else"		{
			printTokenInfo("ELSE", yytext);
			return T_ELSE;
		}
"while"		{
			printTokenInfo("WHILE", yytext);
			return T_WHILE;
		}
"function"	{
			printTokenInfo("FUNCTION", yytext);
			return T_FUNCTION;
		}
"for"		{
			printTokenInfo("FOR", yytext);
			return T_FOR;
		}
"in"		{
			printTokenInfo("IN", yytext);
			return T_IN;
		}
"next"		{
			printTokenInfo("NEXT", yytext);
			return T_NEXT;
		}
"break"		{
			printTokenInfo("BREAK", yytext);
			return T_BREAK;
		}
"TRUE"		{
			printTokenInfo("TRUE", yytext);
			return T_TRUE;
		}
"FALSE"		{
			printTokenInfo("FALSE", yytext);
			return T_FALSE;
		}
"quit"		{
			printTokenInfo("QUIT", yytext);
			return T_QUIT;
		}
"print"		{
			printTokenInfo("PRINT", yytext);
			return T_PRINT;
		}
"cat"		{
			printTokenInfo("CAT", yytext);
			return T_CAT;
		}
"read"		{
			printTokenInfo("READ", yytext);
			return T_READ;
		}
"list"		{
			printTokenInfo("LIST", yytext);
			return T_LIST;
		}
{COMMENT}		{
			comments++;
		}
{FLOATCONST}	{
			printTokenInfo("FLOATCONST", yytext);
			return T_FLOATCONST;
		}
{INTCONST}	{
			printTokenInfo("INTCONST", yytext);
			return T_INTCONST;
		}
{STRCONST}	{
			printTokenInfo("STRCONST", yytext);
			return T_STRCONST;
		}
{IDENT}		{
			printTokenInfo("IDENT", yytext);
			return T_IDENT;
		}
{NEWLINE}	{
			numLines++;
		}
{WSPACE}	{
			spaces++;
		}
.		{
			printTokenInfo("UNKNOWN", yytext);
			return T_UNKNOWN;
		}
%%









