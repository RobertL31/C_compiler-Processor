

%%
const 		{printf("tConst ");}
int			{printf("tInt ");}

"+"			{printf("t+ ");}
"-"			{printf("t- ");}
"*"			{printf("t* ");}
"/"			{printf("t/ ");}
"="			{printf("t= ");}
"("			{printf("tPO ");}
")"			{printf("tPF ");}
"{"			{printf("tAO ");}
"}"			{printf("tAF ");}
" "			{printf("tSpace ");}
"\n"		{printf("tBackN ");}
"\t"		{printf("tBackT ");}
","			{printf("tVirg ");}
";"			{printf("tPointVirg ");}

main 		{printf("tMAIN ");}	
printf		{printf("tPrintf ");}

[0-9]+ 	{printf("tNumber ");}	
[0-9]*\.[0-9]*	{printf("tDecimal ");}
[0-9]*\^[0-9]*	{printf("tExpo ");}


[a-zA-Z][0-Z_]*	{printf("tVARIABLE!!!!BOOOOO ");}
.			{printf("ERROR");}
	
	

%%


int yywrap(void) { return 1; }

int main(int argc, char *argv){
	while(yylex() != 0);
	return 0;
}
