#ifndef UTIL_H
#define UTIL_H
#include <assert.h>

typedef char * string;
string String(char *);

// typedef char bool;
#define True 1;
#define False 0;

void *checked_malloc(int);


#endif