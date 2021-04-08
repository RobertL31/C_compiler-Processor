#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#include "symbols.h"

#define SYMBOL_TABLE_SIZE 100
#define TEMP_TABLE_SIZE 200

typedef struct s_symbol{
    char * name;
    int depth;
} Symbol;

//structure pour la table temporaire
typedef struct s_tempSymbol{
    int adress;
} TempSymbol;

// table : contains reference to Symbol 
// head : represent the first available space (table[head] is a null reference, don't use it)
// When head is 0, the table is empty.
typedef struct s_symbolTable{
    Symbol** table;
    int head;
} SymbolTable;


typedef struct s_tempTable{
    TempSymbol** table;
    int head;
} TempTable;


SymbolTable *symbolTable;
TempTable *tempTable;


int actualDepth = 0;


int get_depth(){
    return actualDepth;
}


void init_temp_table(){
    tempTable = malloc(sizeof(TempTable));
    tempTable->table = malloc(TEMP_TABLE_SIZE * sizeof(TempSymbol*) );
    tempTable->head = 0;
}


void init_symbol_table(){
    symbolTable = malloc(sizeof(SymbolTable));
    symbolTable->table = malloc(SYMBOL_TABLE_SIZE * sizeof(Symbol*) );
    symbolTable->head = 0;
}

void delete_symbol_table(){
    free(symbolTable->table);
    free(symbolTable);
}

void delete_temp_table(){
    free(tempTable->table);
    free(tempTable);
}

bool empty_table(){
    return symbolTable->head == 0;
}

bool empty_temp_table(){
    return tempTable->head == 0;
}


int pop_temp_table(){
    if( empty_temp_table() ){
        fprintf(stderr,"ERROR - We tried to pop element from empty stack\n");
        return -1;
    } else{
        tempTable->head--;
        int answer = tempTable->table[tempTable->head]->adress;
        free(tempTable->table[tempTable->head]);
        return answer;
    }
}

// Returns the adress were variable has been pushed
int queryAdress_temp_table(){
    if( tempTable->head == TEMP_TABLE_SIZE ){
        fprintf(stderr,"ERROR - We tried to push element in full stack, avoided not to SEGFAULT\n");
        return -1;
    }

    else{
        TempSymbol* sym = malloc(sizeof(TempSymbol*));
        sym->adress = SYMBOL_TABLE_SIZE + tempTable->head;
        tempTable->table[tempTable->head] = sym;
        tempTable->head++;
        return sym->adress;
    }

}

void add_symbol(char* name){
    
    Symbol* sym = malloc(sizeof(Symbol));
    sym->name = name;
    sym->depth = actualDepth;

    // Adding symbol to the first available space (head) of the table
    symbolTable->table[symbolTable->head] = sym; 
    symbolTable->head++;

    if (symbolTable->head == SYMBOL_TABLE_SIZE){
        free(sym);
        fprintf(stderr,"ERROR - We tried to add an element to a full table, doing nothing to avoid SEGFAULT\n");
    }
}

void depth_decrease(){ 
    actualDepth--;
    display_symbol_table();
    if( empty_table() ) return;
    
    // while the last element of the table is is deaper than actual depth
    while( symbolTable->table[symbolTable->head-1]->depth > actualDepth){
        free(symbolTable->table[symbolTable->head]);
        symbolTable->head--;
        if( empty_table() ) break;
    }
}

void depth_increase(){
    printf("DEPTH INCREASED : %d\n", ++actualDepth);
}


int get_symbol_adress (char *name_symbol){
    if( empty_table() ){
        fprintf(stderr,"ERROR - We looked for a symbol in an empty table, returning NULL to avoid SEGFAULT\n");
        return -1;
    }
    for(int i=symbolTable->head-1;i>=0; i--){
        if (strcmp(name_symbol, symbolTable->table[i]->name) == 0)
            return i;
    }
    fprintf(stderr,"ERROR - We looked for a symbol which isn't in the table\n");
    return -1;
}

void display_symbol(Symbol *s){
    printf("| Name : %s\n", s->name);
    printf("| Depth : %d\n", s->depth);
}


bool check_symbol (char *name){
    for(int i=symbolTable->head-1;i>=0; i--){
        if (strcmp(name, symbolTable->table[i]->name) == 0)
            return true;
    }
    return false;
}



void display_symbol_table(){
    printf("---------------------\n");
    for(int i=0; i<symbolTable->head; ++i){
        printf("|  Symbol @%d :\n", i);
        display_symbol(symbolTable->table[i]);
        printf("---------------------\n");
    }
}


