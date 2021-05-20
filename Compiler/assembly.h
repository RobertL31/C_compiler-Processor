#ifndef __ASSEMBLY_H__
#define __ASSEMBLY_H__

#include <stdio.h>

int write_in_array(char *string);
int get_line_number();
void patch(int line_index, int dest_index);
void write_in_file();
void init_instr_tab();
void delete_instr_tab();

int get_instruction_code(char *instruction);
void translate_to_assembly(FILE* readable_assembly);

#endif