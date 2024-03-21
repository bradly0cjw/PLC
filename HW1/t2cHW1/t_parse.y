%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "t2c.h"
	#include "t_parse.h"
%}

%token lWRITE lREAD lIF lASSIGN
%token lRETURN lBEGIN lEND
%left  lEQU lNEQ lGT lLT lGE lLE
%left  lADD lMINUS
%left  lTIMES lDIVIDE
%token lLP lRP
%token lINT lREAL lSTRING
%token lELSE
%token lMAIN
%token lSEMI lCOMMA
%token lID lINUM lRNUM lQSTR
%expect 1

%%
prog	:	mthdcls
		{ printf("Program -> MethodDecls\n");
		  printf("Parsed OK!\n"); }
	|
		{ printf("****** Parsing failed!\n"); }	
	;

mthdcls	:	mthdcl mthdcls
		{ printf("MethodDecls -> MethodDecl MethodDecls\n"); }	
	|	mthdcl
		{ printf("MethodDecls -> MethodDecl\n"); }	
	;

type	:	lINT
		{ printf("Type -> INT\n"); }	
	|	lREAL
		{ printf("Type -> REAL\n"); }	
	;

mthdcl	:	type lMAIN lID lLP formals lRP block
		{ printf("MethodDecl -> Type MAIN ID LP Formals RP Block\n"); }	
	|	type lID lLP formals lRP block
		{ printf("MethodDecl -> Type ID LP Formals RP Block\n"); }	
	;

formals	:	formal oformal
		{ printf("Formals -> Formal OtherFormals\n"); }	
	|
		{ printf("Formals -> \n"); }	
	;

formal	:	type lID
		{ printf("Formal -> Type ID\n"); }	
	;

oformal	:	lCOMMA formal oformal
		{ printf("OtherFormals -> COMMA Formal OtherFormals\n"); }	
	|
		{ printf("OtherFormals -> \n"); }	
	;

// Statements and Expressions
block	:	lBEGIN stmts lEND
		{ printf("Block -> BEGIN Stmts END\n"); }	
	;
stmts : stmt stmts
		{printf("Stmts -> Stmt Stmts\n");}
	| 
		{printf("Stmts -> \n");}
	/* |   stmt
		{printf("Stmts -> Stmt\n");} */
	;
stmt	:	block 
		{printf("Stmts -> Block\n");}
	|   localvardecls
		{printf("Stmts -> LocalDecls\n");}
	|   assignstmt
		{printf("Stmts -> AssignStmt\n");}
	|   returnstmt
		{printf("Stmts -> ReturnStmt\n");}
	|   writestmt
		{printf("Stmts -> WriteStmt\n");}
	|   readstmt
		{printf("Stmts -> ReadStmt\n");}
	|   ifstmt
		{printf("Stmts -> IfStmt\n");}
	;
localvardecls : type lID lSEMI
		{printf("LocalDecls -> Type ID SEMI\n");}
	|   type assignstmt
		{printf("LocalDecls -> Type ID SEMI LocalDecls\n");}
	;
assignstmt : lID lASSIGN Expressions lSEMI
		{printf("AssignStmt -> LValue ASSIGN Expr SEMI\n");}
	;
returnstmt : lRETURN Expressions lSEMI
		{printf("ReturnStmt -> RETURN Expr SEMI\n");}
	;
ifstmt : lIF lLP Expressions lRP stmt
		{printf("IfStmt -> IF LP Expr RP Stmts\n");}
	|   lIF lLP Expressions lRP stmt lELSE stmt
		{printf("IfStmt -> IF LP Expr RP Stmts ELSE Stmts\n");}
	;
writestmt : lWRITE lLP Expressions lCOMMA lQSTR lRP lSEMI
		{printf("WriteStmt -> WRITE LP Expr COM QSTR RP SEMI\n");}
readstmt : lREAD lLP lID lCOMMA lQSTR lRP lSEMI
		{printf("ReadStmt -> READ LP ID COM QSTR RP SEMI\n");}
/* Expressions : multiplicativeExpr ((lADD | lMINUS) multiplicativeExpr)*
		{printf("Expr -> MultExpr AddOp MultExpr\n");}
	; */
/* Expressions : multiplicativeExpr
		{printf("Expr -> MultExpr\n");}
	|   multiplicativeExpr lADD multiplicativeExpr
		{printf("Expr -> MultExpr AddOp MultExpr\n");}
	|   multiplicativeExpr lMINUS multiplicativeExpr
		{printf("Expr -> MultExpr AddOp MultExpr\n");}
	; */
Expressions : mul muls
		{printf("Expr -> MultExpr MultExprs\n");}
	;
muls : lADD mul muls
		{printf("MultExprs -> AddOp MultExpr MultExprs\n");}
	|   lMINUS mul muls
		{printf("MultExprs -> SubOp MultExpr MultExprs\n");}
	|
		{printf("MultExprs -> \n");}
	;
mul : pimaryexpr pimaryexprs
		{printf("MultExpr -> PrimExpr\n");}
	;
pimaryexprs : lTIMES pimaryexpr pimaryexprs
		{printf("PrimExprs -> MultOp PrimExpr PrimExprs\n");}
	|   lDIVIDE pimaryexpr pimaryexprs
		{printf("PrimExprs -> DivOp PrimExpr PrimExprs\n");}
	|	
		{printf("PrimExprs -> \n");}
	;

/* multiplicativeExpr : pimaryexpr  ((lTIMES | lDIVIDE) pimaryexpr )*
		{printf("MultExpr -> PrimExpr MultOp PrimExpr\n");} */
	/* ; */
pimaryexpr : lINUM
		{printf("PrimExpr -> INUM\n");}
	|   lRNUM
		{printf("PrimExpr -> RNUM\n");}
	|   lID
		{printf("PrimExpr -> ID\n");}
	|   lLP Expressions lRP
		{printf("PrimExpr -> LP Expr RP\n");}
	|   lID lLP actualsParms lRP
		{printf("PrimExpr -> ID LP Actuals RP\n");}
	;
/* actualsParms : [Expressions (lCOMMA Expressions)*]
		{printf("Actuals -> [Exprs]\n");}
	; */
actualsParms : Expressions
		{printf("Actuals -> Exprs\n");}
	|   Expressions lCOMMA Expressions
		{printf("Actuals -> Exprs COM Exprs\n");}
	;

/* boolexpr : Expressions lEQU Expressions
		{printf("BoolExpr -> Expr EQ Expr\n");}
	|   Expressions lNEQ Expressions
		{printf("BoolExpr -> Expr NEQ Expr\n");}
	|   Expressions lGT Expressions
		{printf("BoolExpr -> Expr GT Expr\n");}
	|   Expressions lLT Expressions
		{printf("BoolExpr -> Expr LT Expr\n");}
	|   Expressions lGE Expressions
		{printf("BoolExpr -> Expr GE Expr\n");}
	|   Expressions lLE Expressions
		{printf("BoolExpr -> Expr LE Expr\n");}
	 ; */
%% 
int yyerror(char *s)
{
	printf("%s\n",s);
	return 1;
}

