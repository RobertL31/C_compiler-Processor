#ifndef __SYMBOLS_H__
#define __SYMBOLS_H__

#include "global.h"

#include <stdbool.h>

int get_depth();
void init_symbol_table();
void init_temp_table();
void add_symbol(char* name, TypeInfos typeInfos);
void depth_decrease();
void depth_increase();
void display_symbol_table();
int get_symbol_adress(char *name_symbol);

int pop_temp_table();
int queryAdress_temp_table();
void delete_symbol_table();
void delete_temp_table();

bool check_symbol (char *name);
char *type_to_string(TypeValue tv);


#endif

