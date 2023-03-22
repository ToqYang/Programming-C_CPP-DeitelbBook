#ifndef CHARACTERS_HANDLING
#define CHARACTERS_HANDLING

#include <stdio.h>

int is_blank(int c);
int is_digit(int c);
int is_alpha(int c);
int is_alnum(int c);
int is_xdigit(int c);
int is_lower(int c);
int is_upper(int c);
int to_lower(int c);
int to_upper(int c);
int is_sspace(int c);
int is_cntrl(int c);
int is_punct(int c);
int is_print(int c);
int is_graph(int c);

#endif
