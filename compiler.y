%{
    #include <stdio.h>
    #include <stdlib.h>

    #include "global.h"
    #include "symbols.h"
    #include "assembly.h"
    
    int yylex();
    void yyerror(char*);

    char instr[100];
    TypeInfos g_typeInfos;
    // That variable is used in the case of int i,j,k
    // To be able getting the type for j and k.

%}



%union {
    char * var;
    int nb;
    int duo[2];
    float fl_nb;
    TypeInfos typeInfos;
}


%token tMAIN
%token tInt
%token tConst

%token tPlus
%token tMinus
%token tMul
%token tDiv
%token tEqu


%token tPO
%token tPF
%token tAO
%token tAF
%token tOpenC
%token tCloseC
%token tMot


%token tSpace
%token tBackN
%token tBackT
%token tVirg
%token tPointVirg

%token tEsper

%token tPrintf

%token <nb> tIf
%token tElse
%token <duo> tWhile
%token tReturn
%token tLESS_THAN_OR_EQUAL_TO
%token tLESS_THAN
%token tGREATER_THAN_OR_EQUAL_TO
%token tGREATER_THAN
%token tDIFFERENT
%token tEQUALCOMPARISON

%token <nb> tNumber	
%token <nb> tDecimal
%token <nb> tExpo
%type <nb> Value 

%type <nb> IfPattern


%type <typeInfos> Type
%type <typeInfos> CoreType
%type <nb> PointerStars


%token <var> tVariable
%token ERROR

%right tEqu
%left tPlus tMinus
%left tMul tDiv
%left tPO tPF




%%

File:
        {printf("Starting to parse the file\n");}
        Fonctions
    ;

Fonctions:
        BodyComments Fonctions
    |
        Fonction Fonctions
    | 
        Fonction
    ;

Fonction:
        FonctionMain
    |
        Type tVariable tPO Params tPF Body
    ;

FonctionMain:
    Type tMAIN tPO Params tPF Body
    {printf("Finished to parse main function\n");}
    ;

Params:
        /*None*/
    |
        Param SuiteParams
        {printf("params have been parsed\n");}
    ;

Param:
        Type tVariable
    ;

SuiteParams:
        /*None*/
    |
        tVirg Param SuiteParams
    ;

Body:
        {printf("Starting to parse body\n");}
        tAO Declarations {printf("Finished declarations\n");} Instructions{printf("Finished instructions\n");} tAF
        {printf("Finished Body\n");}
    ;

BodyComments:
        tOpenC Comments tCloseC {printf("Parsed a comment\n");}
    ;

Comments:
        /*None*/
    |
        Comment Comments
    ;

Comment:
        tVariable
    ;
    
Declarations:
        /*None*/
    |
        Declaration Declarations
    |
        BodyComments Declarations
    ;

Declaration:
        Type tVariable tPointVirg {add_symbol($2,$1);}
        {printf("Parsed a declaration\n");}
    |   
        Type tVariable {add_symbol($2,$1);
                        g_typeInfos = $1;
                        } 
        SuiteVariables tPointVirg
        {printf("Parsed a (multiple) declaration\n");}
    ;

SuiteVariables:
        tVirg tVariable {add_symbol($2,g_typeInfos);}
    |
        tVirg tVariable {add_symbol($2,g_typeInfos);} SuiteVariables
    ;


Instructions:
        /*None*/
    |
        Instruction Instructions
    |
        BodyComments Instructions
    ;


Instruction:
        Affectation
    |
        IfInstruction
    |
        WhileInstruction
    |
        Print
;


WhileInstruction:
    tWhile {
                int line_number = get_line_number();
                $1[0] = line_number+1;
                // $1[0] now contains the start line of the compare statement evaluation
            }      
    tPO Comparaison tPF {
                                    int compare_result_adress = pop_temp_table();
                                    sprintf(instr,"JMF %d", compare_result_adress);
                                    int line_index = write_in_array(instr);
                                    $1[1] = line_index;
                                    // and we suppose the compare statement to be one assembly line only
                                }
    Body {
            int line_number = get_line_number();
            patch($1[1], line_number+2);
            // + 2 because we want it to jump after the following JMP instruction
            sprintf(instr,"JMP %d", $1[0]);
            // $1[0] because we want to jump back to the start of compare statement evaluation,
            // that is the current line when tWhile is parsed.
            write_in_array(instr);
        }
;




Print:
    tPrintf tPO tVariable tPF tPointVirg {
                                            if(check_symbol($3)){
                                                int adr_var = get_symbol_adress($3);
                                                sprintf(instr, "PRI %d", adr_var);
                                                write_in_array(instr);
                                            } else{
                                                fprintf(stderr,"Undeclared variable %s\n", $3);
                                                exit(1);
                                            }
                                        }
;



IfInstruction:
        IfPattern {
                    //That part can't be managed in IfPattern because we don't 
                    // know about if there is a else or not (line_number +1 / 2)
                    int line_number = get_line_number();
                    patch($1, line_number+1);
                    // + 1 is here because we want jmf to jump to the instruction after the if body end.
                    }
    |
        IfPattern tElse {
                            int line_number = get_line_number();
                            patch($1, line_number+2);
                            sprintf(instr,"JMP");
                            int line_index = write_in_array(instr);
                            $1 = line_index;
                        }
        Body {
                int line_number = get_line_number();
                patch($1, line_number+1);
            }
;


IfPattern:
        tIf tPO Comparaison tPF {
                                    int compare_result_adress = pop_temp_table();
                                    sprintf(instr,"JMF %d", compare_result_adress);
                                    int line_index = write_in_array(instr);
                                    $1 = line_index;
                                    // IfPattern return where is the if instruction, in case of else
                                    // We stock the value of line, so that we can patch the correct if statement when body is parsed.
                                } 
        Body {$$ = $1;}
            
;

Comparaison:
            Expression tEQUALCOMPARISON Expression {
                                                        int adr1 = pop_temp_table();
                                                        int adr2 = pop_temp_table();
                                                        int adr_result = queryAdress_temp_table();
                                                        sprintf(instr,"EQU %d %d %d", adr_result, adr2, adr1);
                                                        write_in_array(instr);
                                                    }
        |
            Expression tDIFFERENT Expression {
                                                // Each time, we consider !a to be 1-a, due to the fact boolean are just 0 and 1
                                                int adr1 = pop_temp_table();
                                                int adr2 = pop_temp_table();
                                                int adr_temp_result = queryAdress_temp_table();
                                                sprintf(instr, "EQU %d %d %d", adr_temp_result, adr2, adr1);
                                                write_in_array(instr);
                                                adr_temp_result = pop_temp_table();
                                                int adr_final_result = queryAdress_temp_table();
                                                // As every instruction is working on memory adress, we have to position a 1 somewhere.
                                                // We're querying the adress to position a 1, then AFC a 1 on it.
                                                int adr_of_1 = queryAdress_temp_table();
                                                // That instruction can seem to be useless, but it allows the adress of the one
                                                // To be removed from the temp_table
                                                adr_of_1 = pop_temp_table();
                                                sprintf(instr, "AFC %d 1", adr_of_1);
                                                write_in_array(instr);
                                                sprintf(instr,"SOU %d %d %d", adr_final_result, adr_of_1, adr_temp_result);
                                                write_in_array(instr);
                                            }
        |
            Expression tGREATER_THAN Expression {
                                                    int adr1 = pop_temp_table();
                                                    int adr2 = pop_temp_table();
                                                    int adr_result = queryAdress_temp_table();
                                                    sprintf(instr,"SUP %d %d %d", adr_result, adr2, adr1);
                                                    // adr2 then adr1 because the first popped is the last encountered
                                                    // So that, a > b produces a stack with b on top.
                                                    write_in_array(instr);
                                                }
        |
            Expression tLESS_THAN_OR_EQUAL_TO Expression {
                                                            int adr1 = pop_temp_table();
                                                            int adr2 = pop_temp_table();
                                                            int adr_temp_result = queryAdress_temp_table();
                                                            sprintf(instr, "SUP %d %d %d", adr_temp_result, adr2, adr1);
                                                            write_in_array(instr);
                                                            adr_temp_result = pop_temp_table();
                                                            int adr_final_result = queryAdress_temp_table();
                                                            int adr_of_1 = queryAdress_temp_table();
                                                            adr_of_1 = pop_temp_table();
                                                            sprintf(instr, "AFC %d 1", adr_of_1);
                                                            write_in_array(instr);
                                                            sprintf(instr,"SOU %d %d %d", adr_final_result, adr_of_1, adr_temp_result);
                                                            write_in_array(instr);
                                                        }
        |
            Expression tLESS_THAN Expression {
                                                int adr1 = pop_temp_table();
                                                int adr2 = pop_temp_table();
                                                int adr_result = queryAdress_temp_table();
                                                sprintf(instr,"INF %d %d %d", adr_result, adr2, adr1);
                                                write_in_array(instr);
                        
                                            }
        |
            Expression tGREATER_THAN_OR_EQUAL_TO Expression {
                                                                int adr1 = pop_temp_table();
                                                                int adr2 = pop_temp_table();
                                                                int adr_temp_result = queryAdress_temp_table();
                                                                sprintf(instr, "INF %d %d %d", adr_temp_result, adr2, adr1);
                                                                write_in_array(instr);
                                                                adr_temp_result = pop_temp_table();
                                                                int adr_final_result = queryAdress_temp_table();
                                                                int adr_of_1 = queryAdress_temp_table();
                                                                adr_of_1 = pop_temp_table();
                                                                sprintf(instr, "AFC %d 1", adr_of_1);
                                                                write_in_array(instr);
                                                                sprintf(instr,"SOU %d %d %d", adr_final_result, adr_of_1, adr_temp_result);
                                                                write_in_array(instr);
                                                            }
        |
            Expression {
                            // Just Expression is something like if(i).
                            // We consider the condition to be true if i != 0
                            // We just take again the code from 'tDIFFERENT' section
                            int adr1 = pop_temp_table();
                            int adr_temp_result = queryAdress_temp_table();
                            sprintf(instr, "EQU %d 0 %d", adr_temp_result, adr1);
                            write_in_array(instr);
                            adr_temp_result = pop_temp_table();
                            int adr_final_result = queryAdress_temp_table();
                            int adr_of_1 = queryAdress_temp_table();
                            adr_of_1 = pop_temp_table();
                            sprintf(instr, "AFC %d 1", adr_of_1);
                            write_in_array(instr);
                            sprintf(instr,"SOU %d %d %d", adr_final_result, adr_of_1, adr_temp_result);
                            write_in_array(instr);
                        }
;

 

Affectation:
        tVariable tEqu Expression {
                                    if (is_constant($1)){
                                        fprintf(stderr,"FATAL ERROR - tried to change value of constant variable\n");
                                    }
                                    printf("Parsed an affectation\n");
                                    printf("on parse la variable %s\n",$1);
                                    if(check_symbol($1)){
                                        int adr_var = get_symbol_adress($1);
                                        int adr_result = pop_temp_table();
                                        sprintf(instr, "COP %d %d", adr_var, adr_result);
                                        write_in_array(instr);
                                    } else {
                                        fprintf(stderr,"FATAL ERROR - Undeclared variable %s\n", $1);
                                        exit(1);
                                    }
                                }
            SuiteAffectations tPointVirg
    |
        tVariable tEqu Expression tPointVirg {
                                                if (is_constant($1)){
                                                    fprintf(stderr,"FATAL ERROR - tried to change value of constant variable\n");
                                                }
                                                if(check_symbol($1)){
                                                    int adr_var = get_symbol_adress($1);
                                                    int adr_result = pop_temp_table();
                                                    sprintf(instr, "COP %d %d", adr_var, adr_result);
                                                    write_in_array(instr);
                                                    }else{
                                                        fprintf(stderr,"Undeclared variable %s\n", $1);
                                                        exit(1);
                                                    }
                                            }
    ;

SuiteAffectations:
        tVirg tVariable tEqu Expression {
                                            if (is_constant($2)){
                                                fprintf(stderr,"FATAL ERROR - tried to change value of constant variable\n");
                                            }
                                            if(check_symbol($2)){
                                                int adr_var = get_symbol_adress($2);
                                                int adr_result = pop_temp_table();
                                                sprintf(instr, "COP %d %d", adr_var, adr_result);
                                                write_in_array(instr);
                                            } else{
                                                fprintf(stderr,"Undeclared variable %s\n", $2);
                                                exit(1);
                                            }
                                        }
    |
        tVirg tVariable tEqu Expression {
                                            if (is_constant($2)){
                                                fprintf(stderr,"FATAL ERROR - tried to change value of constant variable\n");
                                            }
                                            if(check_symbol($2)){
                                                int adr_var = get_symbol_adress($2);
                                                int adr_result = pop_temp_table();
                                                sprintf(instr, "COP %d %d", adr_var, adr_result);
                                                write_in_array(instr);
                                            } else {
                                                fprintf(stderr,"Undeclared variable %s\n", $2);
                                                exit(1);
                                            }
                                        }
        SuiteAffectations
    ;


Expression:
        tPO {printf("tPO\n");}Expression tPF {printf(" tPF\n");}
    |
        Expression tPlus Expression {
                                        int adr1 = pop_temp_table();
                                        int adr2 = pop_temp_table();
                                        int dest = queryAdress_temp_table();
                                        sprintf(instr, "ADD %d %d %d",dest, adr1, adr2 );
                                        write_in_array(instr);
                                    }
    |
        Expression tMinus Expression {
                                        int adr1 = pop_temp_table();
                                        int adr2 = pop_temp_table();
                                        int dest = queryAdress_temp_table();
                                        sprintf(instr, "SOU %d %d %d",dest, adr2, adr1 );
                                        write_in_array(instr);
                                    }
    |
        Expression tMul Expression {
                                        int adr1 = pop_temp_table();
                                        int adr2 = pop_temp_table();
                                        int dest = queryAdress_temp_table();
                                        sprintf(instr, "MUL %d %d %d",dest, adr1, adr2 );
                                        write_in_array(instr);
                                    }
    |
        Expression tDiv Expression {
                                        int adr1 = pop_temp_table();
                                        int adr2 = pop_temp_table();
                                        int dest = queryAdress_temp_table();
                                        sprintf(instr, "DIV %d %d %d",dest, adr2, adr1 );
                                        write_in_array(instr);
                                    }
    |
        tMinus Expression {
                            int adr1 = pop_temp_table();
                            int dest = queryAdress_temp_table();
                            // As in Comparaisons, we have to position a 0 somewhere.
                            int adr_of_0 = queryAdress_temp_table();
                            adr_of_0 = pop_temp_table();
                            sprintf(instr,"AFC %d 0", adr_of_0);
                            write_in_array(instr);
                            sprintf(instr,"SOU %d %d %d", dest, adr_of_0, adr1);
                            write_in_array(instr);
                        } 
    |
        tVariable {printf("on est dans une expression avec une variable%s",$1);} {
                                        int dest = queryAdress_temp_table();
                                        int sym_adr = get_symbol_adress($1);
                                        sprintf(instr, "COP %d @%d", dest, sym_adr);
                                        write_in_array(instr);
                                        }
    |
        Value {printf("on est dans une expression %d",$1);} {
                                    int adr = queryAdress_temp_table();
                                    sprintf(instr, "AFC %d %d", adr, $1 );
                                    write_in_array(instr);
                                }
    ;

Value:
        tNumber {printf("Parsed number, value is %d\n",$1);} {$$=$1;}
    |
        tExpo {printf("Parsed number, value is %d\n",$1);} {$$=$1;}
    |
        tDecimal {printf("Parsed number, value is %d\n",$1);} {$$=$1;}
    ;

Type:
        CoreType {$$ = $1;}
    |
        tConst CoreType { TypeInfos ans = {.type = $2.type, .ptr_level = $2.ptr_level, .constantness = true};
                            // Single line declaration, such as $$ = {...} doesnt work
                          $$ = ans; }
    ;

CoreType:
        tInt PointerStars {TypeInfos ans = {.type = INT, .ptr_level = $2, .constantness = false}; 
                          $$ = ans;}
    ;

PointerStars:
        /*None*/ {$$=0;}
    |
        tMul PointerStars {$$ = 1 + $2;}
;

%%

void yyerror(char * str){
    fprintf(stderr,"Error line %s\n", str);
}

int main(){
    init_symbol_table();
    init_temp_table();
    init_instr_tab();
    if (yyparse() == 0){
        printf("Analyse reussie\n");}
    printf("fini!!!");
    write_in_file();
    delete_instr_tab();
    delete_symbol_table();
    delete_temp_table();
    return 0;
}

