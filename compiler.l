%{
	#include "global.h"
	#include "y.tab.h"
	#include "symbols.h"
    typedef enum {
		IS_NUMBER,
		IS_DECIMAL,
		IS_STRING
	} UNION_TYPE;

	void get_yylval(UNION_TYPE a);
%}


%%
const 			{return tConst;}
int				{return tInt;}
"+"				{return tPlus;}
"-"				{return tMinus;}
"*"				{return tMul;}
"/"				{return tDiv;}
"="				{return tEqu;}
"("				{return tPO;}
")"				{return tPF;}
"{"				{	depth_increase();
					return tAO;}
"}"				{	depth_decrease();
					return tAF;}
" "				{/*return tSpace;*/}
"\n"			{/*return tBackN;*/}
"\t"			{/*return tBackT;*/}
","				{return tVirg;}
";"				{return tPointVirg;}

"&"				{return tEsper;}

main 			{return tMAIN;}	
printf			{return tPrintf;}


if              {return tIf;}
else            {return tElse;}
while           {return tWhile;}
return          {return tReturn;}
"<="		    {return tLESS_THAN_OR_EQUAL_TO; }
"<"		        {return tLESS_THAN; }
">="		    {return tGREATER_THAN_OR_EQUAL_TO; }
">"		        {return tGREATER_THAN; }
"!="		    {return tDIFFERENT; }
"=="		    {return tEQUALCOMPARISON; }
"/*"			{return tOpenC;}
"*/"			{return tCloseC;}

[0-9]+ 			{	get_yylval(IS_NUMBER);
					return tNumber;}	
[0-9]*\.[0-9]*	{	get_yylval(IS_DECIMAL);
					return tDecimal;}
[0-9]*\^[0-9]*	{	get_yylval(IS_STRING);
					return tExpo;}


[a-zA-Z][0-9A-Za-z_]*	{ get_yylval(IS_STRING);
						return tVariable;}

.			{printf("\nEEEERRRRRRRROOOORRRR\n");}

%%


int yywrap(void) { return 1; }

void get_yylval(UNION_TYPE a){
	if(a == IS_STRING){
		int len = strlen(yytext); 
		yylval.var = malloc(len);
		strncpy(yylval.var, yytext, len);
	} 

	if(a == IS_NUMBER){
		yylval.nb = atoi(yytext);
	}

	if(a == IS_DECIMAL){
		yylval.fl_nb = atof(yytext);
	}
}

/*
int main(int argc, char *argv){
	while(yylex() != 0);
	return 0;
}
*/