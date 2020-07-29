#include <stdio.h>
/* C) */
#include "common.h"

/* A) */
#define YES 1
/* B) */
#define NO 0

/* D) */
#line 3000

/* E) */
#if defined(TRUE)
    #undef TRUE
    #define TRUE 1
#endif

/* F) */
#ifdef TRUE
    #undef TRUE
    #define TRUE 1
#endif

/* G) */
#if TRUE
    #define FALSE 0
#else
    #define FALSE 1
#endif


/* H) */
#define CUBE_VOLUME(x) ((x) * (x) * (x))


/**
 * main - I do the description of points
 *
 * Return: 0 if is success
 */
int main(void)
{
	printf("Successful\n");

	return (0);
}
