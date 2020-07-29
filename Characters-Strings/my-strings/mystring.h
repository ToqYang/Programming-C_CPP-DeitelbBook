#ifndef COMPARISON
#define COMPARISON

#include <stdio.h>

int str_cmp(const char *s1, const char *s2);
int strn_cmp(const char *s1, const char *s2, size_t n);
char *str_cpy(char *s1, const char *s2);
char *strn_cpy(char *s1, const char *s2, size_t n);
char *str_cat(char *s1, const char *s2);
char *strn_cat(char *s1, const char *s2, size_t n);
size_t str_len(const char *s);

#endif
