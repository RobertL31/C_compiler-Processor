#ifndef __GLOBAL_H__
#define __GLOBAL_H__

#include <stdbool.h>

// Global.h is used as a trick to be able using TypeInfos in compiler.y

typedef enum TypeValue_e{
    INT
} TypeValue;

typedef struct TypeInfos_s {
    int ptr_level;
    bool constantness;
    TypeValue type;
} TypeInfos;


#endif