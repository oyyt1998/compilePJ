%{
#include "parser.h"
int line = 1, col = 1;
%}
%option     noyywrap

DIGIT       [0-9]
INTEGER     {DIGIT}+
REAL        {DIGIT}+"."{DIGIT}*
WS          [ \t]+
EOL         [\n]
COMMENT     "(*"([^\)]|[^\*]\))*"*)"
ID          [a-zA-Z][a-zA-Z0-9]*
RESERVED    "AND"|"ARRAY"|"BEGIN"|"BY"|"DIV"|"DO"|"ELSE"|"ELSIF"|"END"|"EXIT"|"FOR"|"IF"|"IN"|"IS"|"LOOP"|"MOD"|"NOT"|"OF"|"OR"|"OUT"|"PROCEDURE"|"PROGRAM"|"READ"|"RECORD"|"RETURN"|"THEN"|"TO"|"VAR"|"WHILE"|"WRITE"
OPERATOR    ":="|"+"|"-"|"*"|"/"|"<"|"<="|">"|">="|"="|"<>"
DELIMITER   ":"|";"|","|"."|"("|")"|"["|"]"|"{"|"}"|"[<"|">]"|"\\" 
STRING         \"([^\n\t"])*\"

%%
<<EOF>>     { return 0; }
{WS}        { col += strlen(yytext); }
{COMMENT}   {  }
{EOL}       { line++; col = 1; }
{INTEGER}	{ col += strlen(yytext); yylval.val = create_node("integer", yytext, line,col); return INTEGER; }
{REAL}		{ col += strlen(yytext); yylval.val = create_node("real", yytext, line,col); return REAL; }
{STRING}    { col += strlen(yytext); yylval.val = create_node("string", yytext, line,col); return STRING; }

"+"         { col += strlen(yytext); yylval.val = create_node("operator", yytext, line,col); return ADD; }
"-"         { col += strlen(yytext); yylval.val = create_node("operator", yytext, line,col); return SUB; }
"*"         { col += strlen(yytext); yylval.val = create_node("operator", yytext, line,col); return MUL; }
"/"|"DIV"   { col += strlen(yytext); yylval.val = create_node("operator", yytext, line,col); return DIV; }
"("         { col += strlen(yytext); return LPAREN; }
")"         { col += strlen(yytext); return RPAREN; }
"PROGRAM"   { col += strlen(yytext); return PROGRAM; }
"IS"        { col += strlen(yytext); return IS; }
"VAR"       { col += strlen(yytext); return VAR; }
"TYPE"      { col += strlen(yytext); return TYPE; }
"PROCEDURE" { col += strlen(yytext); return PROCEDURE; }
";"         { col += strlen(yytext); return SEMI; }
"{"         { col += strlen(yytext); return LP; }
"}"         { col += strlen(yytext); return RP; }
","         { col += strlen(yytext); return COM; }
"[<"        { col += strlen(yytext); return LARRAY; }
">]"        { col += strlen(yytext); return RARRAY; }
"["         { col += strlen(yytext); return LS; }
"]"         { col += strlen(yytext); return RS; }
":"         { col += strlen(yytext); return COLON; }
":="        { col += strlen(yytext); yylval.val = create_node("operator", yytext, line,col); return DEF; }
"="         { col += strlen(yytext); yylval.val = create_node("operator", yytext, line,col); return EQ; }
"."         { col += strlen(yytext); return DOT; }
"BEGIN"     { col += strlen(yytext); return BEGINE; }
"END"       { col += strlen(yytext); return END; }
"ARRAY"     { col += strlen(yytext); return ARRAY; }
"OF"        { col += strlen(yytext); return OF; }
"RECORD"    { col += strlen(yytext); return RECORD; }
"WRITE"     { col += strlen(yytext); return WRITE; }
"READ"      { col += strlen(yytext); return READ; }
"NOT"       { col += strlen(yytext); return NOT; }
"AND"       { col += strlen(yytext); return AND; }
"OR"        { col += strlen(yytext); return OR; }
"MOD"       { col += strlen(yytext); return MOD; }
"IF"        { col += strlen(yytext); return IF; }
"THEN"      { col += strlen(yytext); return THEN; }
"ELSIF"     { col += strlen(yytext); return ELSIF; }
"ELSE"      { col += strlen(yytext); return ELSE; }
"WHILE"     { col += strlen(yytext); return WHILE; }
"DO"        { col += strlen(yytext); return DO; }
"LOOP"      { col += strlen(yytext); return LOOP; }
"FOR"       { col += strlen(yytext); return FOR; }
"TO"        { col += strlen(yytext); return TO; }
"BY"        { col += strlen(yytext); return BY; }
"EXIT"      { col += strlen(yytext); return EXIT; }
"RETURN"    { col += strlen(yytext); return RETURN; }
"<"         { col += strlen(yytext); yylval.val = create_node("operator", yytext, line,col); return L; }
">"         { col += strlen(yytext); yylval.val = create_node("operator", yytext, line,col); return G; }
"<="        { col += strlen(yytext); yylval.val = create_node("operator", yytext, line,col); return LE; }
">="        { col += strlen(yytext); yylval.val = create_node("operator", yytext, line,col); return GE; }
"<>"        { col += strlen(yytext); yylval.val = create_node("operator", yytext, line,col); return NEQ; }
{ID}        { col += strlen(yytext); yylval.val = create_node("identifier", yytext, line,col); return ID; }
%%
