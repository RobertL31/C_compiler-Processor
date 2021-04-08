#include "assembly.h"
#include "symbols.h"
#include <stdlib.h>
#include <string.h>


#define INSTR_TABLE_SIZE 10000

#define MAX_LINE_SIZE 50


#define NB_DEFINED_INSTRUCTIONS 12
char* defined_instructions[NB_DEFINED_INSTRUCTIONS][2] =
{
    {"ADD","1"}, 
    {"MUL","2"}, 
    {"SOU","3"},
    {"DIV","4"},
    {"COP","5"},
    {"AFC","6"},
    {"JMP","7"},
    {"JMF","8"},
    {"INF","9"},
    {"SUP","A"},
    {"EQU","B"},
    {"PRI","C"},
    
};


typedef struct s_instr_tab {
    char **table;
    int head;
} InstrTab;


InstrTab *instrTab;

void init_instr_tab(){
    instrTab = malloc(sizeof(InstrTab));
    instrTab->table = malloc( INSTR_TABLE_SIZE * sizeof(char*));
    instrTab->head = 0;
}


void delete_instr_tab(){
    for(int i=0; i<instrTab->head; ++i){
        free(instrTab->table[i]);
    }
    free(instrTab->table);
    free(instrTab);
}


int get_line_number(){
    return instrTab->head;
}


int write_in_array(char *string){
    char* word = malloc(strlen(string)+1);
    //strcpy, attaque possible ?
    strcpy(word,string);
    instrTab->table[instrTab->head] = word;
    return instrTab->head++;
    // We return the line on which we just wrote, and then increment the head.
}

void patch(int line_index, int dest_index){
    char *final_string = malloc(strlen(instrTab->table[line_index]) + 5 + 1);
    // 4 is the maximum number of digit for a line index + 1 for the space
    // We consider that our assembly file won't do more than 9999 lines.
    sprintf(final_string,"%s %d", instrTab->table[line_index], dest_index);
    free(instrTab->table[line_index]);
    instrTab->table[line_index] = final_string;
}


void write_in_file(){
    FILE *readable_assembly;
    readable_assembly = fopen("./readable_assembly.txt", "w+");
    for(int i=0; i<instrTab->head; ++i){
        fprintf(readable_assembly,"%s\n",instrTab->table[i]);
    }

    translate_to_assembly(readable_assembly);

    fclose(readable_assembly);
}


void translate_to_assembly(FILE* readable_assembly){
    
    rewind(readable_assembly);

    FILE *code_assembly;
    code_assembly = fopen("./code_assembly.txt", "w+");
    char line[MAX_LINE_SIZE] = "";

    while( fgets(line, MAX_LINE_SIZE, readable_assembly) != NULL ){
        int instr_index = get_instruction_code(line);
        char *space_position = strchr(line,' ');
        fprintf(code_assembly,"%c %s", defined_instructions[instr_index][1][0], space_position+1);
    } 
}


int get_instruction_code(char *instruction){
    char copy[MAX_LINE_SIZE];
    strcpy(copy,instruction);
    // We could replace the 4th character of the line with '\0' because all instructions
    // are 3-characters large. However, we choose to replace th efirst space with '\0'
    // so that any instructions size is possible.
    char *space_position = strchr(copy,' ');
    *space_position = '\0';
    // With '\0' placed, it is now much more easy to compare the instruction keyword with constants.
    for(int i=0; i<NB_DEFINED_INSTRUCTIONS; ++i){
        if( strcmp(copy,defined_instructions[i][0]) == 0){
            return i;
        }
    }
    fprintf(stderr,"FATAL ERROR - Unknown instruction is assembly, please check ./readable_assembly.txt");
}