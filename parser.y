%{
#include <iostream>
#include <string>

#include "tree.h"
#include "lex.c"
using namespace std;
node_t* root;


void yyerror(const char *msg) {
	cout << "Error at line: " << line << ", column: " << col << endl;
	cerr << msg << endl;
}
%}

%union {
  node_t* val;
}

%token <val> MOD AND OR G L GE LE NEQ NOT ADD SUB MUL DIV ID DEF EQ INTEGER REAL STRING
%token WHILE DO RETURN IF ELSIF ELSE FOR TO BY LARRAY RARRAY EXIT THEN LOOP PROGRAM IS SEMI BEGINE END VAR TYPE PROCEDURE READ DOT OF COM 
%token WRITE ARRAY RECORD COLON LS RS LP RP LPAREN RPAREN 

%type <val> program
%type <val> body
%type <val> declaration_list
%type <val> declaration
%type <val> var-decl_list
%type <val> type-decl_list
%type <val> procedure-decl_list
%type <val> procedure-decl
%type <val> var-decl
%type <val> type-decl
%type <val> id_list
%type <val> type
%type <val> component
%type <val> component_list
%type <val> formal-params
%type <val> fp-section
%type <val> fp-section_list
%type <val> statement_list
%type <val> statement
%type <val> elsif_list
%type <val> else-statement
%type <val> by-statement
%type <val> write-params
%type <val> write-params_list
%type <val> write-expr
%type <val> expression
%type <val> lvalue
%type <val> lvalue_list
%type <val> actual-params
%type <val> expression_list
%type <val> comp-values
%type <val> comp-values_list
%type <val> array-value_list
%type <val> array-values
%type <val> array-value
%type <val> binary-op
%type <val> unary-op
%type <val> number

%%
program:
  PROGRAM IS body SEMI { $$ = create_node("program", "",line,col); $$->append($3); root = $$; }
  ;
body:
  declaration_list BEGINE statement_list END { $$ = create_node("body", "",line,col); $$->append($1); $$->append($3); }
  ;
declaration_list:
  { $$ =NULL; }
  | declaration_list declaration { $$ = create_node("declaration_list", "", line,col); $$->appendChildren($1);$$->append($2); }
  ;
declaration:
  VAR var-decl_list {$$  = create_node("declaration","", line,col); $$->append($2); }
  | TYPE type-decl_list { $$ = create_node("declaration", "",line,col); $$->append($2);}
  | PROCEDURE procedure-decl_list {$$ = create_node("declaration","",line,col); $$->append($2); }
  ;
var-decl_list:
  { $$ = NULL; }
  | var-decl_list var-decl { $$ = create_node("var-decl_list", "",line,col); $$->appendChildren($1); $$->append($2); }
  ;
var-decl:
  ID id_list COLON type DEF expression SEMI { $$ = create_node("var-decl", "", line,col); $$->append($1); $$->appendChildren($2); $$->append($4); $$->append($6);}
  | ID id_list DEF expression SEMI { $$ = create_node("var-decl", "", line,col); $$->append($1); $$->appendChildren($2); $$->append($4); }
  ;
type-decl_list:
  { $$ = NULL; }
  | type-decl_list type-decl { $$ = create_node("type-decl_list", "",line,col); $$->appendChildren($1); $$->append($2); }
  ;
type-decl:
  ID IS type SEMI { $$ = create_node("type-decl", "",line,col); $$->append($1); $$->append($3);}
  ;
procedure-decl_list:
  { $$ = NULL; }
  | procedure-decl_list procedure-decl{ $$ = create_node("procedure-decl_list", "",line,col); $$->appendChildren($1); $$->append($2); }
  ;
procedure-decl:
  ID formal-params COLON type IS body SEMI { $$ = create_node("procedure-decl", "",line,col); $$->append($1); $$->append($2); $$->append($4); $$->append($6);}
  | ID formal-params IS body SEMI{ $$ = create_node("procedure-decl", "",line,col); $$->append($1); $$->append($2);$$->append($4); }
  ;
type:
  ID { $$ = create_node("type",$1->info,line,col); $$->append($1); }
  | ARRAY OF type{ $$ = create_node("type","",line,col); $$->append($3); }
  | RECORD component component_list END{ $$ = create_node("type","",line,col); $$->append($2); $$->appendChildren($3); }
  ;
component:
  ID COLON type SEMI{ $$ = create_node("component","",line,col); $$->append($1); $$->append($3); }
  ;
component_list:
  | component_list component{ $$ = create_node("component_list", "",line,col); $$->appendChildren($1); $$->append($2); }
  ;
formal-params:
  LPAREN fp-section fp-section_list RPAREN{ $$ = create_node("formal-params", "",line,col); $$->append($2); $$->appendChildren($3); }
  | LPAREN RPAREN {$$ = create_node("formal-params", "",line,col);}
  ;
fp-section:
  ID id_list COLON type{ $$ = create_node("fp-section", "",line,col); $$->append($1); $$->appendChildren($2); $$->append($4); }
  ;
fp-section_list:
  | fp-section_list SEMI fp-section{ $$ = create_node("fp-section+list", "",line,col); $$->appendChildren($1); $$->append($3); }
  ;
id_list:
  { $$ = NULL; }
  | id_list COM ID { $$ = create_node("id_list","",line,col); $$->appendChildren($1); $$->append($3); }
  ;
statement_list:
  { $$ = NULL; }
  | statement_list statement {$$ = create_node("statement_list","",line,col); $$->appendChildren($1); $$->append($2); }
  ;
statement:
  WRITE write-params SEMI {$$ = create_node("statement","",line,col); $$->append($2); }
  | READ LPAREN lvalue lvalue_list RPAREN SEMI {$$ = create_node("statement","",line,col); $$->append($3); $$->appendChildren($4); }
  | lvalue DEF expression SEMI {$$ = create_node("statement","",line,col); $$->append($1); $$->append($3);}
  | ID actual-params SEMI {$$ = create_node("statement","",line,col); $$->append($1); $$->append($2); }
  | IF expression THEN statement_list elsif_list else-statement END SEMI{ $$ = create_node("statement","",line,col); $$->append($2); $$->appendChildren($4); $$->appendChildren($5); $$->append($6); }
  | WHILE expression DO statement_list END SEMI{ $$ = create_node("statement","",line,col);$$->append($2);$$->appendChildren($4); }
  | LOOP statement_list END SEMI{$$ = create_node("statement","",line,col); $$->appendChildren($2); }
  | FOR ID DEF expression TO expression by-statement DO statement_list END SEMI{$$ = create_node("statement","",line,col); $$->append($2); $$->append($4); $$->append($6); $$->append($7); $$->appendChildren($9); }
  | EXIT SEMI{$$ = create_node("statement","",line,col); }
  | RETURN expression SEMI{$$ = create_node("statement","",line,col); $$->append($2); }
  | RETURN SEMI{$$ = create_node("statement","",line,col); } 
  ;
elsif_list:
  | ELSIF expression THEN statement_list{$$ = create_node("elsif_list","",line,col); $$->append($2); $$->appendChildren($4);} 
  ;
else-statement:
  | ELSE statement_list{$$ = create_node("else-statement","",line,col); $$->appendChildren($2);} 
  ;
by-statement:
  | BY expression {$$ = create_node("by-statement","",line,col); $$->append($2); } 
  ;
write-params:
  LPAREN write-expr write-params_list RPAREN {$$ = create_node("write-params", "",line,col); $$->append($2); $$->appendChildren($3); }
  | LPAREN RPAREN {$$ = create_node("write-params", "",line,col);}
  ;
write-params_list:
  {$$ = NULL;}
  | write-params_list COM write-expr {$$ = create_node("write-params_list", "",line,col); $$->appendChildren($1); $$->append($3); }
  ;
write-expr:
  STRING {$$ = create_node("write-expr", "",line,col); $$->append($1);}
  | expression {$$ = create_node("write-expr", "",line,col); $$->append($1); }
  | number {$$ = create_node("write-expr", "",line,col); $$->append($1);}
  ;
expression:
  number { $$ = create_node("expression", "", line,col); $$->append($1); $$->info = $1->info; }
  | lvalue { $$ = create_node("expression", "", line,col); $$->append($1); $$->info = $1->info; }
  | LPAREN expression RPAREN { $$ = create_node("expression", "", line,col); $$->append($2); $$->info = "(" + $2->info + ")";}
  | expression binary-op expression {$$ = create_node("expression", "", line,col); $$->append($1); $$->append($2); $$->append($3); $$->info = $1->info+$2->info+$3->info; }
  | unary-op expression {$$ = create_node("expression", "", line,col); $$->append($1); $$->append($2);$$->info = $1->info+$2->info;}
  | ID actual-params {$$ = create_node("expression", "", line,col); $$->append($1); $$->append($2);$$->info = $1->info+$2->info;}
  | ID comp-values {$$ = create_node("expression", "", line,col); $$->append($1); $$->append($2);$$->info = $1->info+$2->info;}
  | ID array-values {$$ = create_node("expression", "", line,col); $$->append($1); $$->append($2);$$->info = $1->info+$2->info;}
  ;
lvalue:
  ID {$$ = create_node("lvalue",$1->info,line,col); $$->append($1);}
  | lvalue LS expression RS {$$ = create_node("lvalue", "", line,col); $$->append($1); $$->append($3);$$->info = $1->info+ "[" + $3->info+ "]";}
  | lvalue DOT ID {$$ = create_node("lvalue", "", line,col); $$->append($1); $$->append($3);$$->info = $1->info+"."+$3->info;}
  ;
lvalue_list:
  { $$ = NULL; }
  | lvalue_list COM lvalue { $$ = create_node("lvalue_list", "",line,col); $$->appendChildren($1); $$->append($3); }
  ;
actual-params:
  LPAREN RPAREN { $$ = create_node("actual-params", "", line,col);}
  | LPAREN expression expression_list RPAREN { $$ = create_node("actual-params", "", line,col); $$->append($2); $$->appendChildren($3); }
  ;
expression_list:
  { $$ = NULL; }
  | expression_list COM expression {$$ = create_node("expression_list", "", line,col);$$->appendChildren($1); $$->append($3); }
  ;
comp-values:
  LP ID DEF expression comp-values_list RP { $$ = create_node("comp-values", "", line,col); $$->info = "{"+$2->info+":="+ $4->info+"}";} 
  ;
comp-values_list:
  | SEMI ID DEF expression { $$ = create_node("comp-values_list", "", line,col); $$->append($2); $$->append($4); }
  ;
array-values:
  LARRAY array-value array-value_list RARRAY{ $$ = create_node("array_values","", line,col); $$->append($2); $$->appendChildren($3); }
  ;
array-value_list:
  | array-value_list COM array-value{ $$ = create_node("array_values_list","", line,col); $$->appendChildren($1); $$->append($3); }
  ;
array-value:
  expression OF expression{ $$ = create_node("array_value","", line,col); $$->append($1); $$->append($3); }  
  | expression { $$ = create_node("array_value","", line,col); $$->append($1); }
  ;
number:
  INTEGER { $$ = $1; }
  | REAL { $$ = $1; }
  ;
unary-op:
  ADD { $$ = $1; }
  | SUB { $$ = $1; }
  | NOT { $$ = $1; }
  ;
binary-op:
  ADD { $$ = $1; }
  | SUB { $$ = $1; }
  | MUL { $$ = $1; }| DIV { $$ = $1; }| MOD { $$ = $1; }| OR { $$ = $1; }| AND{ $$ = $1; }
  | G { $$ = $1; }| L { $$ = $1; }| GE { $$ = $1; }| LE { $$ = $1; }| EQ { $$ = $1; }| NEQ { $$ = $1; }
  ;
%%
