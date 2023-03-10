%option noyywrap

%{
#include "lab56.tab.h"
%}

%option noyywrap
%option caseless
%option yylineno
%option lex-compat

letter      [A-Za-z]
underscore  "_"
digit     [0-9]
non_zero_digit    [1-9]
zero        "0"
identifier  {underscore}*{letter}({letter}|{digit}|{underscore})*
number      ("-")?{non_zero_digit}{digit}*
string      \"[^\n]*\"
delimiter   [;,.]
operator [+*/()<>]|"-"|"["|"]"|"{"|"}"|"%"

%x COMMENT

%%
[ \t\n]

"/*" { COMMENT; }

<COMMENT>[^*/]+ { /* ignore anything that is not '*' or '/' */ }
<COMMENT>("*"+)"/" { BEGIN INITIAL; }
<COMMENT>[*/] { /* residual stuff */ }

main     {return MAIN;}


integer     {return INT;}
string      {return STRING;}

READ        {return READ;}
WRITE       {return WRITE;}


if          {return IF;}
else        {return ELSE;}
while       {return WHILE;}
for	        {return FOR;}
": "        {return ASSIG;}
"="         {return ATR;}
"<="        {return LE;}
"=="        {return EQ;}
">="        {return GE;}
"!="        {return NE;}
"||"        {return OR;}
"&&"        {return AND;}

{identifier} {return ID;}
{number}     {return NUMBER_CONST;}
{zero}       {return ZERO_CONST;}
{string}     {return STRING_CONST;}

{delimiter}	{return yytext[0];}
{operator}	{return yytext[0];}

.		{printf ("eroare lexicala");}

%%
